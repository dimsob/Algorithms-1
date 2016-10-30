import java.util.Scanner;

class Right{
   public static void main(String[] args) {
      int cases = 0;
      Scanner in = new Scanner(System.in);
      cases = in.nextInt();
   
      for (int i = 0; i < cases; i++) {
         int size = in.nextInt();
         int rotation = in.nextInt();
         String str = "";
         for (int j = 0; j < size; j++) {
            str += in.nextInt();
         }
      
         for (int j = 0; j < rotation; j++) {
            str = getRotatedString(str);
         }      
         
         for (int j = 0; j < str.length(); j++) {
            System.out.print(str.charAt(j) + " ");
         }
      }
   }
   
   public static String getRotatedString(String str) {
      String subString = str.substring(0, str.length() - 1);
      return str.charAt(str.length() - 1) + subString;
   }
}

