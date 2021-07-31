// strtol

#include<stdio.h>
#include<stdlib.h>
main()
{
    long num;
    num = strtol("12345Decimal value",NULL,10);
    printf("\n %ld",num);

    num = strtol("65432 Octal value",NULL,8);
    printf("\n %ld",num);

    num = strtol("10110101 Binary value",NULL,2);
    printf("\n %ld",num);

    num = strtol("A7CB4 Hexadecimal value",NULL, 16);
    printf("\n %ld",num);
}
