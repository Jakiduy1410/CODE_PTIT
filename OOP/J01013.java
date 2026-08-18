import java.util.*;

public class J01013 {

    public static int[] smallPrimes = new int[2000001];

    public static void sieve(){
        for (int i = 0; i <= 2000000; i++) {
            smallPrimes[i] = i;
        }

        for(int i = 2; i * i <= 2000000; i++){
            if (smallPrimes[i] == i) {
                for(int j = i*i; j <= 2000000; j += i){
                    if (smallPrimes[j] == j) {
                        smallPrimes[j] = i;
                    }
                }
            }
        }
    }
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        sieve();

        long res = 0;
        int t = input.nextInt();
        while (--t >= 0) {
            int n = input.nextInt();
            long sum = 0;
            while (n != 1) {
                int tmp = smallPrimes[n];
                sum += tmp;
                n /= tmp;
            }

            res += sum;
        }

        System.out.println(res);
        input.close();

    }
}
