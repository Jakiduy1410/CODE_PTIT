import java.util.Scanner;

public class J01010 {

    public static String check(String s){
        String tmp = "";
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if (ch == '1') {
                tmp += '1';
            }else if(ch == '0'){
                tmp += '0';
            }
            else if(ch == '9'){
                tmp += '0';
            }
            else if(ch == '8'){
                tmp += '0';
            }else{
                return "INVALID";
            }
        }
        return tmp;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        while (--n >= 0) {

            String s = input.next();

            String tmp = check(s);

            if (tmp.equals("INVALID")) {
                System.out.println("INVALID");
            } else {
                long res = Long.parseLong(tmp); 
                if (res == 0) { 
                    System.out.println("INVALID"); 
                } else {
                    System.out.println(res); 
                }
            }
        }

        input.close();
    }
}