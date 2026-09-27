// *****************************************************************
// J01001 - Hinh Chu Nhat
// De bai: Nhap chieu dai va chieu rong, neu hop le (>0) in ra chu vi va dien tich, nguoc lai in 0
// *****************************************************************
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