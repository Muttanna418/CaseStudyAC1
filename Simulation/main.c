#include<avr/io.h>
#include"Ac1.h"
#include"AC2.h"
int main(void)
{
    while(1)
    {
        AC1();
        AC2();

    }
    return 0;
}
