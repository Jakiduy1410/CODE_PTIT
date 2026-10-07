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

public class J05071 {
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
                        System.out.println(tmp + " " + ct.name + " " + phut + " " + (phut * ct.price));
                    }
                }
            }else{
                long phutKM = (long) Math.ceil((double) phut / 3);
                System.out.println(tmp + " " + "Noi mang " + phutKM + " " + ((800* phutKM)));
            }
        }

        sc.close();
    }
}
