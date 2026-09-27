import java.util.*;
import java.util.Arrays;

public class b3 {
    static long[] f = new long[93];

    static void fibo(){
        f[0] = 0;
        f[1] = 1;
        for (int i = 2; i < f.length; i++) {
            f[i] = f[i-1] + f[i-2];
        }
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        fibo();
        while (--t >= 0) {
            long n = input.nextLong();
            if (Arrays.binarySearch(f,n) >= 0) {
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
        input.close();
    }
}