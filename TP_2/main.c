#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define tamanio 20


int main()
{
    int i;


    char nombreAux[51];
    int edadAux;
    char edadAuxStr[50];
    int dniAux;
    char dniAuxStr[50];


    int grafico[3][tamanio];



    int espacioLibre;
    int espacioEncontrado;
    char seguir='s';
    int opcion=0;



    ePersona persona[tamanio];

    personaEstado( persona, tamanio, 0);



    while(seguir=='s')
    {
        printf("1- Agregar persona \n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                espacioLibre = obtenerEspacioLibre(persona, tamanio);

                if(espacioLibre == -1)
                    {
                        printf("No hay espacio libre\n");
                        break;
                    }

                printf("\nAgregar persona : \n");
                if(!getStringNumero("Ingrese el DNI :", dniAuxStr))
                    {
                        printf("DNI invalido\n");
                        break;
                    }
                dniAux = atoi(dniAuxStr);


                if(buscarPorDni( persona, tamanio, dniAux) == -1)
                    {
                        printf("DNI en uso\n");
                        break;
                    }

                if(!getStringLetras("Ingrese nombre : ", nombreAux))
                    {
                        printf("Error, debe ingresar un nombre\n");
                        break;
                    }

                if(!getStringNumero("Ingrese edad : ", edadAuxStr))
                    {
                        printf("Error, ingrese edad\n");
                        break;
                    }
                edadAux = atoi(edadAuxStr);



                strcpy(persona[espacioLibre].nombre, nombreAux);
                persona[espacioLibre].edad = edadAux;
                persona[espacioLibre].dni = dniAux;
                persona[espacioLibre].estado = 1;
                break;

            case 2:
                if(!getStringNumero("\nIngrese el DNI a dar de baja : \n", dniAuxStr))
                    {
                        printf("El DNI ingresado no es un numero\n");
                        break;
                    }
                dniAux = atoi(dniAuxStr);
                espacioEncontrado = buscarPorDni( persona, tamanio, dniAux);
                if(espacioEncontrado == -1)
                    {
                        printf("\nDNI no encontrado\n");
                        break;
                    }
                persona[espacioEncontrado].estado = 0;
                break;

            case 3:
                system("cls");
                printf("\n Lista ordenada por nombre : \n");

                ordenarPorNombre( persona, tamanio);

                for(i = 0; i < tamanio; i++)
                    {
                        if(persona[i].estado != 0)
                            {
                                printf("\n %s - %d - %d \n\n", persona[i].nombre, persona[i].edad, persona[i].dni);
                            }
                    }

                break;

            case 4:



                printf("Grafico : \n");

                int contador1 = 0;
                int contador2 = 0;
                int contador3 = 0;



                for(i = 0; i < tamanio ; i++)
                    {
                        grafico[0][i] = ' ';
                        grafico[1][i] = ' ';
                        grafico[2][i] = ' ';
                    }


                for(i = 0; i < tamanio; i++)
                    {
                        if(persona[i].edad < 18)
                            {
                                contador1++;
                            }
                        if(persona[i].edad > 35)
                            {
                                contador2++;
                            }

                        if((persona[i].edad >= 19) && (persona[i].edad <= 35))
                            {
                                contador3++;
                            }
                    }




                for(i = 0; i < tamanio ; i++)
                    {
                        if( i < contador1)
                            {
                                grafico[0][i] = '*';
                            }
                        if( i < contador2)
                            {
                                grafico[1][i] = '*';
                            }
                        if( i < contador3)
                            {
                                grafico[2][i] = '*';
                            }
                    }



                        for(i = 19; i >= 0; i--)
                            {
                                printf("%c\t %c\t %c\n", grafico[0][i], grafico[1][i], grafico[2][i]);
                            }

                printf("< 18 - 19 a 35 - > 35 \n");





                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
