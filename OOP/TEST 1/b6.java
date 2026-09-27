import java.util.*;

public class b6 {

    public static List<String> random(String s){
        List<String> res = new ArrayList<>();
        if (s.length() == 2) {
            if (s.charAt(0) == '?' && s.charAt(1) == '?') {
                for (int i = 10; i < 100; i++) {
                    String tmp = String.valueOf(i);
                    res.add(tmp);
                }
            }else if(s.charAt(0) == '?'){
                for (int i = 1; i < 10; i++) {
                    String tmp = String.valueOf(i);
                    tmp = tmp + s.charAt(1);
                    res.add(tmp);
                }
            }else if(s.charAt(1) == '?'){
                for (int i = 0; i < 10; i++) {
                    String tmp = String.valueOf(i);
                    tmp = s.charAt(0) + tmp;
                    res.add(tmp);
                }
            }else{
                res.add(s);
            }
        }else{
            
            if (s.equals("?")) { 
            
                res.addAll(Arrays.asList("+", "-", "*", "/")); 
            }else{
                res.add(s);
            }
        }

        return res;
    }
    

    public static boolean calc(int a, int b, int c, String op) {
        if (op.equals("+")) return a + b == c;
        if (op.equals("-")) return a - b == c;
        if (op.equals("*")) return a * b == c;
        if (op.equals("/")) return b != 0 && a % b == 0 && a / b == c;
        return false;
    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        
        int t = Integer.parseInt(input.nextLine()); 
        
        while (--t >= 0) {
            String s = input.nextLine();
            String[] arr = s.split(" ");


            List<String> a = random(arr[0]);
            List<String> op = random(arr[1]); 
            List<String> b = random(arr[2]); 
            List<String> c = random(arr[4]); 
            
            
            boolean found = false;
            outer: for (String x : a) {
                for (String y : b) {
                    for (String z : c) {
                        for (String o : op) {
                            if (calc(Integer.parseInt(x), Integer.parseInt(y), Integer.parseInt(z), o)) {
                                System.out.println(x + " " + o + " " + y + " = " + z);
                                found = true;
                                break outer; 
                            }
                        }
                    }
                }
            }
            if (!found) System.out.println("WRONG PROBLEM!");
        }
    }
}