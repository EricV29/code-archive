package hilo;

public class Hilo {
    
    public static void main(String[] args) {
       
        Proceso1 hilo = new Proceso1();
        Proceso2 hilo2 = new Proceso2();
        hilo.start();
        hilo2.start();
        
        //System.out.println("Termina thread main"); //
    }
    
}
