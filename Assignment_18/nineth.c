//WAF to merge two arrays of the same size sorted in descending order?
#include <stdio.h>
int sortDescending(int b[],int size);
int main(){
       int n,k;
    printf("Enter the size of arrays: ");
    scanf("%d", &n);

    int arr1[n],arr2[n],merged[2*n],i;
  

    printf("Enter the first array %d element: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);  
         merged[i] = arr1[i];  
    }

     printf("Enter the second array %d element: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr2[i]);   
        merged[n+i] = arr2[i];
    }
      sortDescending(merged, 2*n);
     printf("\nMerged array in descending order:\n");
    for (int i = 0; i < 2*n; i++) {
        printf("%d ", merged[i]);
    }
    return 0;

}
int sortDescending(int b[],int size){
    int i,j,temp;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(b[i]<b[j]){
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
}