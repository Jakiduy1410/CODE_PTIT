import java.io.*;
import java.util.*;

public class J02016 {
    public static void main(String[] args) throws IOException {
        FastScanner sc = new FastScanner();
        if (!sc.hasNext()) return;
        int t = sc.nextInt();
        StringBuilder sb = new StringBuilder();
        while (t-- > 0) {
            int n = sc.nextInt();
            long[] a = new long[n];
            for (int i = 0; i < n; i++) {
                long x = sc.nextLong();
                a[i] = x * x;
            }
            Arrays.sort(a);
            boolean found = false;
            for (int i = n - 1; i >= 2; i--) {
                int left = 0, right = i - 1;
                while (left < right) {
                    long sum = a[left] + a[right];
                    if (sum == a[i]) {
                        found = true;
                        break;
                    } else if (sum < a[i]) {
                        left++;
                    } else {
                        right--;
                    }
                }
                if (found) break;
            }
            if (found) {
                sb.append("YES\n");
            } else {
                sb.append("NO\n");
            }
        }
        System.out.print(sb);
    }

    static class FastScanner {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        boolean hasNext() {
            while (st == null || !st.hasMoreTokens()) {
                try {
                    String line = br.readLine();
                    if (line == null) return false;
                    st = new StringTokenizer(line);
                } catch (IOException e) {
                    return false;
                }
            }
            return true;
        }

        String next() {
            if (hasNext()) return st.nextToken();
            return null;
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }
    }
}
