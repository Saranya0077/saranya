#include <stdio.h>

int main()
{
    int a=5,b=7;
    a=a^b;//a=? b=?
    b=a^b;//a=? b=?
    a=a^b;//a=? b=?
    printf("a=%d b=%d",a,b);

    return 0;
}
