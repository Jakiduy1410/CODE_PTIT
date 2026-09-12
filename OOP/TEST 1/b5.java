import java.util.Scanner;

public class b5 {
    static boolean check(String s){
        for (int i = 1; i < s.length(); i++) {
            int a = s.charAt(i-1) - '0';
            int b = s.charAt(i) - '0';
            if (Math.abs(a - b) != 1) {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (--t >= 0) {
            String s = input.next();
            if (check(s)) {
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
        input.close();
    }
}