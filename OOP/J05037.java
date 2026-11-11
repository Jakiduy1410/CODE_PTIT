import java.util.*;

class MH implements Comparable<MH>{
    String name,dv,ma;
    long dg,sl,total,ship,res,sell;
    public static int cnt = 1;

    MH(String name, String dv, long dg, long sl, long total){
        this.ma = "MH" + String.format("%02d", cnt++);
        this.name = name;
        this.dv = dv;
        this.dg = dg;
        this.sl = sl;
        this.total = total;
        this.ship = Math.round(total * 0.05);
        this.res = total + ship;
        Double tmp = ( res * 1.02) / sl;
        this.sell = (long) Math.ceil(tmp / 100.0) * 100;

    }

    @Override 
    public int compareTo(MH other){
        return Long.compare(other.sell, this.sell);
    }

    public String toString(){
        return ma + " " + name + " " + dv + " " + ship + " " + res + " " + sell;
    }
}

public class J05037 {
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

        Collections.sort(arr);

        for(MH mh : arr){
            System.out.println(mh);
        }
        input.close();
    }
}