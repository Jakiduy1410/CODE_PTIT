import java.util.*;

class HS {
    String msv, name, lop, email,nganh;

    HS(String msv, String name, String lop, String email) {
        this.msv = msv;
        this.name = name;
        this.lop = lop;
        this.email = email;
        this.nganh = update();
    }

    public String update(){
        String tmp = msv.substring(3, 7);
        // Lỗi cũ: loại tất cả lớp bắt đầu bằng 'E'
        // Sửa: Chỉ ngành DCCN và DCAT mới bỏ qua lớp bắt đầu bằng 'E'
        if (lop.charAt(0) == 'E' && (tmp.equals("DCCN") || tmp.equals("DCAT"))) {
            return "NONE";
        }
        return tmp;
    }

    public String toString() {
        return msv + " " + name + " " + lop + " " + email;
    }
}



public class J05024 {

    public static String check(String s){
        if (s.equals("Ke toan")) {
            return "DCKT";
        }else if(s.equals("Cong nghe thong tin")){
            return "DCCN";
        }else if(s.equals("An toan thong tin")) return "DCAT";
        else if(s.equals("Vien thong")) return "DCVT";
        else return "DCDT";
    }
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
            String nganh = input.nextLine();

            String tmp = check(nganh);
            String z = nganh.toUpperCase();
            System.out.println("DANH SACH SINH VIEN NGANH " + z + ":");
            for(HS hs : arr){
                if (hs.nganh.equals(tmp)) {
                    System.out.println(hs);
                }
            }
        }

        input.close();
    }
}