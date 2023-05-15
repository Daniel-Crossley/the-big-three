#include <stdio.h>
#include <string.h>

#define MAX_DATA 512

int main(int argc, char *argv[]) {
    char a[MAX_DATA];  
    char b[MAX_DATA];  

    printf("a = ");
    fgets(a, sizeof(a), stdin);

    printf("b = ");
    fgets(b, sizeof(b), stdin);

    a[strcspn(a, "\n")] = 0;
    b[strcspn(b, "\n")] = 0;

    printf("Perform Swap:\n");

    printf("a = %s, b = %s\n", b, a);

    return 0;
}
