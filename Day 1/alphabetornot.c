#include <stdio.h>

int main()
{
    char val='S';
    printf("%d %d %d %d", 'a','z','A','Z');
    if(val>=65 && val<=90||val>=97 && val<=122)
    {
        printf("Alphabet");
    }
     else 
     {
        printf("not and Alphabet");
        
    }
    return 0;
    
}
