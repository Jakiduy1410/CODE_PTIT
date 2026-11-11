package view;

import controller.*;
import model.*;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.util.*;
import java.util.List;

public class MainFrame extends JFrame {
    private static final String FILE_KH = "KH.TXT";
    private static final String FILE_MH = "MATHANG.TXT";
    private static final String FILE_HD = "HOADON.TXT";

    private List<KhachHang> listKH;
    private List<MatHang> listMH;
    private List<HoaDon> listHD;

    private DefaultTableModel modelKH, modelMH, modelHD, modelTK;

    private JTextField txtTenKH, txtDiaChiKH;
    private JComboBox<String> cbNhomKH;

    private JTextField txtTenMH, txtDonGiaMH;

    private JComboBox<KhachHang> cbKhachHang;
    private JComboBox<MatHang> cbMatHang;
    private JTextField txtSoLuong;
    private JComboBox<String> cbSapXep;

    public MainFrame() {
        setTitle("Chương Trình Quản Lý Bán Hàng");
        setSize(900, 600);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        loadData();

        JTabbedPane tabbedPane = new JTabbedPane();
        tabbedPane.addTab("1. Khách Hàng", createPanelKH());
        tabbedPane.addTab("2. Mặt Hàng", createPanelMH());
        tabbedPane.addTab("3 & 4. Hóa Đơn & Sắp Xếp", createPanelHD());
        tabbedPane.addTab("5. Bảng Kê Tính Tiền", createPanelTK());

        add(tabbedPane);
    }

    private void loadData() {
        listKH = IOFile.doc(FILE_KH);
        if (!listKH.isEmpty()) {
            KhachHang.setSma(listKH.get(listKH.size() - 1).getMaKH() + 1);
        }

        listMH = IOFile.doc(FILE_MH);
        if (!listMH.isEmpty()) {
            MatHang.setSma(listMH.get(listMH.size() - 1).getMaMH() + 1);
        }

        listHD = IOFile.doc(FILE_HD);
    }

    private JPanel createPanelKH() {
        JPanel panel = new JPanel(new BorderLayout(10, 10));

        modelKH = new DefaultTableModel(new String[]{"Mã KH", "Họ Tên", "Địa Chỉ", "Nhóm KH"}, 0);
        for (KhachHang kh : listKH) modelKH.addRow(kh.toObject());
        JTable table = new JTable(modelKH);
        panel.add(new JScrollPane(table), BorderLayout.CENTER);

        JPanel form = new JPanel(new GridLayout(4, 2, 10, 10));
        form.setBorder(BorderFactory.createTitledBorder("Nhập thông tin Khách Hàng"));

        txtTenKH = new JTextField();
        txtDiaChiKH = new JTextField();
        cbNhomKH = new JComboBox<>(new String[]{"Mua lẻ", "Mua buôn", "Mua qua mạng"});
        JButton btnThem = new JButton("Thêm Khách Hàng & Lưu File");

        form.add(new JLabel("Họ tên khách hàng:")); form.add(txtTenKH);
        form.add(new JLabel("Địa chỉ:")); form.add(txtDiaChiKH);
        form.add(new JLabel("Nhóm khách hàng:")); form.add(cbNhomKH);
        form.add(new JLabel("")); form.add(btnThem);

        panel.add(form, BorderLayout.SOUTH);

        btnThem.addActionListener(e -> {
            try {
                String ten = txtTenKH.getText().trim();
                String dc = txtDiaChiKH.getText().trim();
                if (ten.isEmpty() || dc.isEmpty()) {
                    throw new TrongException("Không được để trống Họ tên hoặc Địa chỉ!");
                }
                String nhom = cbNhomKH.getSelectedItem().toString();

                KhachHang kh = new KhachHang(ten, dc, nhom);
                listKH.add(kh);
                modelKH.addRow(kh.toObject());
                IOFile.viet(FILE_KH, listKH);

                cbKhachHang.addItem(kh);

                txtTenKH.setText("");
                txtDiaChiKH.setText("");
                JOptionPane.showMessageDialog(this, "Đã thêm và lưu vào KH.TXT!");
            } catch (TrongException ex) {
                JOptionPane.showMessageDialog(this, ex.getMessage(), "Lỗi nhập liệu", JOptionPane.ERROR_MESSAGE);
            }
        });

        return panel;
    }

