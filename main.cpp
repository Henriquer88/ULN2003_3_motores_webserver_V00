#include "mbed.h"

#define velocidade (2)

DigitalOut in1_m1 (D1);
DigitalOut in2_m1 (D2);
DigitalOut in3_m1 (D3);
DigitalOut in4_m1 (D4);

DigitalIn B1  (D5);

DigitalOut in1_m2 (D6);
DigitalOut in2_m2 (D7);
DigitalOut in3_m2 (D8);
DigitalOut in4_m2 (D9);

DigitalIn B2  (D10);

DigitalOut in1_m3(D11);
DigitalOut in2_m3(D12);
DigitalOut in3_m3(D13);
DigitalOut in4_m3(D14);

DigitalIn B3 (D15);

int main()
{
    while(1) {

        if(B1 == 0)

            for( int i = 0; i<1024; i++) { // Motor gira duas vezes no sentido horário

                in1_m1 = 1 ;
                in2_m1 = 0;
                in3_m1 = 0;
                in4_m1 = 0 ;

                wait_ms(velocidade);

                in1_m1 = 0 ;
                in2_m1 = 1;
                in3_m1 = 0;
                in4_m1 = 0 ;
                
                wait_ms(velocidade);

                in1_m1 = 0 ;
                in2_m1 = 0;
                in3_m1 = 1;
                in4_m1 = 0 ;

                wait_ms(velocidade);

                in1_m1 = 0 ;
                in2_m1 = 0;
                in3_m1 = 0;
                in4_m1 = 1;

                wait_ms(velocidade);

            }

        wait(2);

        if(B2 == 0)

            for( int i= 0; i<1024;i++){ // Motor gira duas vezes no sentido horário

                in1_m2 = 1 ;
                in2_m2 = 0;
                in3_m2 = 0;
                in4_m2 = 0 ;

                wait_ms(velocidade);

                in1_m2 = 0;
                in2_m2 = 1;
                in3_m2 = 0;
                in4_m2 = 0 ;
                
                wait_ms(velocidade);

                in1_m2 = 0 ;
                in2_m2 = 0;
                in3_m2 = 1;
                in4_m2 = 0 ;

                wait_ms(velocidade);

                in1_m2 = 0;
                in2_m2 = 0;
                in3_m2 = 0;
                in4_m2 = 1;

                wait_ms(velocidade);

            }

        wait(2);
        
        if(B3== 0)

            for( int i=0; i<1024;i++){ // Aciona os três motores  no sentido horário

                in1_m3 = in1_m2 = in1_m1 = 1;
                in2_m3 = in2_m2 = in2_m1 = 0;
                in3_m3 = in3_m2 = in3_m1 = 0;
                in4_m3 = in4_m2 = in4_m1 = 0;
               
                wait_ms(velocidade);

                in1_m3 = in1_m2 = in1_m1 = 0;
                in2_m3 = in2_m2 = in2_m1 = 1;
                in3_m3 = in3_m2 = in3_m1 = 0;
                in4_m3 = in4_m2 = in4_m1 = 0;

                wait_ms(velocidade);

                in1_m3 = in1_m2 = in1_m1 = 0;
                in2_m3 = in2_m2 = in2_m1 = 0;
                in3_m3 = in3_m2 = in3_m1 = 1;
                in4_m3 = in4_m2 = in4_m1 = 0;

                wait_ms(velocidade);

                in1_m3 = in1_m2 = in1_m1 = 0;
                in2_m3 = in2_m2 = in2_m1 = 0;
                in3_m3 = in3_m2 = in3_m1 = 0;
                in4_m3 = in4_m2 = in4_m1 = 1;

                wait_ms(velocidade);

            }

        wait(2);

    }
}
