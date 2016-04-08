#include <stdio.h>
#include "funciones.h"//


int suma(int x, int y)
{
    int suma;
    suma=x+y;
    printf("Resultado de suma: %d\n",suma);
    return 0;
}


int resta(int x, int y)
{
    int resta;
    resta=x-y;
    printf("Resultado de resta: %d\n",resta);
    return 0;
}


int division(int x, int y)
{
    if(x==0||y==0)
    {
        printf("Error en operandos ingresados. \n");
    }
    else
    {
        int division;
        division=x/y;
        printf("Resultado de division: %d \n",division);
    }
    return 0;
}

int multiplicacion(int x, int y)
{
    int multiplicacion;
    multiplicacion=x*y;
    printf("Resultado de multiplicacion: %d\n",multiplicacion);
    return 0;
}

int factoreo(int x)
{
    int factoreo=1;
    int i;
    for(i=1;i<=x;i++)
        {
            factoreo=factoreo*i;
        }
    printf("Falctorial del primer operando: %d \n",x,factoreo);
    return 0;
}


