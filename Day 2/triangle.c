#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the first side:");
    scanf("%d",&a);
    printf("enter the second side:");
    scanf("%d",&b);
    printf("enter the third side:");
    scanf("%d",&c);
    if(a==b&&b==c){
        printf("it is an equilateral triangle");}
    else if(a+b>c){
        printf("it is an right angle triangle");}
    else {
        printf("not possile");}

    return 0;
    
}
