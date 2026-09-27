
import java.util.*;

public class b10 {
    static int n;
    static Integer a[];
    static ArrayList<Integer> curr = new ArrayList<>();
    static ArrayList<ArrayList<Integer>> res = new ArrayList<>();
    static boolean primes(int n){
        if (n < 2) {
            return false;
        }
        for (int i = 2; i*i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    static void Try(int start, int sum){
        for (int j = start; j < n; j++) {
            curr.add(a[j]);
            int newSum = sum + a[j];

            if (primes(newSum)) {
                res.add(new ArrayList<>(curr));
            }

            Try(j+1, newSum);

            curr.remove(curr.size() - 1);
        }
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (--t >= 0) {
            n = input.nextInt();
            a = new Integer[n];
            for (int i = 0; i < n; i++) {
                a[i] = input.nextInt();
            }

            Arrays.sort(a, Collections.reverseOrder());
            curr.clear();
            res.clear();
            Try(0,0);


            res.sort((o1,o2) -> {
                int len = Math.min(o1.size(), o2.size());
                for (int i = 0; i < len; i++) {
                    if (!o1.get(i).equals(o2.get(i))) {
                        return o1.get(i) - o2.get(i);
                    }
                }
                return o1.size() - o2.size();
            });
            for(ArrayList<Integer> s: res){
                for (int i = 0; i < s.size(); i++) {
                    System.out.print(s.get(i) + " ");
                }
                System.out.println();
            }
        }
        input.close();
    }
}