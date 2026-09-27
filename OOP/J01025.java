import java.util.Scanner;

public class J01025 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int x1 = input.nextInt(), y1 = input.nextInt(), x2 = input.nextInt(), y2 = input.nextInt();
        int x3 = input.nextInt(), y3 = input.nextInt(), x4 = input.nextInt(), y4 = input.nextInt();


        int x_min = Math.min(Math.min(x1, x2), Math.min(x3, x4));
        int y_min = Math.min(Math.min(y1, y2), Math.min(y3, y4));


        int x_max = Math.max(Math.max(x1, x2), Math.max(x3, x4));
        int y_max = Math.max(Math.max(y1, y2), Math.max(y3, y4));

        int h = x_max - x_min;
        int w = y_max - y_min;

        int best = Math.max(h, w);
        long area = (long)best * best;
        System.out.println(area);

        input.close();
    }
}