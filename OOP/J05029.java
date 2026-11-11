import java.util.*;

class CT implements Comparable<CT>{
    String ma, name;
    int sl;
    CT(String ma, String name, int sl){
        this.ma = ma;
        this.name = name;
        this.sl = sl;
    }

    @Override 
    public int compareTo(CT other){
        if (other.sl != this.sl) {
            return Integer.compare(other.sl, this.sl);
        }else return this.ma.compareTo(other.ma);

    }

    public String toString(){
        return ma + " " + name + " " + sl;
    }
}

public class J05029 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int n = Integer.parseInt(input.nextLine());
        List<CT> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String ma = input.nextLine();
            String name = input.nextLine();
            int sl = Integer.parseInt(input.nextLine());

            arr.add(new CT(ma, name, sl));
        }

        Collections.sort(arr);

        int q = Integer.parseInt(input.nextLine());
        for (int i = 0; i < q; i++) {
            int a = input.nextInt();
            int b = input.nextInt();
            System.out.println("DANH SACH DOANH NGHIEP NHAN TU " + a + " DEN " + b + " SINH VIEN:");
            for(CT c : arr){
                if (c.sl >= a && c.sl <= b) {
                    System.out.println(c);
                }
            }
        }

        input.close();
    }
}