import java.util.Scanner;

public class b11 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();

        if (a > b) {
            int tmp = a;
            a = b;
            b = tmp;
        }

        int[] sum = new int[b+1];
        for (int i = 1; i <= b /2; i++) {
            for (int j = 2*i; j < b + 1; j+= i) {
                sum[j] += i;
            }
        }

        int cnt = 0;
        for (int i = a; i < b + 1; i++) {
            if (sum[i] > i) {
                cnt += 1;
            }
        }

        System.out.println(cnt);
        input.close();
    }
}