// *****************************************************************
// J01016 - Chu So 4 Va Chu So 7
// De bai: Kiem tra tong so luong chu so 4 va 7 trong so N co bang 4 hoac 7 hay khong
// *****************************************************************
import java.util.*;

public class J01016{

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        String s = input.next();

        int cnt = 0;
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if (ch == '4' || ch == '7') {
                cnt += 1;
            }
        }

        if (cnt == 4 || cnt == 7) {
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }

        input.close();
    }
}