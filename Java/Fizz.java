import java.util.Scanner;

class Fizz {
  public static void main(String[] args) {
    int cases = 0;
    Scanner in = new Scanner(System.in);
    cases = in.nextInt();
    
    for (int i = 0; i < cases; i++) {
      int number = in.nextInt();
      for (int j = 1; j <= number; j++) {
      if (j%3 == 0) {
        if (j%5 == 0) {
          System.out.println("FizzBuzz");
        } else {
          System.out.println("Fizz");
        }
      } else if (j%5 == 0) {
        if (j%3 == 0) {
          System.out.println("FizzBuzz");
        } else {
          System.out.println("Buzz");
        }
      } else {
        System.out.println(j);
      }
      }
    }
  }
}
