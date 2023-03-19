#include <stdio.h>
#include "emplea.h"

int main(){
    printf("Hola");
    Dato * miDato;
    miDato->num = 1;
    miDato->car = 'c';

    mostrar_dato(miDato);

    return 0;
}