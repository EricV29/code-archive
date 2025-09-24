package hilo2;

public class Hilo2 {

    public static void main(String[] args) {
        Thread hilo = new Thread(new R1());
        Thread hilo2 = new Thread(new R2());
        
        hilo.start();
        hilo2.start();
        
        System.out.println("Termina thread main"); 
    }
    
}
