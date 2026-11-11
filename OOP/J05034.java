import java.util.*;

class HS implements Comparable<HS>{
    String msv,name,lop,mail,dvi;
    int stt;
    public static int cnt = 1;
    HS(String msv,String name, String lop, String mail, String dvi){
        this.stt = cnt;
        cnt ++;
        this.msv = msv;
        this.name = name;
        this.lop = lop;
        this.mail = mail;
        this.dvi = dvi;
    }

    @Override 
    public int compareTo(HS other){
        return this.name.compareTo(other.name);
    }

    public String toString(){
        return stt + " " + msv + " " + name + " " + lop + " " + mail + " " + dvi;
    }
}

public class J05034 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int n = Integer.parseInt(input.nextLine());
        List<HS> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String msv = input.nextLine();
            String name = input.nextLine();
            String lop = input.nextLine();
            String mail = input.nextLine();
            String dvi = input.nextLine();

            arr.add(new HS(msv, name, lop, mail, dvi));
        }

        Collections.sort(arr);

        int q = Integer.parseInt(input.nextLine());
        for (int i = 0; i < q; i++) {
            String target = input.nextLine();

            for(HS h : arr){
                if (h.dvi.equals(target)) {
                    System.out.println(h);
                }
            }
        }
        input.close();
    }
}