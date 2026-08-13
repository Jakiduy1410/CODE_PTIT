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
