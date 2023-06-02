#include <stdio.h>
#include <math.h>
#include "funcion.h"

void caldistancia(float M_P[5][2])
{
    float distacias[10];
    int z = 0;
    float mayor = 0, menor = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            float x1 = M_P[i][0];
            float y1 = M_P[i][1];
            float x2 = M_P[j][0];
            float y2 = M_P[j][1];

            distacias[z] = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
            printf("distancia %d es %f\n", z, distacias[z]);
            z++;
        }
    }

    mayor = calmayor(distacias);
    printf("La distancia mayor = %f\n", mayor);

    menor = calmenor(distacias);
    printf("La distancia menor = %f\n", menor);
}

float calmayor(float distacias[10])
{
    float mayor = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            mayor = distacias[i];
        }
        else if (distacias[i] > mayor)
        {
            mayor = distacias[i];
        }
    }
    return mayor;
}

float calmenor(float distacias[10])
{
    float menor = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            menor = distacias[i];
        }
        else if (distacias[i] < menor)
        {
            menor = distacias[i];
        }
    }
    return menor;
}