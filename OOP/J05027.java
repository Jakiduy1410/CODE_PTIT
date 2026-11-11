import java.util.*;

class GV implements Comparable<GV>{
    String name, ma, mon, vt, tenCuoi, tenInThuong;
    public static int cnt = 1;
    GV(String name, String mon){
        this.name = name;
        this.tenInThuong = name.toLowerCase();
        this.vt = "";
        String[] tachMon = mon.split("\\s+");
        String[] tachTen = name.split("\\s+");

        this.tenCuoi = tachTen[tachTen.length - 1];

        for(String word : tachMon){
            vt += Character.toUpperCase(word.charAt(0));
        }

        this.ma = "GV" + String.format("%02d", cnt++);
    }

    @Override 
    public int compareTo(GV other){
        if (other.tenCuoi != this.tenCuoi) {
            return this.tenCuoi.compareTo(other.tenCuoi);
        }else{
            return other.ma.compareTo(this.ma);
        }
    }

    public String toString(){
        return ma + " " + name + " " + vt;
    }
}

public class J05027 {

    public static String hash(String s){
        String[] tachMon = s.split("\\s+");
        String res = "";
        for(String word : tachMon){
            res += Character.toUpperCase(word.charAt(0));
        }
        return res;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int n = Integer.parseInt(input.nextLine());
        List<GV> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String name = input.nextLine().trim();
            String mon = input.nextLine().trim();

            arr.add(new GV(name, mon));
        }

        //Collections.sort(arr);

        int q = Integer.parseInt(input.nextLine());
        for (int i = 0; i < q; i++) {
            String target = input.nextLine().trim();
            String tmp = target.toLowerCase();
            System.out.println("DANH SACH GIANG VIEN THEO TU KHOA " + target + ":");
            for(GV g : arr){
                if (g.tenInThuong.contains(tmp)) {
                    System.out.println(g);
                }
            }
        }

        input.close();
    }
}