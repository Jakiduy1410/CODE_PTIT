
import java.util.*;

public class J01020 {

    public static String calc(String s){

        if (s.equals("0")) {
            return "Impossible";
        }

        Set<String> st = new HashSet<>();
        String a = s;
        long i = 1;
        
        while (true) {

            long cur = Long.parseLong(s) * i;

            a = String.valueOf(cur);

            String[] arr = a.split("");

            for(String x : arr){
                st.add(x);
            }

            if (st.size() == 10) {
                return a;
            }

            i += 1;
        }
    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int t = input.nextInt();
        while (--t >= 0) {
            String s = input.next();

            System.out.println(calc(s));

            
        }

        input.close();
    }
}
