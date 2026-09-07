import java.util.*;

public class J02010 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        List<Integer> a = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            a.add(input.nextInt());
        }

        for (int i = 0; i < n; i++) {
            boolean flag = false;
            int tmp = a.get(i);
            for(int j = i + 1; j < n ; j++){
                if (a.get(j) < tmp) {
                    flag = true;
                    int x = tmp;
                    a.set(i, a.get(j));
                    a.set(j, x);
                }
            }

            if (flag) {
                for(int x : a){
                    System.out.print(x + " ");
                }
            }
        }
    }
}
