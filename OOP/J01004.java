import java.util.Scanner;

public class J01004 {

    public static boolean snt(long n){
        if (n < 2) {
            return false;
        }

        for(long i = 2; i * i <= n ; i++){
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int t = input.nextInt();
        for(int i = 0 ; i < t ; i++){
            long a = input.nextLong();
            if (snt(a)) {
                System.out.println("YES");            
            }else{
                System.out.println("NO");
            }

        }

        input.close();
    }
}
