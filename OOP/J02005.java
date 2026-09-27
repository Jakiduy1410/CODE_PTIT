import java.util.HashSet;
import java.util.Scanner;
import java.util.TreeSet;

public class J02005 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int a[] = new int[n];
        int b[] = new int[m];
        for (int i = 0; i < n; i++) {
            a[i] = input.nextInt();
        }
        for (int i = 0; i < m; i++) {
            b[i] = input.nextInt();
        }

        HashSet<Integer> setA = new HashSet<>();
        for (int i = 0; i < n; i++) {
            setA.add(a[i]); 
        }

        TreeSet<Integer> res = new TreeSet<>();
        for (int i = 0; i < b.length; i++) {
            if (setA.contains(b[i])) {
                res.add(b[i]);
            }
        }

        for(int x : res){
            System.out.print(x + " ");
        }


        input.close();
    }
}