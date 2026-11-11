import java.util.*;

class Time implements Comparable<Time>{
    int a,b,c;

    Time(int a, int b, int c){
        this.a = a;
        this.b = b;
        this.c = c;
    }

    @Override 
    public int compareTo(Time other){
        if (this.a != other.a) {
            return this.a - other.a;
        } else {
            if (this.b != other.b) {
                return this.b - other.b;
            } else {
                return this.c - other.c;
            }
        }
    }

    public String toString(){
        return a + " " + b + " " + c;
    }
}

public class J05033 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int n = Integer.parseInt(input.nextLine());
        List<Time> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            int a = input.nextInt();
            int b = input.nextInt();
            int c = input.nextInt();

            arr.add(new Time(a, b, c));
        }

        Collections.sort(arr);

        for(Time t : arr){
            System.out.println(t);
        }
        input.close();
    }
}