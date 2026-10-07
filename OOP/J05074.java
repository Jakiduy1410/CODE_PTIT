import java.util.*;

class HS {
    String msv, lop, name, dkien;
    int score;

    HS(String msv, String name, String lop) {
        this.msv = msv;
        this.name = name;
        this.lop = lop;
        this.dkien = "";
    }

    void Update(String data) {
        int p = 10;
        for (int i = 0; i < data.length(); i++) {
            if (data.charAt(i) == 'v') {
                p -= 2;
            } else if (data.charAt(i) == 'm') {
                p -= 1;
            }
        }

        if (p <= 0) {
            this.score = 0;
            this.dkien = "KDDK";
        } else {
            this.score = p;
        }
    }

    public String toString() {
        if (dkien.isEmpty()) {
            return msv + " " + name + " " + lop + " " + score;
        }
        return msv + " " + name + " " + lop + " " + score + " " + dkien;
    }
}

public class J05074 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine().trim());

        List<HS> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String msv = sc.nextLine().trim();
            String name = sc.nextLine().trim();
            String lop = sc.nextLine().trim();
            arr.add(new HS(msv, name, lop));
        }

        for (int i = 0; i < n; i++) {
            String msv = sc.next();
            String state = sc.next();
            for (HS h : arr) {
                if (h.msv.equals(msv)) {
                    h.Update(state);
                    break;
                }
            }
        }
        
        for (HS h : arr) {
            System.out.println(h);
        }
        
        sc.close();
    }
}