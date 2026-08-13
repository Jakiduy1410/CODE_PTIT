import java.util.Scanner;
import java.util.Arrays;

public class J01007 {

    public static long[] fibo = new long[93];

    static{
        fibo[0] = 0;
        fibo[1] = 1;
        for(int i = 2; i < fibo.length; i++){
            fibo[i] = fibo[i-2] + fibo[i-1];
        }
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();

        for (int i = 0; i < t; i++) {
            long n = input.nextLong();
            if(Arrays.binarySearch(fibo, n) >= 0){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
        input.close();
    }
}