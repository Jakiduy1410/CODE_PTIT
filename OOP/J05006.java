import java.util.*;

class NV{
    String ma, name, sex, date, dchi, thue, hdong;
    public static int cnt = 1;
    NV(String name, String sex, String date, String dchi, String thue, String hdong){
        this.ma = String.format("%05d", cnt++);
        this.name = name;
        this.sex = sex;
        this.date = date;
        this.dchi = dchi;
        this.thue = thue;
        this.hdong = hdong;
    }

    public String toString(){
        return ma + " " + name + " " + sex + " " + date + " " + dchi + " " + thue
        + " " + hdong; 
    }
}

public class J05006 {
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

        for(NV nv : arr){
            System.out.println(nv);
        }
        input.close();
    }
}