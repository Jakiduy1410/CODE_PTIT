// *****************************************************************
// J01022 - Xau Nhi Phan
// De bai: Xau Fibonacci: S(1)="0", S(2)="1", S(n)=S(n-2)+S(n-1). Tim ky tu thu K trong xau S(n)
// *****************************************************************
import java.util.*;

public class J01022 {

    static long[] f = new long[93];

    public static void fibo(){
        f[0] = 0;
        f[1] = 1;
        for (int i = 2; i < f.length; i++) {
            f[i] = f[i-1] + f[i-2];
        }
    }

    public static String check(int n, long k){
        if (n == 1) {
            return "0";
        }else if(n == 2){
            return "1";
        }

        if (k > f[n - 2]) {
            return check( (n - 1) , (k - f[n - 2]));
        }else{
            return check(n - 2, k );
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        fibo();
        int t = input.nextInt();
        while (--t >= 0) {
            int n = input.nextInt();
            long k = input.nextLong();

            System.out.println(check(n,k));
        }

        input.close();
    }
}
