#!/usr/bin/python

'''
Realice un programa que permita ingresar por teclado una cadena e imprimir en
pantalla cuántas veces se repite cada carácter.
'''

def cuentaCaracter(texto):
    counter = {}

    for i in texto:
        if i in counter:
            counter[i] += 1
        else:
            counter[i] = 1


    return counter


if __name__ == "__main__":
    texto = input("Escribe el texto: ")
    result = cuentaCaracter(texto)

    for i in result:
        print('{}: {} veces'.format(str(i), result[i]))