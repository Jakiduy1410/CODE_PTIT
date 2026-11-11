import java.util.*;
import java.time.*;
import java.time.format.*;;

class Bike implements Comparable<Bike>{
    
    public static DateTimeFormatter f = DateTimeFormatter.ofPattern("H:m");
    public static LocalTime start = LocalTime.parse("6:00", f);
    LocalTime end;
    String name, tp, ma = "";
    int s;

    Bike(String name, String tp, String time){
        this.name = name;
        this.tp = tp;

        List<String> combo = new  ArrayList<>();
        combo.addAll(Arrays.asList(tp.split("\\s+")));
        combo.addAll(Arrays.asList(name.split("\\s+")));
        
        for(String x : combo){
            this.ma += x.charAt(0);
        }

        this.end = LocalTime.parse(time, f);

        Duration d = Duration.between(start, end);

        long minutes = d.toMinutes();

        this.s =(int) Math.round((120.0 / minutes) * 60);

    }

    @Override 

    public int compareTo(Bike other){
        return this.end.compareTo(other.end);
    }

    public String toString(){
        return ma + " " + name + " " + tp + " " + s + " Km/h";
    }
}

public class J05015 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = Integer.parseInt(input.nextLine());

        List<Bike> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String name = input.nextLine().trim();
            String ma = input.nextLine().trim();
            String time = input.nextLine();

            arr.add(new Bike(name, ma, time));
        }

        Collections.sort(arr);

        for(Bike b : arr){
            System.out.println(b);
        }
        input.close();
    }
}