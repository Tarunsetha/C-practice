// Q5>Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element?
#include<stdio.h>
int adjacent_duplicate_values(int b[],int size);
int main(){
    int arr[10],i,k;
    printf("Enter the number: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    k= adjacent_duplicate_values( arr,10);
    printf("First adjacent duplicate value = %d ",k);

}
int adjacent_duplicate_values(int b[],int size){
int i,j,temp;
for (i=0;i<10;i++){
    temp=b[0];
    for(j=1;j<10;j++){
    if(b[i]==b[j])
        return b[i];
    else
     b[i]=b[j];
    }
}
}