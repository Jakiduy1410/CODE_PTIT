// *****************************************************************
// J01003 - Giai Phuong Trinh Bac Nhat
// De bai: Giai ax + b = 0: in VN neu vo nghiem, VSN neu vo so nghiem, hoac in nghiem lam tron 2 chu so thap phan
// *****************************************************************
import java.util.Scanner;

public class J01003 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        if (a == 0  && b != 0) {
            System.out.println("VN");
        }else if( a == 0 && b == 0){
            System.out.println("VSN");
        }else{
            double res = -((double)b / a);
            System.out.printf("%.2f\n", res);
        }
        input.close();
    }
}
