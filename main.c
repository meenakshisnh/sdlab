
#include <stdio.h>

int main()
{
    char ch1,ch2;
    scanf("%c %c",&ch1,&ch2);
    if(toupper(ch1)=='U'){
        for(char i='A';i<'Z';i++){
            if(i==toupper(ch2)){
                continue;
            }
            printf("%c ",i);
        }
    }
    if(tolower(ch1)=='l'){
        for(char i='a';i<'z';i++){
            if(i==tolower(ch2)){
                continue;
            }
            printf("%c ",i);
        }
    }
}
