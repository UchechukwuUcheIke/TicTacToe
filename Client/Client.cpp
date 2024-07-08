#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winsock2.h>

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
    SOCKET s;
    struct sockaddr_in server;
    char message[2000], server_reply[2000];
    int recv_size;

    // Initialize Winsock
    printf("\nInitializing Winsock...");
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
        printf("Failed. Error Code: %d", WSAGetLastError());
        return 1;
    }
    printf("Initialized.\n");

    // Create socket
    if ((s = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET) {
        printf("Could not create socket: %d", WSAGetLastError());
        return 1;
    }
    printf("Socket created.\n");

    // Prepare the sockaddr_in structure
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr(SERVER_IP);
    server.sin_port = htons(PORT);

    // Connect to server
    if (connect(s, (struct sockaddr*)&server, sizeof(server)) < 0) {
        printf("Connect failed with error code: %d", WSAGetLastError());
        return 1;
    }
    printf("Connected.\n");

    recv(s, server_reply, 200, 0);
    printf("Sever reply: %s\n");
    // Game loop
    while (1) {
        // Receive a message from the server
        if ((recv_size = recv(s, server_reply, 2000, 0)) == SOCKET_ERROR) {
            printf("recv failed");
            break;
        }
        server_reply[recv_size] = '\0';
        printf("%s", server_reply);

        // Receive the board state
        if ((recv_size = recv(s, server_reply, sizeof(char[3][3]), 0)) == SOCKET_ERROR) {
            printf("recv failed");
            break;
        }
        char board[3][3];
        memcpy(board, server_reply, sizeof(board));
        printBoard(board);

        // Get player's move
        printf("Enter your move (row and column): ");
        fgets(message, sizeof(message), stdin);

        // Send the move to the server
        if (send(s, message, strlen(message), 0) < 0) {
            printf("Send failed");
            break;
        }
    }

    closesocket(s);
    WSACleanup();

    return 0;
}
