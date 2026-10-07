import java.util.*;
import java.time.LocalTime;
import java.time.temporal.ChronoUnit;

class City{
    int code, price;
    String name;
    City(int code, int price, String name){
        this.code = code;
        this.price = price;
        this.name = name;
    }

}

class Phone implements Comparable<Phone>{
    String code, name;
    
    long phut, price;
    Phone(String code, String name, long phut, long price){
        this.code = code;
        this.name = name;
        this.phut = phut;
        this.price = price;
    }

    @Override 
    public int compareTo(Phone other){
        return Long.compare(other.price, this.price);
    }

    public String toString(){
        return this.code + " " + this.name + " " + this.phut + " " + this.price;
    }
}

public class J05072 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<City> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int code = Integer.parseInt(sc.next());
            sc.nextLine();
            String name = sc.nextLine();
            int price = Integer.parseInt(sc.next());
            arr.add(new City(code, price, name));
        }

        List<Phone> res = new ArrayList<>();
        int q = Integer.parseInt(sc.next());
        for (int i = 0; i < q; i++) {
            String tmp = sc.next();
            String start = sc.next();
            String end = sc.next();

            LocalTime s =  LocalTime.parse(start);
            LocalTime e = LocalTime.parse(end);
            long phut = ChronoUnit.MINUTES.between(s, e);

            if (tmp.charAt(0) == '0') {
                int c = Integer.parseInt(tmp.substring(1,3));
                for(City ct : arr){
                    if (ct.code == c) {
                        res.add(new Phone(tmp, ct.name, phut, (phut*ct.price)));
                        break;
                    }
                }
            }else{
                long phutKM = (long) Math.ceil((double) phut / 3);
                res.add(new Phone(tmp, "Noi mang", phutKM, (phutKM * 800)));
                
            }
        }

        Collections.sort(res);
        for(Phone p : res){
            System.out.println(p);
        }


        sc.close();
    }
}
