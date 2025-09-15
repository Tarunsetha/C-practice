//Q7>WAP to find second largest number in an array.TAke array values from the user?
#include<stdio.h>
int main(){
    int arr[10], biggest, second, i;

    printf("Enter the number: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
   if (arr[0] > arr[1]) {
        biggest = arr[0];
        second = arr[1];
    } else {
        biggest = arr[1];
        second = arr[0];
    }  

    for (i = 1; i < 10; i++) {
        if (arr[i] > biggest) {
            second = biggest;
            biggest = arr[i];
        } else if (arr[i] > second && arr[i] != biggest) {
            second = arr[i];
        }
    }

    printf("The second largest number in the array = %d\n", second);

    return 0;
}
