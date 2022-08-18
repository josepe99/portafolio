/*
Realice un programa que permita ingresar por teclado una cadena e imprimir en
pantalla cuántas veces se repite cada carácter.
*/

import java.util.Scanner;
import java.util.ArrayList;

class Data {
    char key;
    int cant;

    public Data(char key, int cant){
        this.key = key;
        this.cant = cant;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);

        System.out.println("Escribe el texto: ");
        String texto = keyboard.nextLine();

        ArrayList<Data> lista = new ArrayList<Data>();
        int c;

        for(char i: texto.toCharArray()) {
            c = 0;
            for(Data d : lista){
                if(d.key == i){
                    c++;
                    d.cant++;
                }
            }
            if(c == 0){
                Data aux = new Data(i, 1);
                lista.add(aux);
            }
        }

        for(Data d : lista){
            System.out.println(d.key + ": " + d.cant + " veces");
        }
    }
}
