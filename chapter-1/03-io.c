#include <stdio.h>

main()
{
    int c;

    printf("EOF is %d\n", EOF);
    printf("EOF == 1 is %d\n", EOF == 1);

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
        printf("hi");
    }
}
