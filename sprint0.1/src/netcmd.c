// src/netcmd.c

#include "common.h"

void run_netstat_commands(int choice, char *output) {
    FILE *fp;
    char buffer[2048];  // Increased buffer size

    // Clear previous output
    memset(output, 0, 2048);  // Clear the output buffer with the correct size

    const char *cmd = NULL;

    switch (choice) {
        case 1:
            cmd = "netstat -s";  // Protocol Statistics
            break;
        case 2:
            cmd = "netstat -r";  // Routing Table
            break;
        case 3:
            cmd = "netstat -tn";  // Active TCP
            break;
        case 4:
            cmd = "netstat -un";  // Active UDP
            break;
        case 5:
            cmd = "netstat -tanp | grep -i firefox";  // Internet connections (Firefox)
            break;
        case 6:
            cmd = "netstat -tanp | grep -i LISTEN";  // LISTEN connections
            break;
        default:
            log_message(LOG_WARNING, "Invalid choice");
            return;
    }

    fp = popen(cmd, "r");
    if (fp == NULL) {
        log_message(LOG_FATAL, "Failed to run netstat command");
        return;
    }

    while (fgets(buffer, sizeof(buffer), fp)) {
        strcat(output, buffer);
    }

    if (strlen(output) == 0) {
        strcat(output, "No output returned from netstat command.\n");
    }

    fclose(fp);
}

