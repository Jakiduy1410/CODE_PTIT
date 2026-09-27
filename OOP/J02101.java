// *****************************************************************
// J02101 - In Ma Tran
// De bai: In ma tran theo hinh zic-zac: hang chan tu trai sang phai, hang le tu phai sang trai
// *****************************************************************
import  java.util.*;;
public class J02101 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (--t >= 0) {
            int n = input.nextInt();
            int[][] a = new int[n][n];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    a[i][j] = input.nextInt();
                }
            }

            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    for (int j = 0; j < n; j++) {
                        System.out.print(a[i][j] + " ");
                    }
                    
                }
                else{
                    
                    for (int j = n - 1; j >= 0; j--) {
                        System.out.print(a[i][j] + " ");
                        
                    }
                }
            }
            System.out.println();
        }


        input.close();
    }
}
