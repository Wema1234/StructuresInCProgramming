#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 8;
    struct PlayStoreApp apps[arraySize];

    // Add apps to the array
    addApps(apps, arraySize);

    // Print the structure elements
    printApps(apps, arraySize);

    return 0;
}

