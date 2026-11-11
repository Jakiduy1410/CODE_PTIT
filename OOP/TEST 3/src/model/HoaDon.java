package model;

import java.io.Serializable;

public class HoaDon implements Serializable {
    private KhachHang kh;
    private MatHang mh;
    private int soLuong;

    public HoaDon(KhachHang kh, MatHang mh, int soLuong) {
        this.kh = kh;
        this.mh = mh;
        this.soLuong = soLuong;
    }

    public KhachHang getKh() { return kh; }
    public MatHang getMh() { return mh; }
    public int getSoLuong() { return soLuong; }
    public void setSoLuong(int soLuong) { this.soLuong = soLuong; }

    public double getThanhTien() {
        return soLuong * mh.getDonGia();
    }

    public Object[] toObject() {
        return new Object[]{
            kh.getMaKH(), kh.getHoTen(),
            mh.getMaMH(), mh.getTenMH(),
            soLuong, String.format("%,.0f", getThanhTien())
        };
    }
}
