'''
Realice un programa que permita ingresar por teclado una cadena e imprimir en
pantalla cuántas veces se repite cada carácter.
'''

#!/usr/bin/ruby

puts("Escribe el texto: ")
texto = gets()

lista_texto = texto.chars # convertir texto a lista de caracteres
result = {}

# recorrer el texto
lista_texto.each do |i|
    if(result.has_key?(i)) # si existe ya la clave sumamos 1
        result[i] += 1
    else # si no existe la clave, creamos con valor 1
        result[i] = 1
    end
end


result.each do |key, value|
    puts("#{key}: #{value} vecces")
end