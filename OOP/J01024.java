import java.util.Scanner;

public class J01024 {


    public static boolean check(String s){
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);

            if (ch != '0' && ch != '1' && ch !='2') {
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