import java.util.*;

public class J02007 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int t = input.nextInt();

        for (int test = 1; test <= t; test++) {
            
        
            int n = input.nextInt();
            int[] a = new int[n];

            Map<Integer, Integer> mp = new HashMap<>();
            for (int i = 0; i < n; i++) {
                a[i] = input.nextInt();
                mp.put(a[i],    mp.getOrDefault(a[i], 0) +1);
            }

            System.out.println("Test " + test + ": ");
            for (int i = 0; i < n; i++) {
                if (mp.containsKey(a[i])) {
                    System.out.println(a[i] + " xuat hien " + mp.get(a[i]) + " lan");
                    mp.remove(a[i]);
                }
            }





        }
    }
}
