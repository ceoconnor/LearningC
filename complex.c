



#include<stdio.h>
typedef struct COMPLEX{
    long double x;
    long double y;
}Complex;
Complex mult2(Complex, Complex);
Complex add2(Complex, Complex);
Complex square(Complex);
Complex juliamap(Complex, Complex);
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
    return 0;
}
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
void test(Complex c, Complex z, Complex s, Complex j){
    printf("\nAfter multiplication: %Lf+%Lfi", c.x, c.y);
    printf("\nAfter addition: %Lf+%Lfi", z.x, z.y);
    printf("\nThe square is: %Lf+%Lfi", s.x, s.y);
    printf("\nThe juliamap is: %Lf+%Lfi", j.x, j.y);
    
}

