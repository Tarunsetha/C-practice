//Q1>WAF to find the greatest number from the given array of any size?(TSRS)
#include<stdio.h>
int greatest (int b[],int size);
int main(){
    int a[5],i,k;
    printf("Enter the number: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    k=greatest(a,5);
    printf("greatest number in an array is %d ",k);
    return 0;

}
int greatest(int b[],int size){
    int max;
    max=b[0];
    for(int i=1;i<size;i++){
        if(b[i]>max){
        max=b[i];
        }
        
    }
    return max;
}