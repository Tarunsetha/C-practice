//Q1>WAF calculate the area of circle ?(TSRS)
#include <stdio.h>
float circle(float,int);
int main(){
  int radius;
  float pie=3.14,s;
  printf("enter the radius of the circle ");
  scanf("%d",&radius);
  s= circle ( pie,radius );
  printf("%.2f",s);
  return 0;

}

  float circle ( float b,int r){
        float a;
        a=b*r*r;
        return a;

    }