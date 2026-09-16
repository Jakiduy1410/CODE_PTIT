import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class J02025 {

    static  int n;
    static List<Integer> curr = new ArrayList<>();
    static List<List<Integer>> res = new ArrayList<>();
    static  Integer[] a = new Integer[101];
    static boolean prime(int n){
        if (n < 2) {
            return  false;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return  false;
            }
        }
        return  true;
    }

    static void Try(int i){
        for (int j = i; j < n; j++) {
            curr.add(a[j]);

            if (!curr.isEmpty()) {
                int sum = 0;
                for(int u = 0 ; u < curr.size(); u++){
                    sum += curr.get(u);
                }

                if (prime(sum)) {
                    res.add(new ArrayList<>(curr));
                }
            }

            Try(j+1);
            curr.remove(curr.size() - 1);
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (--t >= 0) {
            n = input.nextInt();
            for (int i = 0; i < n; i++) {
                a[i] = input.nextInt();
            }

            Arrays.sort(a, 0, n, Collections.reverseOrder());
            res.clear();
            curr.clear();
            Try(0);

            res.sort((o1,o2) -> {
                int len = Math.min(o1.size(), o2.size());
                for (int i = 0; i < len; i++) {
                    if (!o1.get(i).equals(o2.get(i))) {
                        return o1.get(i) - o2.get(i);
                    }
                }
                return  o1.size() - o2.size();
            });

            for(List<Integer> arr : res){
                for(int x : arr){
                    System.out.print(x + " ");
                }
                System.out.println();
            }

        }
        input.close();
    }
}