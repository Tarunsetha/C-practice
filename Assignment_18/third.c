//Q3>WAF to sort an array of any size (TSRN)?
#include<stdio.h>
   void sort (int b[],int size);
    int main(){
    int a[5],i,k;
    printf("Enter the number: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    sort(a,5);
}
void sort (int b[],int size){
    
    int num,temp,i,j;
    for(int i=0;i<size;i++){
    for(j=0+i;j<size;j++){
        if(b[i]>b[j]){
        temp=b[i];
        b[i]=b[j];
        b[j]=temp;
        }
    }
    printf("%d",b[i]);

 }

}
