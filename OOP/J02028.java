import java.util.*;

public class J02028 {

    static boolean check(long[] a, long k){
        if (k == 0) {
            for (long x : a) {
                if (x == 0) return true;
            }
            return false;
        }

        int left = 0;
        long sum = 0;

        for (int right = 0; right < a.length; right++) {
            sum += a[right];

            while (sum > k && left <= right) {
                sum -= a[left];
                left++;
            }

            if (sum == k) {
                return true;
            }
        }

        return false;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (--t >= 0) {
            int n = input.nextInt();
            long k = input.nextLong();

            long[] a = new long[n];
            for (int i = 0; i < n; i++) {
                a[i] = input.nextLong();
            }

            if (check(a, k)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        input.close();
    }
}