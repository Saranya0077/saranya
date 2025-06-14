#include <stdio.h>

int main()
{
    int num = 1101,sum = 0,val = 1;
    while(num>0){ 
        if(num%10 ==1){
        sum+=val;
         } 
      val=val*2;
      num = num/10;
    }
printf("%d",sum);
return 0;
}
