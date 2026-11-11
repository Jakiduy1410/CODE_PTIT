import java.util.*;


class HS implements Comparable<HS>{
    String msv, lop, name, date;
    double gpa;
    public static int cnt = 1;

    HS(String name, String lop, String date, double gpa){
        String[] tmp = name.split("\\s+");
        String res = "";
        for(String x : tmp){
            String word = Character.toUpperCase(x.charAt(0)) + x.substring(1);
            res += (word + " ");
        }
        this.name = res.trim();
        this.lop = lop;

        this.gpa = gpa;

        StringBuilder sb = new StringBuilder(date);
        if (sb.charAt(1) == '/') {
            sb.insert(0, '0');
        }
        if (sb.charAt(4) == '/') {
            sb.insert(3, '0');
        }

        this.date = sb.toString();

        this.msv = String.format("%s%03d", "B20DCCN", cnt++);
    }

    public int compareTo(HS other){
        return Double.compare(other.gpa, this.gpa);
    }
    public String toString(){
        return msv + " " + name + " " + lop + " " + date + " " + String.format("%.2f", gpa);
    }


}

public class J05005 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = Integer.parseInt(input.nextLine());

        List<HS> arr = new ArrayList<>();

        for (int i = 0; i < t; i++) {
            String name = input.nextLine().toLowerCase().trim();
            String lop = input.nextLine();
            String date = input.nextLine();
            double gpa = Double.parseDouble(input.nextLine());
            arr.add(new HS(name, lop, date, gpa));
        }
        Collections.sort(arr);
        for(HS hs : arr){
            System.out.println(hs);
        }
        input.close();
    }
}