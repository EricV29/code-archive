package hilo;

public class Proceso1 extends Thread {
    
    @Override
    public void run(){
      for(int i = 0; i < 10; i++){
         System.out.println("Lenguajes");          
               //System.out.println("Termina thread " + "Lenguajes");//
      }
    }
}
