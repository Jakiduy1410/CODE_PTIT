import java.util.*;


class HS{
    String msv, lop, name, date;
    double gpa;
    public static int cnt = 1;

    HS(String name, String lop, String date, double gpa){
        this.name = name;
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

    public String toString(){
        return msv + " " + name + " " + lop + " " + date + " " + String.format("%.2f", gpa);
    }


}

public class J05003 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = Integer.parseInt(input.nextLine());

        List<HS> arr = new ArrayList<>();

        for (int i = 0; i < t; i++) {
            String name = input.nextLine();
            String lop = input.nextLine();
            String date = input.nextLine();
            double gpa = Double.parseDouble(input.nextLine());
            arr.add(new HS(name, lop, date, gpa));
        }

        for(HS hs : arr){
            System.out.println(hs);
        }
        input.close();
    }
}