package model;

import java.io.Serializable;

public class MatHang implements Serializable {
    private int maMH;
    private String tenMH;
    private double donGia;
    private static int sma = 10000;

    public MatHang(String tenMH, double donGia) {
        this.maMH = sma++;
        this.tenMH = tenMH;
        this.donGia = donGia;
    }

    public int getMaMH() { return maMH; }
    public String getTenMH() { return tenMH; }
    public double getDonGia() { return donGia; }

    public static void setSma(int n) { sma = n; }

    public Object[] toObject() {
        return new Object[]{maMH, tenMH, String.format("%,.0f", donGia)};
    }

    @Override
    public String toString() {
        return maMH + " - " + tenMH;
    }
}
