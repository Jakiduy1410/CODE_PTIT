import java.util.*;
public class J02020 {
    static int n,k;
    static List<Integer> curr = new ArrayList<>();
    static List<List<Integer>> res = new ArrayList<>();

    static void Try(int start, int i){
        for (int j = start; j <= n - k + i; j++) {
            curr.add(j);
            if (curr.size() == k ) {
                res.add(new ArrayList<>(curr));
            }else{
                Try(j+1,i+1);
            }

            curr.remove(curr.size() - 1);
        }
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        k = input.nextInt();

        curr.clear();
        res.clear();
        Try(1,1);

        for(List<Integer> x : res){
            for(int tmp : x){
                System.out.print(tmp + " ");
            }
            System.out.println();
        }

        System.out.println("Tong cong co " + res.size() + " to hop");

        input.close();

    }
}
