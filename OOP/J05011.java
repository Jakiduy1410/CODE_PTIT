import java.util.*;

import java.time.LocalTime;
import java.time.temporal.*;

class Time implements Comparable<Time>{
    String name, ma;
    int gio, phut;

    Time(String ma, String name, int gio, int phut){
        this.ma = ma;
        this.name = name;
        this.gio = gio;
        this.phut = phut;
    }

    @Override 
    public int compareTo(Time other){
        if (other.gio != this.gio) {
            return Integer.compare(other.gio, this.gio);
        }
        return Integer.compare(other.phut, this.phut);
    }

    public String toString(){
        return ma + " " + name + " " + gio + " gio " + phut + " phut";
    }
}

public class J05011 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        List<Time> arr = new ArrayList<>();

        int n = Integer.parseInt(input.nextLine());
        for (int i = 0; i < n; i++) {
            String ma = input.nextLine();
            String name = input.nextLine();
            String s = input.nextLine();
            String e = input.nextLine();

            LocalTime vao = LocalTime.parse(s);
            LocalTime ra = LocalTime.parse(e);

            long diff = ChronoUnit.MINUTES.between(vao, ra);
            int gio = (int) diff / 60;
            int phut = (int) diff % 60;

            arr.add(new Time(ma, name, gio, phut));
        }

        Collections.sort(arr);
        for(Time t : arr){
            System.out.println(t);
        }
        input.close();
    }
}