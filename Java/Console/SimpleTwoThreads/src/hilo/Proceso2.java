package hilo;

public class Proceso2 extends Thread {
    
    @Override
    public void run(){
      for(int i = 0; i < 10; i++){
         System.out.println("Concurrente");
            //System.out.println("Termina thread " + "Concurrente");//
      }
    }
}
