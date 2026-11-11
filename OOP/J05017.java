import java.util.*;

class Bill implements Comparable<Bill>{
    String name;
    Double bonus;
    long total,res,price;
    String ms;
    public static int cnt = 1;

    Bill(String name, long total){
        this.name = name;
        this.ms = "KH" + String.format("%02d", cnt++);
        this.total = total;
        this.bonus = calc();
        this.price = update();
        this.res = Math.round(price * (1.0 + bonus));
    }

    public double calc(){
        if (total <= 50) {
            return 0.02;
        }else if(total <= 100){
            return 0.03;
        }else{
            return 0.05;
        }
    }

    public long update(){
        if (total <= 50) {
            return total * 100;
        }else if(total <= 100){
            return 50 * 100 + (total - 50) * 150;
        }else{
            return 50 * 100 + (50) * 150 + (total - 100) * 200;
        }
    }

    @Override 
    public int compareTo(Bill other){
        return Long.compare(other.res, this.res);
    }

    public String toString(){
        return ms + " " + name + " " + res;
    }
}

public class J05017 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = Integer.parseInt(input.nextLine());
        List<Bill> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String name = input.nextLine();
            long start = Long.parseLong(input.nextLine());
            long end = Long.parseLong(input.nextLine());
            long total = end - start;

            arr.add(new Bill(name,total));
        }

        Collections.sort(arr);
        for(Bill b : arr){
            System.out.println(b);
        }
        input.close();
    }
}