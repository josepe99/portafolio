/*
Realice un programa que permita ingresar por teclado una cadena e imprimir en
pantalla cuántas veces se repite cada carácter.
*/

using System;
namespace CsharpStruct {
    // en esta estructura guardamos el caracter y cuantas veces se repite
    struct Data {
        public char key;
        public int cant;
    }

    class Program {
        static void Main(string[] args) {
            Console.WriteLine("Escribe un texto: ");
            String texto = Console.ReadLine();
            int n = texto.Length;
            int k = 0; // lista_car index 
            int encontrado; // bandera para saber si ya habiamos encontrado antes a ese caracter

            Data[] lista_car = new Data[n]; // lista del resultado buscado

            for (int i=0; i<n; i++){
                encontrado = 0;
                for (int j=0; j<k; j++){
                    if(lista_car[j].key == texto[i]){
                        lista_car[j].cant++;
                        encontrado = 1;
                        break;
                    }
                }

                if(encontrado == 0){ // si no se encontro antes es porque no existe aun
                    lista_car[k] = new Data();
                    lista_car[k].cant = 1;
                    lista_car[k].key = texto[i];
                    k++;
                }
            }

            for(int i=0; i<k; i++){
                Console.WriteLine(lista_car[i].key + ": " + lista_car[i].cant + " veces");
            }
        }
    }
}