#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[51];
    int edad;
    int dni;
    int estado;

}ePersona;

/**
 *  Asigna un estado a la persona ingresada.
 * @param persona el array se pasa como parametro.
 * @return estado de la persona.
 */

void personaEstado(ePersona persona[], int tam, int estado);

/**
 * Toma los nombres de las personas ingresadas y las ordena alfabeticamente.
 * @param persona el array se pasa como parametro.
 * @return lista de nombres ordenados alfabeticamente.
 *
 */


void ordenarPorNombre(ePersona persona[], int tam);

//void grafico(ePersona persona[], int tam);


/**
 * Obtiene el primer indice libre del array.
 * @param persona el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(ePersona persona[], int tam);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param persona el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(ePersona persona[], int tam, int dni);

/**
 * obtiene un entero
 * @param mensaje el mensaje ingresado a ser convertido en entero
 * @return un entero
 */

int getInt(char mensaje[]);

/**
 * obtiene un caracter
 * @param mensaje el mensaje ingresado a ser convertido en caracter
 * @return un caracter
 */

char getChar(char mensaje[]);

/**
 * establece el string como numero
 * @param str el caracter ingresado a ser convertido en numero
 * @return un numero
 */

int esNumerico(char str[]) ;

/**
 * establece el string como letra
 * @param str el caracter ingresado a ser convertido en letra
 * @return una letra
 */

int esSoloLetras(char str[]);

/**
 * obtiene un string del mensaje
 * @param convierte el mensaje ingresado en el input a string
 * @return un string
 */

void getString(char mensaje[],char input[]);

/**
 * obtiene un string de letras
 * @param convierte el mensaje ingresado en el input a string de letras
 * @return letras
 *
 */

int getStringLetras(char mensaje[],char input[]);

/**
 * obtiene un string de numeros
 * @param convierte el mensaje ingresado en el input a string de numeros
 * @return numeros
 *
 */

int getStringNumero(char mensaje[],char input[]);


#endif // FUNCIONES_H_INCLUDED


