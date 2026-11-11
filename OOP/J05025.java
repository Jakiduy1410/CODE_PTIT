import java.util.*;

class GV implements Comparable<GV>{
    String name, ma, mon, vt, tenCuoi;
    public static int cnt = 1;
    GV(String name, String mon){
        this.name = name;
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

public class J05025 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int n = Integer.parseInt(input.nextLine());
        List<GV> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String name = input.nextLine().trim();
            String mon = input.nextLine().trim();

            arr.add(new GV(name, mon));
        }

        Collections.sort(arr);

        for(GV g : arr){
            System.out.println(g);
        }

        input.close();
    }
}