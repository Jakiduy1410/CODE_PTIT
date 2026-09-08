import java.util.Scanner;

public class J02014 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (!sc.hasNextInt()) return;
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            long totalSum = 0;
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                totalSum += a[i];
            }

            long leftSum = 0;
            int ans = -1;
            for (int i = 0; i < n; i++) {
                long rightSum = totalSum - leftSum - a[i];
                if (leftSum == rightSum) {
                    ans = i + 1;
                    break;
                }
                leftSum += a[i];
            }
            System.out.println(ans);
        }
        sc.close();
    }
}
