#ifndef AC2_H_INCLUDED
#define AC2_H_INCLUDED
#include<util/delay.h>

void AC2(void);
void InitADC(void);
uint16_t ReadADC(uint8_t ch);

#endif /*AC2_H_INCLUDED*/
