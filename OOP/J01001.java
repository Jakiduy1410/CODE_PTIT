import java.util.Scanner;

public class J01001 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        long a = input.nextLong(); 
        long b = input.nextLong();
        if (a <= 0 || b <= 0) { 
            System.out.print(0);
        }else{
            long dientich = a*b; 
            long chuvi = (a+b) * 2; 
            System.out.println(chuvi + " " + dientich);
        }
        input.close();
    }
}