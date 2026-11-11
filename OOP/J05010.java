import java.util.*;

class MH implements Comparable<MH>{
    String name, loai;
    double mua,ban,res;
    int ms;

    public static int cnt = 1;
    
    MH(String name, String loai, double mua, double ban){
        this.name = name;
        this.loai = loai;
        this.mua = mua;
        this.ban = ban;
        this.res = ban - mua;
        this.ms = cnt++;
    }

    @Override 
    public int compareTo(MH other){
        return Double.compare(other.res, this.res);
    }

    public String toString(){
        return ms + " " + name + " " + loai + " " + String.format("%.2f", res); 
    }
}

public class J05010 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        List<MH> arr = new ArrayList<>();

        int n = Integer.parseInt(input.nextLine());
        for (int i = 0; i < n; i++) {
            String name = input.nextLine();
            String loai = input.nextLine();
            double mua = Double.parseDouble(input.nextLine());
            double ban = Double.parseDouble(input.nextLine());
            arr.add(new MH(name, loai, mua, ban));
        }

        Collections.sort(arr);

        for(MH mh : arr){
            System.out.println(mh);
        }
        input.close();
    }
}