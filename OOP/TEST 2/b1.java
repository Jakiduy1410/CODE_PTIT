import java.util.*;

public class b1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String name = input.nextLine();
        String date = input.nextLine();
        float d1 = input.nextFloat();
        float d2 = input.nextFloat();
        float d3 = input.nextFloat();
        float sum = d1 + d2 + d3;
        System.out.printf("%s %s %.1f", name ,date, sum); 
        input.close();
    }
}