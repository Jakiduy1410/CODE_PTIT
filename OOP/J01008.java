import java.util.*;

public class J01008 {

    public static Map<Long,Integer> calc(int n){
        
        Map<Long, Integer> mp = new LinkedHashMap<>();
        

    
        int cnt = 0;
        if(n % 2 == 0){
            while (n % 2 == 0) {
                cnt += 1;
                n /= 2;
            }
            mp.put(2L, cnt);
        }
        cnt = 0;
        long i = 3;
        while (i*i <= n) {
            
            if (n % i == 0) {
                while (n % i == 0) {
                    cnt += 1;
                    n /= i;
                }
    
                mp.put(i, cnt);
            }
            cnt = 0;
            i += 2;
        }

        if (n > 1) {
            mp.put((long) n, 1);
        }

        return mp;

    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i = 1; i <= t; i++) {
            int n = input.nextInt();

            Map<Long, Integer> res = calc(n);

            System.out.print("Test " + i + ": ");

            for( Map.Entry<Long, Integer> entry: res.entrySet()){
                System.out.print(entry.getKey() + "(" + entry.getValue() + ") ");
            }
            System.out.println();

        }
        input.close();
    }
}