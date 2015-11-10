#include<stdio.h>
typedef struct COMPLEX{
    long double x;
    long double y;
}Complex;
Complex mult2(Complex, Complex);
Complex add2(Complex, Complex);
Complex square(Complex);
Complex juliamap(Complex, Complex);
void complex_print(Complex);
Complex mult2(Complex a, Complex b){
    Complex c;
    c.x = a.x * a.y - b.x * b.y;
    c.y = a.x * b.y + b.x * a.y;
    return c;
}
Complex add2(Complex a, Complex b){
    Complex z;
    z.x = a.x + b.x;
    z.y = a.y + b.y;
    return z;
}
Complex square(Complex z){
    Complex s;
    s.x = sqrt(z.x);
    s.y = sqrt(z.y);
    return s;
}
Complex juliamap(Complex z, Complex c){
    Complex j;
    j.x = (pow(z.x, 2)) + c.x;
    j.y = (pow(z.y, 2)) + c.y;
    return j;
}
void complex_print(Complex z){
    printf("\nZ = %Lfx + %Lfyi\n", z.x, z.y);
}
