import java.util.*;

class Special{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int cases = in.nextInt();
    char[] ft = new char[cases];
    char[] st = new char[cases];
    String ftString = in.next();
    String stString = in.next();
    for (int i = 0; i < cases; i++) {
      ft[i] = ftString.charAt(i);
      st[i] = stString.charAt(i);
    }
    
    int combination = in.nextInt();
    for (int i = 0; i < combination; i++) {
      int special = 0;
      int start = in.nextInt() - 1;
      int end = in.nextInt() - 1;
      for (int j = start; j < end; j++) {
        for (int k = j + 1; k < end + 1; k++) {
          if (String.valueOf(ft[j]).equals(String.valueOf(ft[k])) || String.valueOf(st[j]).equals(String.valueOf(st[k]))) {
            special += 1;
          }
        } 
      }
      System.out.println(special);
    }
  }
}
