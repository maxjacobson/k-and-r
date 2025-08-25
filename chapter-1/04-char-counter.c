#include <stdio.h>

main(void)
{
    printf("Enter text and I will count it: \n");
    long nc;
    nc = 0;
    while (getchar() != EOF)
        ++nc;

    printf("OK here we go: ");
    printf("%ld\n", nc);
}
