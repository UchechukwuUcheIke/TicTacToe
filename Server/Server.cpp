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
    ZeroMemory(msg_buffer, 200);
    sprintf_s(msg_buffer, 200, "STATE: Waiting for player");
    send(clientSocket1, msg_buffer, 200, 0);

    clientSocket2 = accept(serverSocket, (struct sockaddr*)&client, &c);
    if (clientSocket2 == INVALID_SOCKET) {
        //TODO: Send message to client if connection of second player fails
        return -1;
    }

    std::cout << "Accepted both clients";
    // Initialize the game board
    Game game = Game();
    int currentPlayer = 0;
    while (1) {
        SOCKET currentClient = currentPlayer == 0 ? clientSocket1 : clientSocket2;
        ZeroMemory(msg_buffer, 200);
        std::cout << "Asking for move from" << currentPlayer << "\n";
        sprintf_s(msg_buffer, 200, "REQMV");
        send(currentClient, msg_buffer, 200, 0);
        
        // Client sends a message with format: "MOVE: x y"
        recv(currentClient, msg_buffer, 200, 0);

        std::cout << "msg_buffer" << msg_buffer << "\n";
        std::cout << "Strlen(Resmv)" << strlen(msg_buffer) << "\n";

        char row_char;
        char col_char;
        sscanf_s(msg_buffer, "RESMV:%c %c", &row_char, 1, &col_char, 1);
        
        int row = int(row_char);
        int col = int(col_char);
        //game.takeTurn(row, col);
        std::cout << "Received move: " << row_char << " " << col_char << "\n";

        ZeroMemory(msg_buffer, 200);
        strcpy(msg_buffer, "BOARD:||||");
        //strcat_s(msg_buffer, game.getBoardString());

        std::cout << "Sending Board to clients";
        send(clientSocket1, msg_buffer, 200, 0);
        send(clientSocket2, msg_buffer, 200, 0);

    }


    closesocket(serverSocket);
    closesocket(clientSocket1);
    closesocket(clientSocket2);
    WSACleanup();

    return 0;

}
