#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winsock2.h>
#include <iostream>
#include <string>

#pragma comment(lib, "ws2_32.lib")

#define PORT 8888
#define SERVER_IP "127.0.0.1"

void printBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", board[i][j]);
            if (j < 2) printf("| ");
        }
        printf("\n");
        if (i < 2) printf("--+---+--\n");
    }
}

int main() {
    WSADATA wsa;
    SOCKET server_socket;
    struct sockaddr_in server;
    char msg_buffer[200];
    int recv_size;

    int header_size = 6;

    // Initialize Winsock
    printf("\nInitializing Winsock...");
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
        printf("Failed. Error Code: %d", WSAGetLastError());
        return 1;
    }
    printf("Initialized.\n");

    // Create socket
    if ((server_socket = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET) {
        printf("Could not create socket: %d", WSAGetLastError());
        return 1;
    }
    printf("Socket created.\n");

    // Prepare the sockaddr_in structure
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr(SERVER_IP);
    server.sin_port = htons(PORT);

    // Connect to server
    if (connect(server_socket, (struct sockaddr*)&server, sizeof(server)) < 0) {
        printf("Connect failed with error code: %d", WSAGetLastError());
        return 1;
    }
    std::cout << "Connected" << "\n";

    const size_t header_buffer_size = 6;
    char header_buffer[header_buffer_size];
    ZeroMemory(header_buffer, header_buffer_size);

    while (1) {
        recv(server_socket, header_buffer, 5, 0);

        if (strcmp(header_buffer, "REQMV") == 0) {
            char msg_buffer[200];
            ZeroMemory(msg_buffer, 200);
            const char* header = "RESMV:";
            strcpy(msg_buffer, header);

            std::string move;
            getline(std::cin, move);
            const char *move_cstr = move.c_str();
            move[3] = '\0';

            strcat(msg_buffer, move_cstr);

            send(server_socket, msg_buffer, 200, 0);
        }
        else if (strcmp(header_buffer, "BOARD") == 0) {
            char msg_buffer[200];
            recv(server_socket, msg_buffer, 195, 0);
            std::cout << msg_buffer << "\n";
        }
        else if (strcmp(header_buffer, "STATE") == 0) {
            char msg_buffer[200];
            recv(server_socket, msg_buffer, 195, 0);
            std::cout << msg_buffer << "\n";
        }


    }    

    closesocket(server_socket);
    WSACleanup();

    return 0;
}
