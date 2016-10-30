import java.util.Scanner;

class Palindrome{
   public static void main(String[] args) {
      int cases = 0;
      Scanner in = new Scanner(System.in);
      cases = in.nextInt();
      
      for (int i = 0; i < cases; i++) {
         String original = "";
         original = in.next();
         int length = original.length();
         
         if (isPalindrome(original)) {
            if (original.length() % 2 == 0) {
               System.out.println("YES EVEN");   
            } else {
               System.out.println("YES ODD");
            }
         } else {
            System.out.println("NO");
         }
      }
   }
   
  static boolean isPalindrome(String s) {
      int n = s.length();
      for (int i=0;i<(n / 2);++i) {
      if (s.charAt(i) != s.charAt(n - i - 1)) {
         return false;
      }
   }

   return true;
  }
}
