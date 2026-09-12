import java.util.Scanner;

public class b15 {

    static boolean check(String s){
        int n = s.length();
        int cnt = 0;
        for (int i = 0; i < n /2; i++) {
            if (s.charAt(i) != s.charAt(n - i - 1)) {
                cnt += 1;
            }
        }

        if (cnt == 1) {
            return true;
        }
        if(cnt == 0 && n % 2 == 1){
            return true;
        }
        return false;
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