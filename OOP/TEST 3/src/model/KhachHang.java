package model;

import java.io.Serializable;

public class KhachHang implements Serializable {
    private int maKH;
    private String hoTen, diaChi, nhomKH;
    private static int sma = 10000;

    public KhachHang(String hoTen, String diaChi, String nhomKH) {
        this.maKH = sma++;
        this.hoTen = hoTen;
        this.diaChi = diaChi;
        this.nhomKH = nhomKH;
    }

    public int getMaKH() { return maKH; }
    public String getHoTen() { return hoTen; }
    public String getDiaChi() { return diaChi; }
    public String getNhomKH() { return nhomKH; }

    public static void setSma(int n) { sma = n; }

    public Object[] toObject() {
        return new Object[]{maKH, hoTen, diaChi, nhomKH};
    }

    @Override
    public String toString() {
        return maKH + " - " + hoTen;
    }
}
