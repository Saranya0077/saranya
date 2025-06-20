#include <stdio.h>

int main()
{
    int num=145,sum=0;
    while(num>0){
        int num1=num%10;
        int pro=1;
        for(int i=num1;i>0;i--){
            pro*=i;}
            sum+=pro;
            num/=10;}
            printf("%d",sum);
            return 0;}
