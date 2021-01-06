#include <iostream>


#include <stdio.h>


unsigned long pow_mod(unsigned long x, unsigned long y, unsigned short z)
{
    unsigned long number = 1;
    while (y)
    {
        if (y & 1)
            number = number * x % z;
        y >>= 1;
        x = x * x % z;
    }
    return number;
}


int main() {
    printf("%ld\n", pow_mod(202021, 202021, 17));
    printf("%ld\n", pow_mod(20202021, 20202021, 17));
}