import java.util.*;

class NV{
    String name, cv;
    int lcb, day, bonus, pcap, total,res;
    public static int cnt = 1;
    String ma;

    NV(String name, int lcb, int day, String cv){
        this.ma = "NV" + String.format("%02d", cnt++);

        this.name = name;
        this.cv = cv;

        this.lcb = lcb;
        this.day = day;

        this.total = lcb * day;
        this.bonus = tinhBonus();

        this.pcap = tinhPcap();
        
        this.res = total + bonus + pcap;
    }

    public int tinhBonus(){
        if (this.day >= 25) {
            return (int) (0.2 * total);
        }else if(this.day >= 22){
            return (int) (0.1 * total);
        }else{
            return 0;
        }
    }

    public int tinhPcap(){
        if (this.cv.equals("GD")) {
            return 250000;
        }else if(this.cv.equals("PGD")){
            return 200000;
        }else if(this.cv.equals("TP")){
            return 180000;
        }else{
            return 150000;
        }
    }

    public String toString(){
        return ma + " " + name + " " + total + " " + bonus + " " + pcap + " " + res;
    }
}

public class J05038 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int n = Integer.parseInt(input.nextLine());
        List<NV> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String name = input.nextLine();
            int lcb = Integer.parseInt(input.nextLine());
            int day = Integer.parseInt(input.nextLine());
            String cv = input.nextLine();

            arr.add(new NV(name, lcb, day, cv));
        }

        int ans = 0;
        for(NV nv : arr){
            System.out.println(nv);
            ans += nv.res;
        }

        System.out.println("Tong chi phi tien luong: " + ans);
        input.close();
    }
}