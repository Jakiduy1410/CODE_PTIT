
import java.util.Scanner;

public class J01026 {

    public static boolean check(int n){
        int x = (int) Math.sqrt(n);

        if (x * x == n) {
            return true;
        }else return false;
    
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();

        while (--t >= 0) {
            int n = input.nextInt();
            if (check(n)) {
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
        input.close();
    }
}