#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int n,
                 i,
                 j;
    int a[9];

    printf("Enter a number between 2 and 9: ");

    while (1 != scanf("%d", &n) || n <= 1 || n > 9) {
        printf("Wrong data, enter again: ");
        fflush(stdin);
    }

    printf("\n");

    for (i = 0; i < n; i++) a[i] = i + 1;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%2d ", a[(i + j) % n]);
        }

        printf("\n");
    }

    printf("\n");
    system("PAUSE");
    return 0;
}