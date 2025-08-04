#include<stdio.h>
int main(){
    //Q>2Wap to take the marks of 5 subject ? The passing marks of each subject  33 out of 100 , NOW check the whether student are passed or failed?
    int m1,m2,m3,m4,m5;
    printf("enter the marks of five subject ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    if(m1>=33&&m2>=33&&m3>=33&&m4>=33&&m5>=33)
        printf("Student are passed");
    else
    printf("Student are failed");
    return 0;
}