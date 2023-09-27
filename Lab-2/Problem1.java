import java.util.Scanner;

/**
 * write a program that will detect if given input from the user numeric or not
 * .
 * if the answer is yes then print numeric else not numeric
 */
public class Problem1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter input: ");
        String input = scanner.nextLine();

        boolean isNumeric = true;
        int count = 0;
        for (char ch : input.toCharArray()) {
            if (ch == '.' && count == 0) {
                count++;
                continue;
            }
            if (ch < '0' || ch > '9') {
                isNumeric = false;
                break;
            }
        }

        if (isNumeric) {
            System.out.println("Numeric");
        } else {
            System.out.println("Not Numeric");
        }
    }
}
