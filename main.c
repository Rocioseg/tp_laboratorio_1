#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int primerNum=0;
    int segundoNum=0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%d)\n",primerNum);
        printf("2- Ingresar 2do operando (B=%d)\n",segundoNum);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese el primer numero:");
                scanf("%d",&primerNum);
                break;
            case 2:
                printf("Ingrese el segundo numero:");
                scanf("%d",&segundoNum);
                break;
            case 3:
                suma(primerNum, segundoNum);
                break;
            case 4:
                resta(primerNum,segundoNum);
                break;
            case 5:
                division(primerNum,segundoNum);
                break;
            case 6:
                multiplicacion(primerNum,segundoNum);
                break;
            case 7:
                factorial(primerNum);
                break;
            case 8:
                suma(primerNum, segundoNum);
                resta(primerNum,segundoNum);
                division(primerNum,segundoNum);
                multiplicacion(primerNum,segundoNum);
                factorial(primerNum);
                break;
            case 9:
                seguir = 'n';
                break;
        }

}
    return 0;
}
