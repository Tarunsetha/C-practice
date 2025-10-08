//Q3>Write a program in C to count the total number of alphabets, digits and special characters in a string?
#include <stdio.h>
int main()
{
    char str[100],str2[100];
    int i,alpha=0,digit=0,special_charcter=0;
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    
    for(i=0;str[i]!='\0';i++){

        if(str[i] >= 'A' && str[i] <= 'Z'||str[i] >= 'a' && str[i] <= 'z'){
        alpha++;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            digit++;
        }
        else{
        special_charcter++;
        }

    }
    printf("the total number of alphabets = %d, digits = %d and special characters = %d in a string",alpha,digit,special_charcter);
}
