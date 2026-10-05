import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class J02035 {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreTokens()) {
                try {
                    String line = br.readLine();
                    if (line == null) return null;
                    st = new StringTokenizer(line);
                } catch (IOException e) {
                    return null;
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }
    }

    public static void main(String[] args) {
        FastReader reader = new FastReader();
        String tStr = reader.next();
        if (tStr == null) return;
        int t = Integer.parseInt(tStr);

        StringBuilder sb = new StringBuilder();
        while (t-- > 0) {
            int n = reader.nextInt();
            long minVal = Long.MAX_VALUE;
            int minIdx = 0;
            for (int i = 0; i < n; i++) {
                long val = reader.nextLong();
                if (val < minVal) {
                    minVal = val;
                    minIdx = i;
                }
            }
            sb.append(minIdx).append("\n");
        }
        System.out.print(sb);
    }
}
