import java.util.Scanner;

public class J020356 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (!scanner.hasNextInt()) {
            scanner.close();
            return;
        }
        int n = scanner.nextInt();
        int s = scanner.nextInt();
        scanner.close();

        if (s == 0 || s > 9 * n) {
            System.out.println("-1 -1");
            return;
        }

        int[] maxDigits = new int[n];
        int remMax = s;
        for (int i = 0; i < n; i++) {
            int d = Math.min(9, remMax);
            maxDigits[i] = d;
            remMax -= d;
        }

        int[] minDigits = new int[n];
        int remMin = s - 1;
        for (int i = n - 1; i > 0; i--) {
            int d = Math.min(9, remMin);
            minDigits[i] = d;
            remMin -= d;
        }
        minDigits[0] = remMin + 1;

        StringBuilder sb = new StringBuilder();
        for (int d : minDigits) {
            sb.append(d);
        }
        sb.append(" ");
        for (int d : maxDigits) {
            sb.append(d);
        }

        System.out.println(sb);
    }
}
