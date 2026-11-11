import java.util.*;

class HS implements Comparable<HS>{
    String msv,name,lop;
    double a,b,c;

    HS(String msv, String name, String lop, Double a, Double b, Double c){
        this.msv = msv;
        this.name = name;
        this.lop = lop;
        this.a = a;
        this.b = b;
        this.c = c;
    }

    @Override 
    public int compareTo(HS other){
        return this.name.compareTo(other.name);
    }

    public String toString(){
        return msv + " " + name + " " + lop + " " + a + " " + b + " " + c ;
    }
}


public class J05031 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int n = Integer.parseInt(input.nextLine());
        List<HS> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String msv = input.nextLine();
            String name = input.nextLine();
            String lop = input.nextLine();
            double a = Double.parseDouble(input.nextLine());
            double b = Double.parseDouble(input.nextLine());
            double c = Double.parseDouble(input.nextLine());

            arr.add(new HS(msv, name, lop, a,b , c));
        }

        Collections.sort(arr);

        int cnt = 1;
        for(HS h : arr){
            System.out.println(cnt + " " + h);
            cnt++;
        }

        input.close();
    }
}