#include<stdio.h>
int main(){
    //Q7>Wap to check whether a given number is uppercase,lowercase or special character?
     int character;
    printf("Enter the character ");
    scanf("%c",&character);
    if(character>='A' && character<='Z')
    printf("given character is uppercase");
    else if(character>='a' && character<='z')
    printf("given character is lowercase");
    else
    printf("given character is special character");
    return 0;
}