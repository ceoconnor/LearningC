//
//  complex.c
//  complex
//
//  Created by Cormac O'Connor on 11/2/15.
//  Copyright © 2015 Cormac O'Connor. All rights reserved.
//



#include <stdio.h>
#include <complex.h>

typedef struct COMPLEX{
    float x;
    float y;
}Complex;

Complex mult2 ( Complex, Complex );


Complex square ( Complex );


Complex add2 ( Complex, Complex );


Complex juliamap ( Complex, Complex );


const char * complex_print ( Complex );


const char * test ( Complex, Complex, Complex, Complex );


int main()
{
    float x1, y1, x2, y2;
    Complex a, b, c, z, s, j;
    printf("Enter the first complex number:\n");
    scanf("%f+%fi", &x1, &y1);
    printf("\nEnter the second complex number:\n");
    scanf("%f+%fi", &x2, &y2);
    a.x = x1;
    a.y = y1;
    b.x = x2;
    b.y = y2;
    c = mult2(a, b);
    s = square(z);
    z = add2(a, b);
    j = juliamap(z, c);
    
    printf("The results are: \n%s", test(c, s, z, j));
    return 0;
}

Complex mult2 ( Complex a, Complex b )
{
    Complex c;
    c.x = a.x * b.x - a.y * b.y;
    c.y = a.x * b.y + a.y * b.x;
    return c;
}

Complex square ( Complex z )
{
    Complex s;
    s.x = sqrt(z.x);
    s.y = sqrt(z.y);
    return s;
}

Complex add2 ( Complex a, Complex b )
{
    Complex z;
    z.x = a.x + b.x;
    z.y = a.y + b.y;
    return z;
}

Complex juliamap ( Complex z, Complex c )
{
    Complex j;
    j.x = (pow(z.x, 2)) + c.x;
    j.y = (pow(z.y, 2)) + c.y;
    return j;
}

const char * complex_print ( Complex z )
{
    return "z = %f + %fi";
}

const char * test (Complex c, Complex s, Complex z, Complex j)
{
    return printf("Mult2 = %f + %fi\nSquare = %f + %fi\nAdd2 = %f + %fi\nJuliamap = %f + %fi\nComplex_print = %s", c.x, c.y, s.x, s.y, z.x, z.y, j.x, j.y, complex_print(z));
}




