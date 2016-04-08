#include <stdio.h>
#include <stdlib.h>
#include"funciones.h"


 int main()
{
    int x,y;
    char seguir='s';
    int menu=0;
    while(seguir=='s')
    {
        printf("          MENU:    \n");
        printf("1: Ingresar primer operando \n");
        printf("2: Ingresar segundo operando \n");
        printf("3: Calcular suma \n");
        printf("4: Calcular Resta \n");
        printf("5: Calcular Division \n");
        printf("6: Calcular Multiplicacion \n");
        printf("7: Calcular el Factorial \n");
        printf("8: Calcular todas las operaciones \n");
        printf("9: Salir \n");

        printf("Ingrese la opcion que desea ejecutar: \n");
        scanf("%d",&menu);
        system("cls");



        switch(menu)
        {
            case 1:
                printf("Ingrese el Primer Operando:  \n");
                scanf("%d",&x);
                printf("Primer Operando: %d\n",x);
                break;
                system("cls");


            case 2:
                printf("Ingrese el Segundo Operando:  \n");
                scanf("%d",&y);
                printf("Segundo Operando: %d\n",y);
                break;
                system("cls");


            case 3:
                suma(x,y);
                break;


            case 4:
                resta(x,y);
                break;
                system("cls");

            case 5:
                division(x,y);
                break;
                system("cls");

            case 6:
                multiplicacion(x,y);
                break;
                system("cls");

            case 7:
                factoreo(x);
                break;
                system("cls");

            case 8:
                suma(x,y);
                resta(x,y);
                division(x,y);
                multiplicacion(x,y);
                factoreo(x);
                break;
                system("cls");

            case 9:
                return 0;
                break;

        }

    }
return 0;
}



