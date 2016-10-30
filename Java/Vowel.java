import java.util.Scanner;

class Vowel{
   public static void main(String[] args){
      Scanner in = new Scanner(System.in);
      String str = in.next();
      int[] a = new int[str.length()];
      int num = 0;
      for (int i = 0; i < str.length(); i++) {
         if (str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i' || str.charAt(i) == 'o' 
               || str.charAt(i) == 'u') {
            num += 1;      
            a[i] = num;     
         } else {
            num = 0;
            a[i] = num;            
         }
      }
      
      System.out.println(printGreatest(a));
   }
   
   public static int printGreatest(int[] a){
      int max = a[0];

      for (int i = 1; i < a.length; i++) {
         if (a[i] > max) {
            max = a[i];
         }
      }
      
      return max;
   }
}
