/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package examen2p;
import java.util.Scanner;

/**
 *
 * @author COMPAQ
 */
public class Examen2p {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner entrada= new Scanner(System.in);
        
        int numa=0,EG,nump=0,numpp=0;
                 do
                 {
        
                 System.out.println("TECLEA UN NUMERO DEL(1) EN ADELANTE PARA SABER LA SERIE DEL FIBONNACI(infinito)");
                       numa=entrada.nextInt();
             
                 }while(numa<=0);
        
        
        System.out.println("ELIGISTE EL NUMERO " + numa + " Y LA SUCESIÓN ES:");
              nump=0;
              numpp=1;
        System.out.println(nump);
         
        
                       for(EG=2;EG<=numa;EG++)
                       {
        
                       System.out.println(numpp);
                             numpp= nump + numpp;
                             nump= numpp - nump;
        
                        }
        
    }
    
}
