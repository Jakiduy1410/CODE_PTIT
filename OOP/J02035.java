// *****************************************************************
// J02035 - Quay Phai
// De bai: Tim so lan quay phai / vi tri xoay cua mang da sap xep bang cach xac dinh vi tri phan tu giam dau tien
// *****************************************************************
import java.util.*;

public class J02035 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int t = input.nextInt();
        while (--t >= 0) {

            int res = 0; 
            int n = input.nextInt();

            long[] a = new long[n]; 

            for (int i = 0; i < n; i++) {
                a[i] = input.nextLong(); 
            }

            for (int i = 0; i < n - 1; i++) {
                if (a[i] > a[i + 1]) {
                    res = i + 1;
                    break;
                }
            }
            
            System.out.println(res);
        }
        input.close();
    }
}