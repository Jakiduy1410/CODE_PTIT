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

class Matches implements Comparable<Matches>{
    String id, name;
    long price;
    Matches(String id, String name, long price){
        this.id = id;
        this.name = name;
        this.price = price;
    }

    @Override 
    public int compareTo(Matches other){
        if (other.price != this.price) {
            return Long.compare(other.price, this.price);
        }
        return this.name.compareTo(other.name);
    }
}

public class J05070{
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

        List<Matches> res = new ArrayList<>();

        int q = input.nextInt();
        for (int i = 0; i < q; i++) {
            String tmp = input.next();
            int num = input.nextInt();
            String code = tmp.substring(1,3);
            for (CLB c : arr) {
                if (c.Ma.equals(code)) {
                    res.add(new Matches(tmp, c.Name, (long) num * c.price));
                    break;
                }
            }
            //System.out.println(code);
        }
        Collections.sort(res);
        for(Matches m : res){
            System.out.println(m.id + " " + m.name + " " + m.price);
        }
        input.close();
    }
}