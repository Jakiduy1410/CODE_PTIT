import java.util.*;

class HS implements Comparable<HS>{
    String name, lop, date;
    float gpa;
    public static int cnt = 1;
    String msv;

    HS(String name, String lop, String date, float gpa){
        this.msv = String.format("B20DCCN%03d", cnt++);
        this.lop = lop;
        StringBuilder sb = new StringBuilder(date);
        if (sb.charAt(1) == '/') sb.insert(0, "0");
        if (sb.charAt(4) == '/') sb.insert(3, "0");
        this.date = sb.toString();
        this.gpa = gpa;

        String[] words = name.trim().toLowerCase().split("\\s+");
        String res = "";
        for(String w : words){
           
            res += Character.toUpperCase(w.charAt(0)) + w.substring(1) + " ";
        }
        this.name = res.trim();
    }

    @Override 
    public int compareTo(HS other){
        return Float.compare(other.gpa, this.gpa);
    }

    public String toString(){
        return msv + " " + name + " "+ lop +  " " +  date + " " + String.format("%.2f", gpa);
    }
}

public class b6 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.nextLine();

        List<HS> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String name = input.nextLine();
            String lop = input.nextLine();
            String date = input.nextLine();
            float gpa = Float.parseFloat(input.nextLine());
            arr.add(new HS(name, lop, date, gpa));
            
        }

        Collections.sort(arr);

        for(HS h : arr){
            System.out.println(h);
        }

        input.close();
    }
}