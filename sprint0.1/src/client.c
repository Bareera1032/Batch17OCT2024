// src/client.c

#include "common.h"

int main() {
    int sockfd;
    struct sockaddr_in server_addr;
    char buffer[8192];
    int choice;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    if (connect(sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        perror("Connection to server failed");
        close(sockfd);
        exit(EXIT_FAILURE);
    }

    while (1) {
        print_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        send(sockfd, &choice, sizeof(choice), 0);

        if (choice == 7) {
            printf("Exiting...\n");
            break;
        }

        memset(buffer, 0, sizeof(buffer));

        int recv_size = recv(sockfd, buffer, sizeof(buffer) - 1, 0);
        if (recv_size < 0) {
            perror("Failed to receive data from server");
            break;
        }

        buffer[recv_size] = '\0';
        printf("Server response:\n%s\n", buffer);
    }

    close(sockfd);
    return 0;
}

