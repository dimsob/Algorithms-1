import java.util.Scanner;

class Sum {
  public static void main(String[] args) {
    int cases = 0;
    Scanner in = new Scanner(System.in);
    cases = in.nextInt();
    
    for (int i = 0; i < cases; i++) {
      int first = in.nextInt();
      int second = in.nextInt();
      System.out.println(first + second);
    }
  }
}
