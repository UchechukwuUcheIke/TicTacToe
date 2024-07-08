// Server.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

#pragma comment(lib, "ws2_32.lib")
#include <WinSock2.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <iostream>

int PORT = 80;

const char szHost[] = "www.google.com";

int main()
{
    WSADATA wsaData;
    WORD DllVersion = MAKEWORD(2, 1);

    if (WSAStartup(DllVersion, &wsaData) != 0) {
        return -1;
    }

    // Create the socket

    SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);

    // Error checking the socket
    if (sock < 0) {
        return -1;
    }

    const char enable = 1;
    if (setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &enable, sizeof(char)) < 0)
        return -1;

    // Get server info
    HOSTENT* host = gethostbyname(szHost);
    // Error checking host
    if (host == nullptr) {
        return -1;
    }

    // Define server info
    SOCKADDR_IN sin;
    ZeroMemory(&sin, sizeof(sin));
    sin.sin_port = htons(PORT);
    sin.sin_family = AF_INET;
    memcpy(&sin.sin_addr.S_un.S_addr, host->h_addr_list[0], sizeof(sin.sin_addr.S_un.S_addr));


    if (connect(sock, (const sockaddr*)&sin, sizeof(sin)) != 0) {
        return -1;
    }

    const char szMsg[] = "HEAD / HTTP/1.0\r\n\r\n";
    if (send(sock, szMsg, strlen(szMsg), 0) == 0) {
        return -1;
    }

    char szBuffer[4096];
    char szTemp[4096];

    recv(sock, szTemp, 4096, 0);
    memcpy(szBuffer, szTemp, 4096);


    std::cout << szBuffer << "\n";

    closesocket(sock);
    getchar();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
