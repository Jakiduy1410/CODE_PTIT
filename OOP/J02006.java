import java.util.HashSet;
import java.util.Scanner;
import java.util.*;

public class J02006{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int m = input.nextInt();
        Set<Integer> st = new TreeSet<>();

        for (int i = 0; i < n; i++) {
            int x = input.nextInt();
            st.add(x);
        }
        for (int i = 0; i < m; i++) {
            int x = input.nextInt();
            st.add(x);
        }

        for(int x : st){
            System.out.print(x + " ");
        }
    }
}