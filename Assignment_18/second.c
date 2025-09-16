//Q1>WAF to find the smallest number from the given array of any size?(TSRS)
#include<stdio.h>
int smallest (int b[],int size);
int main(){
    int a[5],i,k;
    printf("Enter the number: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    k=smallest(a,5);
    printf("smallest number in an array is %d ",k);
    return 0;

}
int smallest(int b[],int size){
    int min;
    min=b[0];
    for(int i=1;i<size;i++){
        if(b[i]<min){
        min=b[i];
        }
        
    }
    return min;
}