// *****************************************************************
// J02010 - Sap Xep Doi Cho Truc Tiep
// De bai: Mo phong thuat toan Interchange Sort va in trang thai mang sau moi buoc
// *****************************************************************
import java.util.Scanner;

public class J02010 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (!sc.hasNextInt()) return;
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        int step = 1;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[j] < a[i]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
            System.out.print("Buoc " + step + ":");
            for (int k = 0; k < n; k++) {
                System.out.print(" " + a[k]);
            }
            System.out.println();
            step++;
        }
        sc.close();
    }
}
