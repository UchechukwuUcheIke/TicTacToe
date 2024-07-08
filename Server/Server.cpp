#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winsock2.h>
#include "../TicTacToe/Game.h"
#pragma comment(lib, "ws2_32.lib")

#define PORT 8888


int main() {
    // Initialze winsock
    WSADATA wsaData;
    SOCKET serverSocket, clientSocket1, clientSocket2;

    struct sockaddr_in server, client;
    int c, read_size;
    char message[2000];
    char client_message[2000];

    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        printf("Failed. Error Code: %d", WSAGetLastError());
        return -1;
    }

    if ((serverSocket = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET) {
        printf("Could not create socket: %d", WSAGetLastError());
        return -1;
    }

    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(PORT);

    if (bind(serverSocket, (struct sockaddr*)&server, sizeof(server)) == SOCKET_ERROR) {
        printf("Bind failed with error code: %d", WSAGetLastError());
        return -1;
    }

    listen(serverSocket, 3);

    c = sizeof(struct sockaddr_in);

    // Accept the first client
    clientSocket1 = accept(serverSocket, (struct sockaddr*)&client, &c);
    if (clientSocket1 == INVALID_SOCKET) {
        return -1;
    }
    char msg_buffer[200];
    sprintf_s(msg_buffer, 200, "MSG: Wait");
    send(clientSocket1, msg_buffer, 200, 0);

    clientSocket2 = accept(serverSocket, (struct sockaddr*)&client, &c);
    if (clientSocket2 == INVALID_SOCKET) {
        return -1;
    }

    // Initialize the game board
    Game game = Game();


    closesocket(serverSocket);
    closesocket(clientSocket1);
    closesocket(clientSocket2);
    WSACleanup();

    return 0;

}
