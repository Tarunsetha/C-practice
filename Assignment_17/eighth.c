//Q8>WAP to find second smallest number in an array.Take array values from the user?
#include<stdio.h>

int main(){
    int arr[5],i,second,smallest;
    printf("Enter the number: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    smallest = second = arr[0];
    for(i=1;i<5;i++){
        if(arr[i]<smallest){
            second = smallest;
            smallest = arr[i];
        }
        else if(arr[i]<second && arr[i]!=smallest){
            second = arr[i];
        }
    }

    printf("The second smallest number in the array = %d\n", second);

    return 0;
}