//Write the function to print all unique elements in an array?
#include<stdio.h>
void all_unique_elements(int b[],int size);
int main(){
    int arr[10],i,result,n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter the %d element: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);   
    }
    all_unique_elements(arr,n);
    
}
   
 void all_unique_elements(int b[],int size){
      int i,j,count;
    for(i=0;i<size;i++){
        count=0;
        for(j=0;j<size;j++){
            if(b[i]==b[j]){
             count++;
            }
        }
          if (count == 1) {
            printf("%d ", b[i]);
        
    }   
}
 }
 