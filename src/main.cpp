#include <mbed.h>

Serial pc(USBTX, USBRX);
AnalogIn sensor(A1);

//viendo al sensor con el azul para abajo, la pata derecha del azul a Vcc,  la izq a una resistencia (150Ohm) y a tierra
//la derecha del negro al bluepill y a una resistencia grande y a vcc. la izq a tierra

void setup(){
  pc.printf("Empezado\n");
}

int lectura;

int main (){
        setup();
        while(1) {
                float lectura = sensor;
                pc.printf("%f",lectura);
                pc.printf("\n");
        }
}
