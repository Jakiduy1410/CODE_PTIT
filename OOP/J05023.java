import java.util.*;

class HS {
    String msv, name, lop, email,khoa;

    HS(String msv, String name, String lop, String email) {
        this.msv = msv;
        this.name = name;
        this.lop = lop;
        this.email = email;
        this.khoa = lop.substring(1, 3);
    }

    public String toString() {
        return msv + " " + name + " " + lop + " " + email;
    }
}

public class J05023 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        List<HS> arr = new ArrayList<>();

        int n = Integer.parseInt(input.nextLine());

        for (int i = 0; i < n; i++) {
            String msv = input.nextLine();
            String name = input.nextLine();
            String lop = input.nextLine();
            String email = input.nextLine();

            arr.add(new HS(msv, name, lop, email));
        }

        int q = Integer.parseInt(input.nextLine());
        for (int i = 0; i < q; i++) {
            String year = input.nextLine();
            String tmp = year.substring(2,4);
            System.out.println("DANH SACH SINH VIEN KHOA " + year + ":");
            for(HS hs : arr){
                if (hs.khoa.equals(tmp)) {
                    System.out.println(hs);
                }
            }
        }

        input.close();
    }
}