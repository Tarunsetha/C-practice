//Q4>Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29])?
#include<stdio.h>

void left (int b[],int size,int n);
void right (int b[],int size,int n);

int main(){
    int a[5] = {5,4,1,2,3}, n;
   
    printf("Enter the number: ");
    scanf("%d",&n);

    right(a,5,n);
}

void left (int b[],int size,int n){
  int temp,j,i;

  for(int i=0; i<n; i++){             
    temp = b[0];                      
    for( j=0; j<size-1; j++){       
      b[j] = b[j+1];
    }
    b[size-1] = b[j];                
  }

  printf("Array after left rotation: ");
  for(int i=0; i<size; i++){          
      printf("%d ", b[i]);
  }
}
void right (int b[],int size,int n){
  int temp,a,j,i;

  for( i=0; i<n; i++){             
    temp = b[4];                      
    for( j=0; j<size-1; j++){   
      a=b[j];   
      b[j] = temp;
      temp=a;
      
    }
    b[size-1] = temp;                
  }

  printf("Array after right rotation: ");
  for(int i=0; i<size; i++){          
      printf("%d ", b[i]);
  }
}
