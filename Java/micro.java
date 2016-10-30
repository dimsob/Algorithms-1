import java.util.Scanner;

class Micro {
  public static void main(String[] args) {
    int cases = 0;
    Scanner in = new Scanner(System.in);
    cases = in.nextInt();
    for (int j = 0; j < cases; j++){
      String str = in.next();
      String rotatedString = "";
      int rotation = 0;
    
      int size = str.length();
      String demo = str;
      int i;
      for (i = 1; i <= size; i++) {
        String s = getRotatedString(str);
        if (demo.equals(s)) {
          break;
        } else {
          str = s;
        }
      } 
      System.out.println(i);
    }
  }
  
  public static String getRotatedString(String str) {
    String subString = str.substring(0, str.length() - 1);
    return str.charAt(str.length() - 1) + subString;
  }
}
