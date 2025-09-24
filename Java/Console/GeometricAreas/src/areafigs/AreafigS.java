/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package areafigs;
import java.util.Scanner;                   //PROGRAMA SWITCH QUE CALCULA LAS AREAS DE 5 FIGURAS DISTINTAS
                                           //ERIC JARED VILLEDA REYES  3° "H"
                                          //GINO EVIEZER ANGELES CARDENAS  19/10/2018
/**
 *
 * @author COMPAQ
 */
public class AreafigS {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner Entrada=new Scanner(System.in);
        
        double R, arc, art, B, H, b, h, arEG, D, d, arR, L, arVA;
        int  AF;   
        String rc1, RC;
        
        do{
        
        System.out.println("INGRESA UN NUMERO DEL 1 AL 7 DEACUERDO AL AREA QUE DESEAS CONSULTAR");
        System.out.println("1. CIRCULO");
        System.out.println("2. TRIANGULO");
        System.out.println("3. RECTANGULO");
        System.out.println("4. ROMBO");
        System.out.println("5. CUADRADO");
        
                                                        AF=Entrada.nextInt();
        
        switch(AF) 
        {
            
            case 1://circulo
             System.out.println("INGRESA EL RADIO DEL CIRCULO");
             R=Entrada.nextDouble();
             
             arc=(3.14*R)*R;
             System.out.println("EL AREA DE TU CIRCULO ES " + arc);//imprresion
                break;
            
            case 2://triangulo
             System.out.println("INGRESA LA BASE");
             B=Entrada.nextDouble();
             
             System.out.println("INGRESA LA ALTURA");
             H=Entrada.nextDouble();
             
             art=(B * H)/2;
             System.out.println("EL AREA DE TU TRIANGULO ES " + art);//impresion
                break;
            
            case 3://rectangulo
             System.out.println("INGRESA LA BASE");
             b=Entrada.nextDouble();
   
             System.out.println("INGRESA LA ALTURA");
             h=Entrada.nextDouble();
             
             arEG=b*h;
             System.out.println("EL AREA DE TU RECTANGULO ES " + arEG);//impresion
                break;
            
            case 4://rombo
             System.out.println("INGRESA EL DIAMETRO (D)");
             D=Entrada.nextDouble();
  
             System.out.println("INGRESA EL diametro (d)");
             d=Entrada.nextDouble();
  
             arR=(D*d)/2;
             System.out.println("EL AREA DE TU ROMBO ES " + arR);//impresion
                break;
           
            case 5://cuadrado
             System.out.println("INGRESA EL VALOR DE UN LADO");
             L=Entrada.nextDouble();
             
             arVA=L*L;
             System.out.println("EL AREA DE TU CUADRADO ES " + arVA);//impresion
                break;
            
        
               
        }
        System.out.println("Desea continuar(S/N)");
         RC=Entrada.next();  
         rc1=RC.toUpperCase();
        }while(rc1.equals("S"));
        
               
    }
}

