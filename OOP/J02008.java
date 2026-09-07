import java.util.*;

public class J02008{
    static final int MAX = 10004;
    static final long MOD = 1000000007L;
    static boolean[] primes = new boolean[MAX + 1];

    public static void sieve(){
        for (int i = 0; i <= MAX; i++) {
            primes[i] = true;
        }

        primes[0] = primes[1] = false;

        for (int i = 2; i * i <=  MAX; i++) {
            if (primes[i]) {
                for(int j = i * i ; j <= MAX; j += i){
                    primes[j] = false;
                }
            }
            
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        sieve();
        while (--t >= 0) {
            int n = input.nextInt();
            long res = 1;
            for (int i = 0; i <= n; i++) {
                if (primes[i]) {
                    
                    long pow = i;
                    while (pow * i <= n) {
                        pow = pow * i;
                    }
                    res = (res * ( pow)) ;
                }

            }

            System.out.println(res);
        }
    }


}