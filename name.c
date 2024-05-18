#include <stdio.h>
#include <string.h>

void printNameWithoutEvenPlaces(char *name) {
    int length = strlen(name);
    printf("Name without even positions: ");
    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) {
            printf("%c", name[i]);
        }
    }
    printf("\n");
}

int main() {
    char name[] = "sanjeevni";
    printNameWithoutEvenPlaces(name);
    return 0;
}