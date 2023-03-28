#ifndef LED_H /*define the header fille name*/
#define LED_H

void led_on(void)
{
 LED=0;
}

void led_off(void)
{
 LED=1;
}

void led_toggle(void)
{
 LED=!LED;
}

#endif
