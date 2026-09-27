import java.util.*;

public class J02026 {

    static int n,k;
    static  Integer[] a = new Integer[101];
    static List<Integer> curr = new ArrayList<>();
    static List<List<Integer>> res = new ArrayList<>();

    static void Try(int start, int i){
        for (int j = start; j <= n - k + i; j++) {
            curr.add(a[j]);

            if (curr.size() == k) {
                res.add(new ArrayList<>(curr));
            }else{
                Try(j+1, i+1);
            }
            curr.remove(curr.size() - 1);
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (--t >= 0) {
            n = input.nextInt();
            k = input.nextInt();
            for (int i = 0; i < n; i++) {
                a[i] = input.nextInt();
            }
            Arrays.sort(a,0 , n);

            res.clear();
            curr.clear();
            
            Try(0,0);

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