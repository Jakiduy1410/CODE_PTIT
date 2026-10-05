import java.io.FileNotFoundException;
import java.util.*;
import java.io.File;

class MH implements Comparable<MH>{
    String ma, name, ht;
    MH(String ma, String name, String ht){
        this.ma = ma;
        this.name = name;
        this.ht = ht;
    }

    @Override 
    public int compareTo(MH other){
        return this.ma.compareTo(other.ma);
    }

    public String toString(){
        return this.ma + " " + this.name + " " + this.ht;
    }
}

public class b2 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner input = new Scanner(new File("MONHOC.in"));
        List<MH> arr = new ArrayList<>();
        int n = input.nextInt();
        input.nextLine();
        for (int i = 0; i < n; i++) {
            String ma = input.nextLine();
            String name = input.nextLine();
            String ht = input.nextLine();
            arr.add(new MH(ma, name, ht));
        }


        Collections.sort(arr);
        for(MH mh : arr){
            System.out.println(mh);
        }

        input.close();
    }
}