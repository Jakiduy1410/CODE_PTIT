import java.util.Scanner;

public class J01006 {

    public static long[] fibo = new long[93];

    public static void calc(){
        fibo[0] = 0;
        fibo[1] = 1;
        for (int i = 2; i < fibo.length; i++) {
            fibo[i] = fibo[i-1] + fibo[i-2];
        }
    }
    public static void main(String[] args){
        calc();
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for(int i = 0; i < t ; i++){
            int n = input.nextInt();
            System.out.println(fibo[n]);
        }
        input.close();
    }
}
