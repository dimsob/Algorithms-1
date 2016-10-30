import java.util.Scanner;

class One {
   public static void main(String[] args) {
      int size = 0;
      Scanner in = new Scanner(System.in);
      size = in.nextInt();
      int[] first = new int[size];
      int[] second = new int[size];
      
      for (int i = 0; i < 2; i++) {
         for (int j = 0; j < size; j++) {
            if (i == 0) {
               first[j] = in.nextInt();
            } else {
               second[j] = in.nextInt();
            }
         }
      }
      
      for (int j = 0; j < size; j++) {
         System.out.print(first[j] + second[j] + " ");
      }
      
      in.close();
   }
}
