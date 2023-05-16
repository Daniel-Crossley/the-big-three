#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_DATA 512

int main(int argc, char *argv[]) {
    char a[MAX_DATA];  
    char b[MAX_DATA];  

    printf("a = ");
    if (fgets(a, sizeof(a), stdin) == NULL) {
        printf("Failed to read line.\n");
        exit(1);
    }

    printf("b = ");
    if (fgets(b, sizeof(b), stdin) == NULL) {
        printf("Failed to read line.\n");
        exit(1);
    }

    a[strcspn(a, "\n")] = 0;
    b[strcspn(b, "\n")] = 0;

    if (!a[0] || !b[0]) {
       printf("Please input something.\n");
       exit(1);
    }


    printf("Perform Swap:\n");

    printf("a = %s, b = %s\n", b, a);

    return 0;
}
