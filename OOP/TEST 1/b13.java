import java.util.Scanner;

public class b13 {

    static boolean check(String s){
        if (s.charAt(0) != '8' && s.charAt(s.length() - 1) != '8') {
            return false; 
        }

        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            sum += (s.charAt(i) - '0');
        }

        if (sum % 10 == 0) {
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