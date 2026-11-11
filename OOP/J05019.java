import java.util.*;
import java.time.*;
import java.time.chrono.*;
import java.time.format.DateTimeFormatter;
import java.time.temporal.ChronoUnit;


class KV{
    String ma, name;
    long totalmin;
    double rain;
    public static int cnt = 1;

    KV(String name){
        this.name = name;
        this.ma = "T" + String.format("%02d", cnt++);
        this.totalmin = 0;
        this.rain = 0.0;
    }

    public void update(long phut, int mua){
        totalmin += phut;
        rain += mua;
    }

    public Double trungBinh(){
        return (rain / totalmin) * 60;
    }

    public String toString(){
        return ma + " " + name + " " + String.format( "%.2f",trungBinh());
    }
}

public class J05019 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = Integer.parseInt(input.nextLine());

        Map<String, KV> mp = new LinkedHashMap<>();

        DateTimeFormatter f = DateTimeFormatter.ofPattern("HH:mm");

        for (int i = 0; i < n; i++) {
            String name = input.nextLine();
            String start = input.nextLine();
            String end = input.nextLine();
            int rain = Integer.parseInt(input.nextLine());

            LocalTime s = LocalTime.parse(start, f);
            LocalTime e = LocalTime.parse(end, f);
            long min = ChronoUnit.MINUTES.between(s, e);

            mp.putIfAbsent(name, new KV(name));
            mp.get(name).update(min, rain);

        }

        for(KV k : mp.values()){
            System.out.println(k);
        }
        input.close();
    }
}