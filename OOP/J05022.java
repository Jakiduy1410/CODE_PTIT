import java.util.*;

class HS {
    String msv, name, lop, email;

    HS(String msv, String name, String lop, String email) {
        this.msv = msv;
        this.name = name;
        this.lop = lop;
        this.email = email;
    }

    public String toString() {
        return msv + " " + name + " " + lop + " " + email;
    }
}

public class J05022 {
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
            String lop = input.nextLine();
            System.out.println("DANH SACH SINH VIEN LOP " + lop + ":");
            for(HS hs : arr){
                if (hs.lop.equals(lop)) {
                    System.out.println(hs);
                }
            }
        }

        input.close();
    }
}