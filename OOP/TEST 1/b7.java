import java.util.Scanner;

public class b7 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int space  = n -1;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < space; j++) {
                System.out.print(" ");
            }
            space --;

            if (i == 1) {
                System.out.println("*");
            }else if (i == n) {
                for (int j = 1; j <= 2*n-1; j++) {
                    System.out.print("*");
                }
                System.out.println();
            }else{
                System.out.print("*");
                for (int j = 1; j <= 2*i-3; j++) {
                    System.out.print(" ");
                }
                System.out.println("*");
            }
        }
        input.close();
    }
}