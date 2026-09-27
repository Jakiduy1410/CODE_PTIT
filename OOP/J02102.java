// *****************************************************************
// J02102 - Ma Tran Xoan Oc
// De bai: Sap xep mang tang dan va dien vao ma tran N x N theo hinh xoan oc chieu kim dong ho
// *****************************************************************
import  java.util.*;

public class J02102{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n*n];
        for (int i = 0; i < n * n; i++) {
            a[i] = input.nextInt();
        }
        Arrays.sort(a);
        int pos = 0;
        int top = 0;
        int bot = n - 1;
        int left = 0;
        int right = n - 1;

        int[][] res = new int[n][n];
        while (left <= right && top <= bot) {
            for (int i = left; i <= right; i++) {
                res[top][i] = a[pos];
                pos ++;
            }
            top ++;

            for (int i = top; i <= bot; i++) {
                res[i][right] = a[pos];
                pos++;
            }
            right--;

            for (int i = right ; i >= left; i--) {
                res[bot][i] = a[pos];
                pos++;
            }
            bot--;

            for (int i = bot ; i >= top; i--) {
                res[i][left] = a[pos];
                pos ++;
            }
            left++;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(res[i][j] + " ");
            }
            System.out.println();
        }
        input.close();
    }
}