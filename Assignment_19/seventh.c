//Q7>Write a program to count vowels in a given string?
#include<stdio.h>
int main(){
    char str[100],ch[5]={'a','i','e','o','u'};
    int i,j, count=0;

    printf("Enter the string ");
    fgets(str,100,stdin);


    for(i=0;str[i];i++){
       for(j=0;j<5;j++){
        if(str[i]==ch[j]||str[i]==ch[j]-32){
        count++;
        }
        
        
      }
    }
        printf("To count number of vowels in a given string %d ",  count);

    return 0;
}