#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long computeTotalSeconds(char *timeString) {
    char *token;
    unsigned long totalSeconds = 0;
    token = strtok(timeString, ":");
    unsigned long hours = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    unsigned long minutes = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    unsigned long seconds = strtoul(token, NULL, 10);

    totalSeconds = hours * 3600 + minutes * 60 + seconds;

    return totalSeconds;
}

int main() {
    char timeString[9]; 
    printf("Enter the time in hh:mm:ss format: ");
    gets(timeString);
    unsigned long totalSeconds = computeTotalSeconds(timeString);
    printf("Total Seconds: %lu\n", totalSeconds);
    
    return 0;
}
