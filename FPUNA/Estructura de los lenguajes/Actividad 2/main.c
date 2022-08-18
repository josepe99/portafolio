/*
Realice un programa que permita ingresar por teclado una cadena e imprimir en
pantalla cuántas veces se repite cada carácter.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Data{
    char key;
    int cant;
}Data;

int strlen(char *text){
    int i = 0;

    while(*(text + i) != '\0') i++;

    return i;
}

Data *createData(char key){
    Data *aux = malloc(sizeof(Data));

    aux->cant = 1;
    aux->key = key;

    return aux;
}

int main()
{
    // leer desde el teclado y guardar en esta variable
    char texto[100];

    printf("Escribe el texto: ");
    scanf("%[^\n]", texto);

    int len = strlen(texto);
    int i, j;
    int result_len = 0;
    Data **result = malloc(len*sizeof(Data *)); // imposible que haya mas caracteres que len

    int encontrado;

    for(i=0; i<len; i++){
        encontrado = 0;

        for(j=0; j<result_len; j++){
            if(result[j]->key == texto[i]){
                result[j]->cant++;
                encontrado = 1;
                break;
            }
        }

        if(!encontrado){ // si aun no existe el caracter en la lista
            result[result_len] = createData(texto[i]);
            result_len++;
        }
    }

    for(j=0; j<result_len; j++){
        printf("%c: %d veces\n", result[j]->key, result[j]->cant);
    }

    return 0;
}