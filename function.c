#include <stdio.h>
#include "function.h"

void addApps(struct PlayStoreApp *appsArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Play Store App %d:\n", i + 1);
        printf("App Name: ");
        scanf("%s", appsArray[i].appName);
        printf("Code: ");
        scanf("%d", &appsArray[i].code);
        printf("Developer: ");
        scanf("%s", appsArray[i].developer);
        printf("Size (in MB): ");
        scanf("%f", &appsArray[i].size);
        printf("Downloads: ");
        scanf("%d", &appsArray[i].downloads);
    }
}

void printApps(struct PlayStoreApp *appsArray, int arraySize) {
    printf("\nPlay Store App Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Play Store App %d:\n", i + 1);
        printf("App Name: %s\n", appsArray[i].appName);
        printf("Code: %d\n", appsArray[i].code);
        printf("Developer: %s\n", appsArray[i].developer);
        printf("Size: %.2f MB\n", appsArray[i].size);
        printf("Downloads: %d\n", appsArray[i].downloads);
    }
}

