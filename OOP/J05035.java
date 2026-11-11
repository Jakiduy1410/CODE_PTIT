import java.util.*;

class HS implements Comparable<HS>{
    String msv,name,lop,email,dv;
    int stt;
    public static int cnt = 1;

    HS(String msv, String name, String lop, String email, String dv){
        this.stt = cnt;
        cnt++;
        this.msv = msv;
        this.name = name;
        this.lop = lop;
        this.email = email;
        this.dv = dv;
    }

    @Override 
    public int compareTo(HS other){
        return this.msv.compareTo(other.msv);
    }

    public String toString(){
        return stt + " " + msv + " " + name + " " + lop + " " + email + " " + dv;
    }
}

public class J05035 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int n = Integer.parseInt(input.nextLine());
        List<HS> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String msv = input.nextLine();
            String name = input.nextLine();
            String lop = input.nextLine();
            String email = input.nextLine();
            String dv = input.nextLine();

            arr.add(new HS(msv, name, lop, email, dv));
        }

        Collections.sort(arr);

        int q = Integer.parseInt(input.nextLine());
        for (int i = 0; i < q; i++) {
            String tmp = input.nextLine();
            for(HS hs : arr){
                if (hs.dv.equals(tmp)) {
                    System.out.println(hs);
                }
            }
        }
        input.close();
    }
}