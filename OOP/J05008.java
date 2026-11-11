import java.util.Scanner;

class Point {
    private double x, y;

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }
}

public class J05008 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (!sc.hasNextInt()) return;
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            Point[] p = new Point[n];
            for (int i = 0; i < n; i++) {
                p[i] = new Point(sc.nextDouble(), sc.nextDouble());
            }

            double sum = 0;
            for (int i = 0; i < n; i++) {
                Point p1 = p[i];
                Point p2 = p[(i + 1) % n]; 
                sum += (p1.getX() * p2.getY() - p2.getX() * p1.getY());
            }

            double area = Math.abs(sum) / 2.0;
            System.out.printf("%.3f\n", area);
        }
    }
}