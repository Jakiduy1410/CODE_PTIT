import java.util.Scanner;

public class J02036 {
    private static long gcd(long a, long b) {
        while (b != 0) {
            long temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }

    private static long lcm(long a, long b) {
        return (a / gcd(a, b)) * b;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (!scanner.hasNextInt()) {
            scanner.close();
            return;
        }
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            long[] a = new long[n];
            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextLong();
            }

            long[] b = new long[n + 1];
            b[0] = a[0];
            for (int i = 1; i < n; i++) {
                b[i] = lcm(a[i - 1], a[i]);
            }
            b[n] = a[n - 1];

            StringBuilder sb = new StringBuilder();
            for (int i = 0; i <= n; i++) {
                sb.append(b[i]);
                if (i < n) {
                    sb.append(" ");
                }
            }
            System.out.println(sb);
        }
        scanner.close();
    }
}
