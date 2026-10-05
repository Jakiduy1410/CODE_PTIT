// *****************************************************************
// J05067 - Quan Ly Kho Xang Dau
// De bai: Tinh don gia, thue va thanh tien cho tung don hang xang dau theo ma sp va hang san xuat
// *****************************************************************
import java.util.*;

class NL {
    String maDonHang, hangSanXuat;
    long donGia, soLuong, Tong, ThueRiel;
    double Thue;

    NL(String raw, int sl) {
        this.maDonHang = raw;
        this.soLuong = sl;
        String ma = raw.substring(0, 1);

        if (ma.equals("X"))
         {
            donGia = 128000;
            Thue = 0.03;
        } else if (ma.equals("D")) {
            donGia = 11200;
            Thue = 0.035;
        } else if (ma.equals("N")) {
            donGia = 9700;
            Thue = 0.02;
        }

        String code = raw.substring(3);

        if (code.equals("BP")) {
            hangSanXuat = "British Petro";
        } else if (code.equals("ES")) {
            hangSanXuat = "Esso";
        } else if (code.equals("SH")) {
            hangSanXuat = "Shell";
        } else if (code.equals("CA")) {
            hangSanXuat = "Castrol";
        } else if (code.equals("MO")) {
            hangSanXuat = "Mobil";
        } else if (code.equals("TN")) {
            hangSanXuat = "Trong Nuoc";
            Thue = 0;
        }

        ThueRiel = (long) (soLuong * donGia * Thue);
        Tong = (soLuong * donGia) + ThueRiel;
    }

    @Override 
    public String toString(){
        return maDonHang + " " + hangSanXuat + " " + donGia + " " + ThueRiel + " " + Tong;
    }
}

public class J05067 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        List<NL> arr = new ArrayList<>();
        int n = ip.nextInt();
        for (int i = 0; i < n; i++) {
            String raw = ip.next();
            int sl = Integer.parseInt(ip.next());
            arr.add(new NL(raw, sl));
        }

        for(NL nl : arr){
            System.out.println(nl);
        }

        ip.close();
    }
}
