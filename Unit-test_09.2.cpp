#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "macros18.h"

#define Z 18     

int main()
{
    float x, w;
    char ch;

    puts("Lab 9.2. Variant 18. Using macros and preprocessing directive");
    do
    {
#ifdef Z              
#if Z>10            // якщо z > 10, то w = max(x^3, (x+y)^2)
        float y;
        puts("z > 10: w = max(x^3, (x+y)^2)");
        puts("Input x and y");
        scanf("%f%f", &x, &y);
        w = MAX(CUBE(x), SQR(x + y));
#else               // якщо z <= 10, то w = min(|x-z|, |x+z|)
        puts("z <= 10: w = min(|x-z|, |x+z|)");
        puts("Input x");
        scanf("%f", &x);
        w = MIN(ABS(x - Z), ABS(x + Z));
#endif
#else                   
        float y, z;
        puts("Input z");
        scanf("%f", &z);
        if (z > 10)
        {
            puts("z > 10: w = max(x^3, (x+y)^2)");
            puts("Input x and y");
            scanf("%f%f", &x, &y);
            w = MAX(CUBE(x), SQR(x + y));
        }
        else
        {
            puts("z <= 10: w = min(|x-z|, |x+z|)");
            puts("Input x");
            scanf("%f", &x);
            w = MIN(ABS(x - z), ABS(x + z));
        }
#endif
        PRINTR(w);
        puts("Repeat? y /n ");
        scanf(" %c", &ch);
    } while (ch == 'y');
    return 0;
}
