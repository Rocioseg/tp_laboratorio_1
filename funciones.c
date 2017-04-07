#include <stdio.h>
#include <stdlib.h>

int suma(int x,int y)
{
    int resultado;
    resultado=x+y;
    printf("El resultado de la suma es de: %d \n",resultado);
    return 0;
}
int resta(int x,int y)
{
    int resultado;
    resultado=x-y;
    printf("El resultado de la resta es de: %d \n",resultado);
    return 0;
}
float division(int x,int y)
{
    float resultado;

    if(y==0)
    {
        printf("No es posible dividir por 0!! reingrese el segundo numero \n");
    }
    else
        {
            resultado=(float)x/(float)y;
            printf("El resultado de la division es de: %f \n",resultado);
        }

    return 0;
}
int multiplicacion(int x,int y)
{
    int resultado;
    resultado=x*y;
    printf("El resultado de la multiplicacion es de: %d \n",resultado);
    return 0;
}
int factorial(int x)
{
    int y;
    int resultado=1;

    for(y=x;y>1;y--)
    {
        resultado=resultado*y;
    }
    printf("El factorial es de: %d \n",resultado);
    return 0;
}
