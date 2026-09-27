// *****************************************************************
// J02034 - Bo Sung Day So
// De bai: Liet ke cac so con thieu trong day so tu 1 den so lon nhat cua mang, neu khong thieu in Excellent!
// *****************************************************************
import java.util.*;

public class J02034{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n];

        for(int i = 0 ; i < n ; i++){
            a[i] = input.nextInt();
        }

        int start = 1;
        boolean flag = false;
        for (int i = 0; i < n; i++) {
            if (start < a[i]) {
                flag = true;
                for (int j = start; j < a[i]; j++) {
                    System.out.println(j);
                }
                start = a[i] + 1;
            }else{
                start = a[i] + 1;
            }
        }

        if (!flag) {
           System.out.println("Excellent!"); 
        }
        input.close();
    }
}