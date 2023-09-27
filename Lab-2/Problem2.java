import java.util.Scanner;

public class Problem2 {

    /** Write a program that will list out all the operators in the input string */
    static void isOperator(String val) {
        String arr = "+-*/%=";

        for (int i = 0; i < arr.length(); i++) {
            for (int j = 0; j < val.length(); j++) {
                if (arr.charAt(i) == val.charAt(j)) {
                    System.out.println("Operator: " + arr.charAt(i));
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter Value: ");
        String val = scanner.next();

        isOperator(val);

    }

}
