//
//  fibonacci.c
//  Fibonacci
//
//  Created by Cormac O'Connor on 11/3/15.
//  Copyright © 2015 Cormac O'Connor. All rights reserved.
//

#include <stdio.h>

int main()
{
    int n, count;
    unsigned long long int x1 = 0, x2 = 1, next;
    
    printf("Enter how many numbers to print:\n");
    scanf("%d", &n);
    
    printf("First %d numbers of the Fibonacci series are:\n", n);
    
    for ( count = 0; count < n; count++ )
    {
        if ( count <= 1 )
        {
            next = count;
        }
        else
        {
            next = x1 + x2;
            x1 = x2;
            x2 = next;
        }
        printf("%llu\n", next);
    }
    
    return 0;
}
