//WAF to count the frequency of each element of an array?

#include <stdio.h>
int countFrequency(int b[],int size);
int main(){
       int n,k;
    printf("Enter the size of arrays: ");
    scanf("%d", &n);

    int arr1[n],i;
  

    printf("Enter the first array %d element: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);    
    }
   sortDescending( arr1,n);
    return 0;

}

int countFrequency(int b[],int size){
    int i,j,count;
    for(i=0;i<size;i++){
        count=1;
        for(j=i+1;j<size;j++){
            if(b[i]==b[j]){
               count++;
            }
        }
         printf("%d occurs %d times\n", b[i], count);
    }
}
