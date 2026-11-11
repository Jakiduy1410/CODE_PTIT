import java.util.*;

class GV implements Comparable<GV>{
    String name,ma,ms, status, monhoc;
    char vt;
    Double a,b,c,res,bonus;
    int type;
    public static int cnt = 1;

    GV(String name, String ma, Double a, Double b){
        this.name = name;
        this.type = Integer.parseInt(ma.substring(1));
        this.vt = ma.charAt(0);
        this.monhoc = monHoc();
        this.bonus = update();
        this.res = a * 2 + b + bonus;
        this.ms = "GV" + String.format("%02d", cnt++);
        this.status = xemxet();
    }

    public double update(){
        if (type == 1) {
            return 2.0;
        }else if(type == 2){
            return 1.5;
        }else if(type == 3){
            return 1.0;
        }else{
            return 0;
        }
    }

    public String xemxet(){
        if (res >= 18) {
            return "TRUNG TUYEN";
        }else{
            return  "LOAI";
        }
    }
    
    public String monHoc(){
        if (vt == 'A') {
            return "TOAN";
        }
        else if (vt == 'B') {
            return "LY";
        }
        else{
            return "HOA";
        }
    }

    @Override 
    public int compareTo(GV other){
        return Double.compare(other.res, this.res);
    }

    public String toString(){
        return ms + " " + name + " " + monhoc + " "  + String.format("%.1f", res) + " " + status;
    }
}

public class J05014 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = Integer.parseInt(input.nextLine());

        List<GV> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String name = input.nextLine();
            String ma = input.nextLine();
            Double a = Double.parseDouble(input.nextLine());
            Double b = Double.parseDouble(input.nextLine());
            

            arr.add(new GV(name, ma, a, b));
        }

        Collections.sort(arr);

        for(GV gv : arr){
            System.out.println(gv);
        }
        input.close();
    }
}