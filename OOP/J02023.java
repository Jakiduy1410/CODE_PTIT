import java.util.Scanner;

public class J02023 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (!sc.hasNextInt()) return;
        int n = sc.nextInt();
        int s = sc.nextInt();

        if (s == 0 || s > 9 * n) {
            System.out.println("-1 -1");
            return;
        }

        int tempS = s;
        int[] maxNum = new int[n];
        for (int i = 0; i < n; i++) {
            int digit = Math.min(9, tempS);
            maxNum[i] = digit;
            tempS -= digit;
        }

        tempS = s - 1;
        int[] minNum = new int[n];
        for (int i = n - 1; i >= 1; i--) {
            int digit = Math.min(9, tempS);
            minNum[i] = digit;
            tempS -= digit;
        }
        minNum[0] = tempS + 1;

        StringBuilder sbMin = new StringBuilder();
        StringBuilder sbMax = new StringBuilder();
        for (int i = 0; i < n; i++) {
            sbMin.append(minNum[i]);
            sbMax.append(maxNum[i]);
        }

        System.out.println(sbMin + " " + sbMax);
        sc.close();
    }
}
