#include <mega8.h>
#include <stdio.h>
#include <delay.h>
#include <string.h>

#define RED     PORTC.1
#define GREEN   PORTC.3
#define BLUE    PORTC.4
#define Relay   PORTC.0

void main(void)
{
    unsigned char x[13];
    unsigned char y[20];

    DDRB=(1<<DDB7) | (1<<DDB6) | (1<<DDB5) | (1<<DDB4) | (1<<DDB3) | (1<<DDB2) | (1<<DDB1) | (1<<DDB0);
    PORTB=(0<<PORTB7) | (0<<PORTB6) | (0<<PORTB5) | (0<<PORTB4) | (0<<PORTB3) | (0<<PORTB2) | (0<<PORTB1) | (0<<PORTB0);
    DDRC=(1<<DDC5) | (1<<DDC4) | (1<<DDC3) | (1<<DDC2) | (1<<DDC1) | (1<<DDC0);
    PORTC=(0<<PORTC5) | (0<<PORTC4) |(0<<PORTC3) | (1<<PORTC2) | (0<<PORTC1) | (0<<PORTC0);

    UCSRA=(0<<RXC) | (0<<TXC) | (0<<UDRE) | (0<<FE) | (0<<DOR) | (0<<UPE) | (0<<U2X) | (0<<MPCM);
    UCSRB=(0<<RXCIE) | (0<<TXCIE) | (0<<UDRIE) | (1<<RXEN) | (1<<TXEN) | (0<<UCSZ2) | (0<<RXB8) | (0<<TXB8);
    UCSRC=(1<<URSEL) | (0<<UMSEL) | (0<<UPM1) | (0<<UPM0) | (0<<USBS) | (1<<UCSZ1) | (1<<UCSZ0) | (0<<UCPOL);
    UBRRH=0x00;
    UBRRL=0x33;

    while (1)
    {
        gets(y,20);    
        strncpy(x,y,12);   
        x[12] = '\0';
        
        if (strcmp(x,"Open Door Ok") == 0)
        {
            printf("Door Openning");
            Relay = 1;
            delay_ms(300);
            Relay = 0;
        }    
        else
        {
            if (strcmp(x,"Turn On Red.") == 0)
            {
                RED = 0;
                BLUE = 1;
                GREEN = 1;   
                printf("Red Led Turned On");
            }
            else
            {
                if (strcmp(x,"Turn On Blue") == 0)
                {
                    RED = 1;
                    BLUE = 0;
                    GREEN = 1;  
                    printf("Blue Led Turned On");
                }  
                else
                {
                    if (strcmp(x,"TurnOn Green") == 0)
                    {
                        RED = 1;
                        BLUE = 1;
                        GREEN = 0;
                        printf("Green Led Turned On");
                    } 
                    else
                    {
                        if (strcmp(x,"Turn On Cyan") == 0)
                        {
                            RED = 1;
                            BLUE = 0;
                            GREEN = 0; 
                            printf("Cyan Led Turned On");
                        } 
                        else
                        {
                            if (strcmp(x,"Turn Off Led") == 0)
                            {
                                RED = 1;
                                BLUE = 1;
                                GREEN = 1; 
                                printf("Leds Turned Off !");
                            }
                            else
                            {
                                if (strcmp(x,"TurnOnPurple") == 0)
                                {
                                    RED = 0;
                                    BLUE = 0;
                                    GREEN = 1; 
                                    printf("Purple Led Turned On");
                                }
                                else
                                {
                                    if (strcmp(x,"TurnOn White") == 0)
                                    {
                                        RED = 0;
                                        BLUE = 0;
                                        GREEN = 0; 
                                        printf("White Led Turned On");
                                    }    
                                    else
                                    {
                                        if (strcmp(x,"TurnOnYellow") == 0)
                                        {
                                            RED = 0;
                                            BLUE = 1;
                                            GREEN = 0; 
                                            printf("Yellow Led Turned On");
                                        }  
                                        else
                                        {
                                            printf("Unknown Command");
                                        }                                      
                                    }                            
                                }
                            }                         
                        }                    
                    }               
                }
            }
        }
    }
}