    private JPanel createPanelMH() {
        JPanel panel = new JPanel(new BorderLayout(10, 10));

        modelMH = new DefaultTableModel(new String[]{"Mã Hàng", "Tên Hàng", "Đơn Giá"}, 0);
        for (MatHang mh : listMH) modelMH.addRow(mh.toObject());
        JTable table = new JTable(modelMH);
        panel.add(new JScrollPane(table), BorderLayout.CENTER);

        JPanel form = new JPanel(new GridLayout(3, 2, 10, 10));
        form.setBorder(BorderFactory.createTitledBorder("Nhập thông tin Mặt Hàng"));

        txtTenMH = new JTextField();
        txtDonGiaMH = new JTextField();
        JButton btnThem = new JButton("Thêm Mặt Hàng & Lưu File");

        form.add(new JLabel("Tên mặt hàng:")); form.add(txtTenMH);
        form.add(new JLabel("Đơn giá:")); form.add(txtDonGiaMH);
        form.add(new JLabel("")); form.add(btnThem);

        panel.add(form, BorderLayout.SOUTH);

        btnThem.addActionListener(e -> {
            try {
                String ten = txtTenMH.getText().trim();
                String giaStr = txtDonGiaMH.getText().trim();
                if (ten.isEmpty() || giaStr.isEmpty()) {
                    throw new TrongException("Không được để trống Tên hàng hoặc Đơn giá!");
                }
                double gia = Double.parseDouble(giaStr);
                if (gia <= 0) {
                    throw new SoDuongException("Đơn giá phải là số dương lớn hơn 0!");
                }

                MatHang mh = new MatHang(ten, gia);
                listMH.add(mh);
                modelMH.addRow(mh.toObject());
                IOFile.viet(FILE_MH, listMH);

                cbMatHang.addItem(mh);

                txtTenMH.setText("");
                txtDonGiaMH.setText("");
                JOptionPane.showMessageDialog(this, "Đã thêm và lưu vào MATHANG.TXT!");
            } catch (TrongException | SoDuongException ex) {
                JOptionPane.showMessageDialog(this, ex.getMessage(), "Lỗi nhập liệu", JOptionPane.ERROR_MESSAGE);
            } catch (NumberFormatException ex) {
                JOptionPane.showMessageDialog(this, "Đơn giá phải nhập đúng định dạng số!", "Lỗi định dạng", JOptionPane.ERROR_MESSAGE);
            }
        });

        return panel;
    }

