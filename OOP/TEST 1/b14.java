import java.util.HashMap;
import java.util.*;

public class b14 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = Integer.parseInt(input.nextLine());
        HashMap<String,Integer> frequency = new HashMap<>();
        while (--n >= 0) {
            String s = input.nextLine().trim().toLowerCase();
            String[] arr = s.split("\\s+");
            int l = arr.length;
            String email = arr[l-1];
            for (int i = 0; i < l - 1; i++) {
                email += arr[i].charAt(0);  
            }

            int cnt = frequency.getOrDefault(email, 0) + 1;
            frequency.put(email, cnt);
            if (cnt > 1) {
                email += cnt;
            }
            email += "@ptit.edu.vn";
            System.out.println(email);
        }
        input.close();
    }
}