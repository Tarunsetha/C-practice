//Q9> WAP to sort an array of 10 elements in desending order?
#include<stdio.h>
int main(){
    int i,j,arr[10],temp ;
    printf("Enter the number: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(arr[i]<arr[j]){
                arr[i]=arr[j];
            }
    }
    }
     for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
}
