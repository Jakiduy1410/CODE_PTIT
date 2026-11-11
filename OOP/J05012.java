import java.util.*;

class MH implements Comparable<MH>{
    String ma, name;
    long sl, dg, ck, res;

    MH(String ma, String name, long sl, long dg, long ck){
        this.ma = ma;
        this.name = name;
        this.sl = sl;
        this.dg = dg;
        this.ck = ck;
        this.res = (sl * dg) - ck;
    }

    @Override 
    public int compareTo(MH other){
        return Long.compare(other.res, this.res);
    }

    public String toString(){
        return ma + " " + name + " " + sl + " " + dg + " " + ck + " " + res;
    }
}


public class J05012 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        List<MH> arr = new ArrayList<>();
        int n = Integer.parseInt(input.nextLine());
        for (int i = 0; i < n; i++) {
            String ma = input.nextLine();
            String name = input.nextLine();
            long sl = Long.parseLong(input.nextLine());
            long dg = Long.parseLong(input.nextLine());
            long ck = Long.parseLong(input.nextLine());
            arr.add(new MH(ma, name, sl, dg, ck));
        }

        Collections.sort(arr);
        for(MH mh : arr){
            System.out.println(mh);
        }

        input.close();
    }
}