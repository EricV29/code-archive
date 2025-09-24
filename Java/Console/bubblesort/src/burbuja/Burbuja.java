package burbuja;

import java.util.Scanner;

public class Burbuja {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println("Cuantos numeros desea ingresar?\n");
        Scanner l = new Scanner(System.in);
        int nnum = l.nextInt();
        int numeros[] = new int[nnum];
        
        for(int i = 0; i < nnum; i++)
        {
          System.out.println("\nIngresa un numero: ");
          numeros[i] = l.nextInt();
        }
        
        System.out.println("\nNumeros sin ordenar: ");
        for(int i = 0; i < nnum ;i++)
        {
            System.out.println(numeros[i]);
        }
        
        for(int vuel = 1; vuel < nnum; vuel++)
        {
          for(int pos = 0; pos < nnum-vuel; pos++)
          {
            if(numeros[pos] > numeros[pos+1])
            {
              int aux = numeros[pos];
              numeros[pos]=numeros[pos+1];
              numeros[pos+1]=aux;
            }
   
          }
        }
        System.out.println("\nNumeros ordenados: ");
        for(int i = 0 ; i <= nnum+1; i++)
        {
            System.out.println(numeros[i]);
        }
        
    }
    
}
