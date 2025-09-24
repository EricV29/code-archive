package hilo2;

public class R1 implements Runnable {
    
    @Override
    public void run(){
     for(int i = 0; i < 10; i++){
         System.out.println(i + " " + "Lenguajes");          
       System.out.println("Termina thread " + "Lenguajes"); 
      }
    }
}
