#include <stdio.h>


    char value;
    int main(){
        printf("enter the value");
        scanf("%c",&value);
        if(value>=97 && value<=122){
            int a=value-31;
            printf("%c",a);}
            
            else if(value>=65 && value<=90){
                int b=value+33;
                printf("%c",b);
            }
            else if(value==value){
                int c=value;
                printf("%c",c);
            }
        
    
    

    return 0;
}
