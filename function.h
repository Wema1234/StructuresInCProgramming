#ifndef FUNCTION_H
#define FUNCTION_H

struct PlayStoreApp {
    char appName[100];
    int code;
    char developer[100];
    float size;
    int downloads;
};

void addApps(struct PlayStoreApp *appsArray, int arraySize);
void printApps(struct PlayStoreApp *appsArray, int arraySize);

#endif

