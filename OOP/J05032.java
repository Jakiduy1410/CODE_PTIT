import java.util.*;
import java.time.chrono.*;
import java.time.format.DateTimeFormatter;
import java.time.*;

class Age implements Comparable<Age>{
    String name,date;
    LocalDate birth;

    DateTimeFormatter f = DateTimeFormatter.ofPattern("dd/MM/yyyy");

    Age(String name, String date){
        this.name = name;
        this.date = date;
        this.birth = LocalDate.parse(date, f);
    }

    @Override 

    public int compareTo(Age other){
        return this.birth.compareTo(other.birth);
    }

    public String toString(){
        return name + " " + date;
    }


}

public class J05032 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int n = Integer.parseInt(input.nextLine());
        List<Age> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String name = input.next();
            String date = input.next();

            arr.add(new Age(name,date));
        }
        Collections.sort(arr);

        System.out.println(arr.get(arr.size() - 1).name); 
        System.out.println(arr.get(0).name);              
        input.close();
    }
}