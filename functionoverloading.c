// function overloading

#include<stdio.h>
int area(int a);
int area(int x, int y);
int area(float a);

void main() {
printf("Area of a square: %d", area(5));
printf("Area of a rectangle: %d", area(5,6));
printf("Area of a circle: %f", area(5.0));
}
int area(int a){
return a*a;
}
int area(int m, int n){
return m*n;
}
float area(float x){
return 3.14*x*x;
}	