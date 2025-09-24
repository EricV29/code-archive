/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package areafrigv;
import javax.swing.*;     //PROGRAMA SWITCH QUE CALCULA LAS AREAS DE 5 FIGURAS DISTINTAS CON CUADROS DE DIALOGO


/**
 *
 * @author COMPAQ
 */
public class AreafrigV {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        double R, arc, art, B, H, b, h, arEG, D, d, arR, L, arVA;
        int  AF;
        String a, z, x, q, ñ, m, j, cv, TT, TTA ;
        
        do
        {
                                           
AF=Integer.parseInt(JOptionPane.showInputDialog(null,"INGRESA UN NUMERO DEL 1 AL 5 DEACUERDO AL AREA QUE DESEAS CONSULTAR/ MENU 1.CIRCULO 2.TRIANGULO 3.RECTANGULO 4.ROMBO 5.CUADRADO"));
                                                
        switch(AF){//SWITCH
                
            case 1:
           a=JOptionPane.showInputDialog(null,"INGRESA EL RADIO DEL CIRCULO");
           R=Double.parseDouble(a);
             
           arc=(3.14*R)*R;
           JOptionPane.showMessageDialog(null,"EL AREA DE TU CIRCULO ES " + arc);//imprresion
            break;
            
            case 2:
           z=JOptionPane.showInputDialog(null,"INGRESA LA BASE");
           B=Double.parseDouble(z);
             
           x=JOptionPane.showInputDialog(null,"INGRESA LA ALTURA");
           H=Double.parseDouble(x);
             
           art=(B * H)/2;
           JOptionPane.showMessageDialog(null,"EL AREA DE TU TRIANGULO ES " + art);//impresion
            break;
            
            case 3:
           q=JOptionPane.showInputDialog(null,"INGRESA LA BASE");
           b=Double.parseDouble(q);
   
           ñ=JOptionPane.showInputDialog(null,"INGRESA LA ALTURA");
           h=Double.parseDouble(ñ);
             
           arEG=b*h;
           JOptionPane.showMessageDialog(null,"EL AREA DE TU RECTANGULO ES " + arEG);//impresion
            break;
            
            case 4:
           m=JOptionPane.showInputDialog(null,"INGRESA EL DIAMETRO (D)");
           D=Double.parseDouble(m);
  
           j=JOptionPane.showInputDialog(null,"INGRESA EL diametro (d)");
           d=Double.parseDouble(j);
  
           arR=(D*d)/2;
           JOptionPane.showMessageDialog(null,"EL AREA DE TU ROMBO ES " + arR);//impresion
            break;
           
            case 5:
           cv=JOptionPane.showInputDialog(null,"INGRESA EL VALOR DE UN LADO");
           L=Double.parseDouble(cv);
             
           arVA=L*L;
           JOptionPane.showMessageDialog(null,"EL AREA DE TU CUADRADO ES " + arVA);//impresion
            break;
            
     }
         
      TT=JOptionPane.showInputDialog(null,"Desea continuar(S/N)"); 
      TTA=TT.toUpperCase();
      }while(TTA.equals("S"));
        
    }
              
       
    }
    

