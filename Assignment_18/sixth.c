// Q6>Write a function to swap two elements of given array with specified indices?
#include <stdio.h>
void swap_two_elements(int b[], int n, int ind1, int ind2);
int main()
{
    int arr[10], i, n, index_1, index_2;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter the array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter two indices to swap : ");
    scanf("%d%d", &index_1, &index_2);

    swap_two_elements(arr, n, index_1, index_2);

       printf("Array after swapping: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
void swap_two_elements(int b[], int n, int ind1, int ind2)
{
int temp=0;
if(ind1 >= 0 && ind1 < n && ind2 >= 0 && ind2 < n){
temp=b[ind2];
b[ind2]=b[ind1];
b[ind1]=temp;
}
else {
        printf("Invalid indices!\n");
    }
}
