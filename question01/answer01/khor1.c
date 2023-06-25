#include<stdio.h>

int pow(int x, int y);

void main(){
    int x, y;

    printf("input x value: ");
    scanf("%d", &x);
    printf("input y value: ");
    scanf("%d", &y);

    int z1 = 2 * pow(x, 3) - pow(y, 2);
    int z2 = (x - y) / 2;

    printf("z1 = 2x^3 - y^2 = %d \n", z1);
    printf("z2 = (x - y)/2 = %d", z2);
}
//2*2*2
int pow(int x, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}
