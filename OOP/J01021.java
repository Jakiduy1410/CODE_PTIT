import java.util.*;

public class J01021{

    static long MOD =  1000000007L;

    public static long calc(long a, long b){
        long res = 1;
        while (b > 0) {
            if (b % 2 != 0) {
                res = (res * a) % MOD;
            }
            a = (a * a) % MOD;
            b /= 2;

        }

        return res;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        while (true) {
            long a = input.nextLong();
            long b = input.nextLong();

            if (a == 0 && b == 0) {
                return;
            }

            System.out.println(calc(a,b));

        }
        
        
    }
}