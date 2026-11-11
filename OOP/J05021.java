import java.util.*;

class HS implements Comparable<HS> {
    String msv, name, lop, email;

    HS(String msv, String name, String lop, String email) {
        this.msv = msv;
        this.name = name;
        this.lop = lop;
        this.email = email;
    }

    @Override
    public int compareTo(HS other) {
        // if(!this.lop.equals(other.lop)) {
        // return this.lop.compareTo(other.lop);
        // }
        return this.msv.compareTo(other.msv);
    }

    public String toString() {
        return msv + " " + name + " " + lop + " " + email;
    }
}

public class J05021 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        List<HS> arr = new ArrayList<>();

        while (input.hasNextLine()) {

            String msv = input.nextLine();
            String name = input.nextLine();
            String lop = input.nextLine();
            String email = input.nextLine();
            arr.add(new HS(msv, name, lop, email));

        }

        Collections.sort(arr);

        for (HS hs : arr) {
            System.out.println(hs);
        }

        input.close();
    }
}