#include <stdio.h>
#include <math.h>
#include "funcion.h"

int main(int argc, char *argv[])
{
    float M_P[5][2];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingresa X %d: \n", i + 1);
        scanf("%f", &M_P[i][0]);

        printf("Ingresa Y %d: \n", i + 1);
        scanf("%f", &M_P[i][1]);
    }

    caldistancia(M_P);

    return 0;
}