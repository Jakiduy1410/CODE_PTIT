import java.util.*;

class MH {
    String name, dv, ma;
    long dg, sl, total, ship, res, sell;
    public static int cnt = 1;

    MH(String name, String dv, long dg, long sl, long total) {
        this.ma = "MH" + String.format("%02d", cnt++);
        this.name = name;
        this.sl = sl;
        this.dv = dv;
        this.sl = sl;
        this.total = total;
        this.ship = Math.round((double) total * 0.05);
        this.res = Math.round(total + this.ship); 
        this.sell = Math.round((double) this.res * 1.02);

    }

    public String toString(){
        return ma + " " + name + " " + dv + " " + ship + " " + res + " " + sell;
    }
}

public class J05036 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = Integer.parseInt(input.nextLine());
        List<MH> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String name = input.nextLine();
            String dv = input.nextLine();
            long dg = Long.parseLong(input.nextLine());
            long sl = Long.parseLong(input.nextLine());
            

            long total = dg * sl;

            arr.add(new MH(name, dv, dg, sl, total));
        }

        for(MH m : arr){
            System.out.println(m);
        }
        input.close();
    }
}