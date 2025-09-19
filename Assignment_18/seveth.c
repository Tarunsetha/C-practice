//Q7>Write a function to count a total number of duplicate elements in an array. (Means elements that occurs 2 times in an array)?
#include<stdio.h>
int total_number_of_duplicate_elements(int b[],int size);
int main(){
    int arr[10],i,result,n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter the array element: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);   
    }
    result =total_number_of_duplicate_elements( arr,n);
  printf("Total number of elements that occur exactly %d times",result);

}
int  total_number_of_duplicate_elements(int b[],int size){
    int i,j,k;
    for(i=0,k=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(b[i]==b[j]){
             k++;
            }
        }
    }
  return k;
    
}







// 3. Write a function to print all unique elements in an array.

// 4. Write a function to merge two arrays of the same size sorted in descending order.

// 5. Write a function to count the frequency of each element of an array