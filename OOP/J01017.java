// *****************************************************************
// J01017 - So Lien Ke
// De bai: Kiem tra so nguyen co tat ca cac chu so lien ke deu co khoang cach tuyet doi bang 1 hay khong
// *****************************************************************
import java.util.*;

public class J01017 {

    public static boolean check(String s){
        for (int i = 1; i < s.length(); i++) {
            char ch = s.charAt(i);
            char past = s.charAt(i - 1);
            int a = ch - '0';
            int b = past - '0';

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
