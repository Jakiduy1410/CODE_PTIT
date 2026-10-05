
import java.util.*;

public class b4 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String ma = input.nextLine();
        String name = input.nextLine();
        float a = input.nextFloat();
        float b = input.nextFloat();
        float c = input.nextFloat();
        float sum = a*2+b+c;
        String KV = ma.substring(2,3);
        float plus = 0;
        if (KV.equals("1")) {
            plus = (float) 0.5;
           
        }else if (KV.equals("2")) {
            plus = (float) 1.0;
            
        }else if (KV.equals("3")) {
            plus = (float) 1.5;
           
        }

        float total = sum + plus;

        String end;
        if ((int ) sum == sum) {
            end = Integer.toString((int)sum);
        }else{
            end = Float.toString(sum);
        }
        
        String plusend;
        if ((int ) plus == plus) {
            plusend = Integer.toString((int)plus);
        }else{
            plusend = Float.toString(plus);
        }

        String status = (total >= 24.0f) ? "TRUNG TUYEN" : "TRUOT";
        
        System.out.print(ma + " " + name + " " + plusend + " " + end + " " + status);
        

        input.close();
    }
}