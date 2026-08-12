import java.util.Scanner;

public class DUY {
    public static void main(String[] args) {
        int balance = 10000;
        Scanner input = new Scanner(System.in);

        while (true) {
            System.out.println("Nhap lua chon cua ban :");
            System.out.println("1: Deposit input");
            System.out.println("2: Withdraw input");
            System.out.println("3: Check Balance");
            System.out.println("4: Exit");
            int n = input.nextInt();
            
            if (n == 1) {
                int tmp = input.nextInt();
                balance += tmp;
                System.out.println("Nap thanh cong : " + tmp);
                
            }else if (n == 2) {
                int tmp = input.nextInt();
                balance -= tmp;
                System.out.println("Rut thanh cong : " + tmp);

                
            }else if(n == 3){
                System.out.println("So du cua ban: " + balance);
                
            }else{
                break;
            }
   
        }

        input.close();
        
    }
}