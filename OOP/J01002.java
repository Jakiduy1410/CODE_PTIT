import java.util.Scanner;

public class J01002 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int t = input.nextInt();
        while (t != 0) {
            long n = input.nextLong();
            long sum = ((n + 1) * (n)) / 2;
            System.out.println(sum);
            t -= 1;
        }
        input.close();
    }
}
