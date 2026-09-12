

import java.util.Scanner;

public class J02004 {

    public static boolean check(int a[], int mid){
        for (int i = 0; i < a.length; i++) {
            if (a[i] != a[a.length - i - 1]) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();

        while (--t >= 0) {
            int n = input.nextInt();

            int a[] = new int[n];

            for(int i = 0; i < n ; i++){
                a[i] = input.nextInt();
            }

            int mid = n / 2;

            if (check(a,mid)) {
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
        input.close();
    }
}