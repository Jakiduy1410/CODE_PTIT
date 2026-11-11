import java.util.*;

class HS implements Comparable<HS>{
    String name, date;
    double a,b,c, res;
    int ma;
    public static int cnt = 1;
    HS(String name, String date, double a, double b, double c){
        this.ma = cnt++;
        this.name = name;
        this.date = date;
        this.a = a;
        this.b = b;
        this.c = c;
        this.res = a + b + c;
    }

    @Override 
    public int compareTo(HS other){
        return Double.compare(other.res, this.res);
    }

    public String toString(){
        return ma + " " + name + " " + date + " " + res; 
    }
}

public class J05009 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = Integer.parseInt(input.nextLine());

        List<HS> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String name = input.nextLine();
            String date = input.nextLine();
            double a = Double.parseDouble(input.nextLine());
            double b = Double.parseDouble(input.nextLine());
            double c = Double.parseDouble(input.nextLine());
            arr.add(new HS(name, date, a, b, c));
        }

        Collections.sort(arr);
        HS tmp = arr.get(0);
        for(HS hs : arr){
            if (tmp.res == hs.res) {
                System.out.println(hs);
            }
        }

        input.close();
    }
}