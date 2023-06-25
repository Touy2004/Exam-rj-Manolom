//z1 = 2x^3 - y^2
//z2 = (x+y)/2

#include<stdio.h>
#include<math.h>

void main(){
    double x, y, z1, z2;

    printf("input x value: ");
    scanf("%lf", &x);
    printf(" input y value: ");
    scanf("%lf", &y);

    z1 = pow(x, 2) + pow(y, 2);
    z2 = (x + y) / 2;

    printf("z1 = 2x^3 - y^2 = %.2lf \n", z1);
    printf("z2 = (x - y)/2 = %.2lf", z2);
}