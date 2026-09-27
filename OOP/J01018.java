// *****************************************************************
// J01018 - So Khong Giam / So Khong Lien Ke
// De bai: Kiem tra hai chu so lien ke cach nhau dung 2 don vi va tong cac chu so chia het cho 10
// *****************************************************************
import java.util.*;

public class J01018 {

    public static boolean check(String s){
        int sum = s.charAt(0) - '0';


        for (int i = 1; i < s.length(); i++) {
            char ch = s.charAt(i);
            char past = s.charAt(i-1);
            int a = ch - '0';
            int b = past - '0';
            if (Math.abs(a - b) != 2) {
                return false;
            }
            sum += a;
        }

        if (sum % 10 != 0) {
            return false;
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
