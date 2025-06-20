#include <stdio.h>

int main()
{
    int num;
    printf("enter a num");
    scanf("%d",&num);
    for(int i=num;i<=num*10;i+=num){
        printf("%d\n",i);
    }
    
    return 0;
}
