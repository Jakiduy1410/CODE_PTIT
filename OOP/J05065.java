// *****************************************************************
// J05065 - Liet Ke Nhan Vien Theo Nhom
// De bai: Quan ly nhan vien: gioi han chuc vu GD, TP, PP; sap xep theo bac luong giam dan roi so hieu tang dan; loc theo chuc vu
// *****************************************************************
import java.util.*;

class NV implements Comparable<NV>{
    String ten, chucvu, bacluong, sohieu;
    int sh, bl;

    NV(String ma, String ten, int dem[]){
        this.ten = ten;

        String chucvu = ma.substring(0,2);
        if(chucvu.equals("GD")){
            if (dem[0] < 1) {
                chucvu = "GD";
                dem[0]++;
            }else{
                chucvu = "NV";
            }
        }else if (chucvu.equals("TP")) {
            if (dem[1] < 3) {
                chucvu = "TP";
                dem[1]++;
            }else{
                chucvu = "NV";
            }
        }
        else if (chucvu.equals("PP")) {
            if (dem[2] < 3) {
                chucvu = "PP";
                dem[2]++;
            }else{
                chucvu = "NV";
            }
        }

        this.chucvu = chucvu;

        this.bacluong = ma.substring(2,4);
        this.sohieu = ma.substring(4,7);

        this.sh = Integer.parseInt(sohieu);
        this.bl = Integer.parseInt(bacluong);
    }


    @Override 
    public int compareTo(NV other){
        if (this.bl != other.bl) {
            return  other.bl - this.bl;
        }
        return this.sh - other.sh;
    }

    public String toString(){
        return ten + " " + chucvu + " " + sohieu + " " + bacluong;
    }
}

public class J05065{


    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();

        int[] dem = new int[3];
        List<NV> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String ma = input.next();
            String name = input.nextLine().trim();
            arr.add(new NV(ma, name, dem));
        }

        Collections.sort(arr);

        int q = Integer.parseInt(input.nextLine());
        for (int i = 0; i < q; i++) {
            String tmp = input.nextLine();
            for (NV nv : arr) {
                if (nv.chucvu.equals(tmp)) {
                    System.out.println(nv);
                }
            }
            System.out.println();
        }

        input.close();
    }
}