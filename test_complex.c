#include <stdio.h>
#include <complex.c>

void test(Complex, Complex, Complex, Complex);

int main(){
    long double x1, y1, x2, y2;
    Complex a, b, c, j, s, z;
    printf("Enter first complex number : ");
    scanf("%Lf+%Lfi", &x1, &y1);
    printf("\nEnter second complex number : ");
    scanf("%Lf+%Lfi", &x2, &y2);
    a.x = x1;
    b.x = y1;
    a.y = x2;
    b.y = y2;
    c = mult2(a, b);
    z = add2(a, b);
    s = square(z);
    j = juliamap(c, z);
    test(c, z, s, j);
    complex_print(z);
    return 0;
}

void test(Complex c, Complex z, Complex s, Complex j){
    printf("\nAfter multiplication: %Lf+%Lfi", c.x, c.y);
    printf("\nAfter addition: %Lf+%Lfi", z.x, z.y);
    printf("\nThe square is: %Lf+%Lfi", s.x, s.y);
    printf("\nThe juliamap is: %Lf+%Lfi", j.x, j.y);
    
}
