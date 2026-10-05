import java.util.*;

public class b3 {
    static class Point {
        double x, y;

        public Point(double a, double b) {
            x = a;
            y = b;

        }
        
        static Point nexPoint(Scanner sc){
            Point a = new Point(sc.nextDouble(), sc.nextDouble());
            return a;
        }

        
        
    }
    
    static double dis(Point a, Point b){
        return Math.sqrt(Math.pow(a.x - b.x , 2)+ Math.pow(a.y - b.y, 2));
    }
    static class Triangle{
        double A, B, C;

        public Triangle(Point a, Point b, Point c){
            A = dis(a,b);
            B = dis(b,c);
            C = dis(c,a);
        }

        public boolean valid(){
            double m = Math.max(A, Math.max(B, C));
            return 2*m < A+B+C;
        }

        public String getPerimeter(){
            double s = Math.sqrt((A+B+C)*(A+B-C)*(A-B+C)*(-A+B+C)) / 4;
            return String.format("%.2f", s);
        }

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (--t>= 0) {
            Triangle a = new Triangle(Point.nexPoint(sc), Point.nexPoint(sc), Point.nexPoint(sc));
            if (!a.valid())  {
                System.out.println("INVALID");
            }else{
                System.out.println(a.getPerimeter());
            }
        }

        sc.close();
    }
}