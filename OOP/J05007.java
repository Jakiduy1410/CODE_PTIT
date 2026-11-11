import java.util.*;
import java.time.*;
import java.time.format.DateTimeFormatter;
class NV implements Comparable<NV>{
    String ma, name, sex, date, dchi, thue, hdong;
    public static int cnt = 1;
    public static final DateTimeFormatter DTF = DateTimeFormatter.ofPattern("dd/MM/yyyy");


    NV(String name, String sex, String date, String dchi, String thue, String hdong){
        this.ma = String.format("%05d", cnt++);
        this.name = name;
        this.sex = sex;
        this.date = date;
        this.dchi = dchi;
        this.thue = thue;
        this.hdong = hdong;
    }

    @Override 

    public int compareTo(NV other){
        LocalDate d1 = LocalDate.parse(this.date, DTF);
        LocalDate d2 = LocalDate.parse(other.date, DTF);
        return d1.compareTo(d2);
    }
    public String toString(){
        return ma + " " + name + " " + sex + " " + date + " " + dchi + " " + thue
        + " " + hdong; 
    }
}

public class J05007 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        List<NV> arr = new ArrayList<>();
        int n = Integer.parseInt(input.nextLine());
        for (int i = 0; i < n; i++) {
            String name = input.nextLine();
            String sex = input.nextLine();
            String date = input.nextLine();
            String dchi = input.nextLine();
            String thue = input.nextLine();
            String hdong = input.nextLine();
            arr.add(new NV(name, sex, date, dchi, thue, hdong));
        }
        Collections.sort(arr);

        for(NV nv : arr){
            System.out.println(nv);
        }
        input.close();
    }
}