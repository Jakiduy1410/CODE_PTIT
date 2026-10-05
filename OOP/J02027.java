import java.util.*;

public class J02027 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (--t >= 0) {
            int n = input.nextInt();
            int k = input.nextInt();

            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = input.nextInt();
            }

            Arrays.sort(a);

            long cnt = 0;
            int l = 0;
            
            for (int r = 1; r < n; r++) {
                while (l < r) {
                    if (a[r] - a[l] >= k) {
                        l++;
                    }else{
                        break;
                    }
                }

                cnt += (r - l);
            }
            
            System.out.println(cnt);
        }
        input.close();
    }
}