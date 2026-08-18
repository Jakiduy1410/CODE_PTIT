import java.util.*;

public class J01012{

    public static List<Integer> calc(int n){
        List<Integer> res = new ArrayList<>();
        for (int i = 1; i * i <= n; i++) {
            if(n % i == 0){
                res.add(i);
                if (i != n / i) {
                    res.add(n / i);
                }
            }
        }

        return res;
    }
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();

        while (--t >=  0) {
            int n = input.nextInt();

            List<Integer> arr = calc(n);

            int cnt = 0;
            for(Integer x : arr){
                if (x % 2 == 0) {
                    cnt += 1;
                }
            }

            System.out.println(cnt);

        }
        input.close();
    }
}