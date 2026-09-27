// *****************************************************************
// J02037 - Day Uu The
// De bai: Kiem tra day so: do dai chan va so luong so chan > le, hoac do dai le va so luong so le > chan
// *****************************************************************
import java.util.*;

public class J02037{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        while (--t >= 0) {

            String s = input.nextLine().trim();
            String[] arr = s.split(" ");
            int len = arr.length;
            int cnt1 = 0, cnt2 = 0;
            for(String a : arr){
                if (Integer.parseInt(a) % 2 == 0 ) {
                    cnt1 += 1;
                }else{
                    cnt2 += 1;
                }
            }

            if (len % 2 == 0 && cnt1 > cnt2) {
                System.out.println("YES");
            }else if(len % 2 != 0 && cnt2 > cnt1){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
        input.close();
    }
}