    private JPanel createPanelHD() {
        JPanel panel = new JPanel(new BorderLayout(10, 10));

        modelHD = new DefaultTableModel(new String[]{"Mã KH", "Họ Tên KH", "Mã Hàng", "Tên Hàng", "Số Lượng", "Thành Tiền"}, 0);
        for (HoaDon hd : listHD) modelHD.addRow(hd.toObject());
        JTable table = new JTable(modelHD);
        panel.add(new JScrollPane(table), BorderLayout.CENTER);

        JPanel southPanel = new JPanel(new GridLayout(5, 2, 10, 10));
        southPanel.setBorder(BorderFactory.createTitledBorder("Lập Hóa Đơn & Sắp Xếp"));

        cbKhachHang = new JComboBox<>();
        for (KhachHang kh : listKH) cbKhachHang.addItem(kh);

        cbMatHang = new JComboBox<>();
        for (MatHang mh : listMH) cbMatHang.addItem(mh);

        txtSoLuong = new JTextField();
        JButton btnThemHD = new JButton("Thêm vào Hóa Đơn & Lưu HOADON.TXT");

        cbSapXep = new JComboBox<>(new String[]{
            "--- Chọn kiểu sắp xếp ---",
            "1. Theo Họ tên khách hàng (Thứ tự từ điển)",
            "2. Theo Số lượng mặt hàng (Giảm dần)"
        });

        southPanel.add(new JLabel("Chọn Khách Hàng:")); southPanel.add(cbKhachHang);
        southPanel.add(new JLabel("Chọn Mặt Hàng:")); southPanel.add(cbMatHang);
        southPanel.add(new JLabel("Số lượng mua:")); southPanel.add(txtSoLuong);
        southPanel.add(new JLabel("")); southPanel.add(btnThemHD);
        southPanel.add(new JLabel("Sắp xếp danh sách:")); southPanel.add(cbSapXep);

        panel.add(southPanel, BorderLayout.SOUTH);

        btnThemHD.addActionListener(e -> {
            try {
                KhachHang kh = (KhachHang) cbKhachHang.getSelectedItem();
                MatHang mh = (MatHang) cbMatHang.getSelectedItem();
                if (kh == null || mh == null) {
                    throw new TrongException("Vui lòng nhập Khách hàng và Mặt hàng trước!");
                }
                String slStr = txtSoLuong.getText().trim();
                if (slStr.isEmpty()) {
                    throw new TrongException("Vui lòng nhập số lượng mua!");
                }
                int sl = Integer.parseInt(slStr);
                if (sl <= 0) {
                    throw new SoDuongException("Số lượng mua phải lớn hơn 0!");
                }

                boolean daTonTai = false;
                for (HoaDon hd : listHD) {
                    if (hd.getKh().getMaKH() == kh.getMaKH() && hd.getMh().getMaMH() == mh.getMaMH()) {
                        hd.setSoLuong(hd.getSoLuong() + sl);
                        daTonTai = true;
                        break;
                    }
                }
                if (!daTonTai) {
                    listHD.add(new HoaDon(kh, mh, sl));
                }

                IOFile.viet(FILE_HD, listHD);
                capNhatBangHD();
                txtSoLuong.setText("");
                JOptionPane.showMessageDialog(this, "Đã lưu vào HOADON.TXT!");

            } catch (TrongException | SoDuongException ex) {
                JOptionPane.showMessageDialog(this, ex.getMessage(), "Lỗi nhập liệu", JOptionPane.ERROR_MESSAGE);
            } catch (NumberFormatException ex) {
                JOptionPane.showMessageDialog(this, "Số lượng phải là số nguyên!", "Lỗi định dạng", JOptionPane.ERROR_MESSAGE);
            }
        });

        cbSapXep.addActionListener(e -> {
            int idx = cbSapXep.getSelectedIndex();
            if (idx == 1) {
                listHD.sort((o1, o2) -> o1.getKh().getHoTen().compareToIgnoreCase(o2.getKh().getHoTen()));
                capNhatBangHD();
            } else if (idx == 2) {
                listHD.sort((o1, o2) -> Integer.compare(o2.getSoLuong(), o1.getSoLuong()));
                capNhatBangHD();
            }
        });

        return panel;
    }

    private void capNhatBangHD() {
        modelHD.setRowCount(0);
        for (HoaDon hd : listHD) {
            modelHD.addRow(hd.toObject());
        }
    }

    private JPanel createPanelTK() {
        JPanel panel = new JPanel(new BorderLayout(10, 10));

        modelTK = new DefaultTableModel(new String[]{"Mã KH", "Họ Tên Khách Hàng", "Nhóm KH", "Tổng Tiền Phải Trả (VNĐ)"}, 0);
        JTable table = new JTable(modelTK);
        panel.add(new JScrollPane(table), BorderLayout.CENTER);

        JButton btnThongKe = new JButton("Lập Bảng Kê / Làm Mới Tổng Tiền");
        panel.add(btnThongKe, BorderLayout.SOUTH);

        btnThongKe.addActionListener(e -> {
            modelTK.setRowCount(0);
            Map<Integer, Double> mapTongTien = new LinkedHashMap<>();
            Map<Integer, KhachHang> mapKH = new LinkedHashMap<>();

            for (HoaDon hd : listHD) {
                int maKH = hd.getKh().getMaKH();
                mapKH.put(maKH, hd.getKh());
                mapTongTien.put(maKH, mapTongTien.getOrDefault(maKH, 0.0) + hd.getThanhTien());
            }

            for (Integer maKH : mapTongTien.keySet()) {
                KhachHang kh = mapKH.get(maKH);
                double tong = mapTongTien.get(maKH);
                modelTK.addRow(new Object[]{
                    kh.getMaKH(),
                    kh.getHoTen(),
                    kh.getNhomKH(),
                    String.format("%,.0f VNĐ", tong)
                });
            }
        });

        return panel;
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            new MainFrame().setVisible(true);
        });
    }
}
