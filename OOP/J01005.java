import java.util.Scanner;

public class J01005 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int t = input.nextInt();
        for (int i = 0; i < t; i++) {
            int n = input.nextInt();
            int h = input.nextInt();
            for (int j = 1; j < n; j++) {
                System.out.printf("%.6f ", ((double) h * Math.sqrt((double)j / n)));
            }
            System.out.println();
        }
        input.close();
    }
}
