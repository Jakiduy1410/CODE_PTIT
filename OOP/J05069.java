import java.util.*;

class CLB{
    String Ma, Name;
    int price;
    CLB(String Ma, String Name, int price){
        this.Ma = Ma;
        this.Name = Name;
        this.price = price;

    }
}

public class J05069{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = Integer.parseInt(input.nextLine());
        List<CLB> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String ma = input.nextLine();
            String name = input.nextLine();
            int gia = Integer.parseInt(input.nextLine());
            arr.add(new CLB(ma, name, gia));
        }

        int q = input.nextInt();
        for (int i = 0; i < q; i++) {
            String tmp = input.next();
            int num = input.nextInt();
            String code = tmp.substring(1,3);
            for (CLB c : arr) {
                if (c.Ma.equals(code)) {
                    System.out.println(tmp + " " + c.Name + " " + ((long) num * c.price));
                    break;
                }
            }
            //System.out.println(code);
        }
        input.close();
    }
}