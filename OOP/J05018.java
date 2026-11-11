import java.util.*;

class Point implements Comparable<Point> {
    String name, type, ma;
    Double res;

    public static int cnt = 1;

    Point(String name, Double res) {
        this.name = name;
        this.res = res;
        this.ma = "HS" + String.format("%02d", cnt++);
        this.type = update();
    }

    public String update() {
        if (res < 5) {
            return "YEU";
        } else if (res < 7)
            return "TB";
        else if (res < 8)
            return "KHA";
        else if (res < 9)
            return "GIOI";
        else
            return "XUAT SAC";
    }

    @Override
    public int compareTo(Point other) {
        return Double.compare(other.res, this.res);
    }

    public String toString() {
        return ma + " " + name + " " + String.format("%.1f", res) + " " + type;
    }
}

public class J05018 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        List<Point> arr = new ArrayList<>();

        int n = Integer.parseInt(input.nextLine().trim());
        for (int i = 0; i < n; i++) {
            String name = input.nextLine().trim();
            

            Double res = 0.0;

            String[] p = input.nextLine().trim().split("\\s+");
            for (int j = 0; j < 10; j++) {
                Double x = Double.parseDouble(p[j]);
                if (j == 0 || j == 1) {
                    res += (x * 2);
                } else {
                    res += x;
                }
            }
           

            res = Math.round((res / 12.0) * 10.0) / 10.0;
            arr.add(new Point(name, res));
        }
        Collections.sort((arr));
        for (Point p : arr) {
            System.out.println(p);
        }
        input.close();
    }
}