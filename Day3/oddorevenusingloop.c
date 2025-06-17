#include <stdio.h>
int num;
int main()
{
    
    printf("enter a number:");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        if(i%2==0){
            printf("%d is even\n",i);
        }
        else{
            printf("%d is odd\n",i);
        }
    }
    return 0;
}
