// *****************************************************************
// J01011 - Boi So Chung Nho Nhat - Uoc So Chung Lon Nhat
// De bai: Tim BCNN va UCLN cua 2 so nguyen duong a va b
// *****************************************************************
import java.util.Scanner;

public class J01011 {

    public static long gcd(long a, long b){
        while (b != 0) {
            long tmp = b;
            b = a % b;
            a = tmp;
        }
        return a;


    }

    public static long lcm(long a, long b){
        return (a / gcd(a, b)) * b;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (--t >= 0) {
            long a = input.nextLong(); 
            long b = input.nextLong();

            long ucln = gcd(a,b);
            long bcnn = lcm(a,b);
            System.out.println(bcnn + " " + ucln);
        }
        input.close();
    }
}