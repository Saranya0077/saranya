#include <stdio.h>

int main()
{
    int a=7,b=6,c=5;
    ((a>b&&a>c))?printf("A is greater"):((b>a&&b>c))?printf("B is greater"):printf("C is greater");
    return 0;
}
