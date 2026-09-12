import java.io.CharArrayWriter;
import java.util.Scanner;

public class b12 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = Integer.parseInt(input.nextLine());
        while (--t >= 0) {
            String s = input.nextLine();
            s = s.toLowerCase();
            String[] arr = s.split("\\s+");
            StringBuilder sb = new StringBuilder();
            for(String x : arr){
                if (!x.isEmpty()) {
                    x = x.toLowerCase();
                    String word = Character.toUpperCase(x.charAt(0)) + x.substring(1);
                    sb.append(word).append(" ");
                }
            }
            System.out.println(sb.toString().trim());
        }
        input.close();
    }
}