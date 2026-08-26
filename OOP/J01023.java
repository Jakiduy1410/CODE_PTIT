import java.util.*;

public class J01023 {

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
            // SỬA LỖI: So sánh chuỗi trong Java phải dùng .equals(), không dùng ==
            if (s.equals("?")) { 
                // SỬA LỖI: Khai báo mảng kiểu ["+",...] không hợp lệ trong Java
                res.addAll(Arrays.asList("+", "-", "*", "/")); 
            }else{
                res.add(s);
            }
        }

        return res;
    }
    
    // THÊM MỚI: Hàm calc kiểm tra phép tính
    public static boolean calc(int a, int b, int c, String op) {
        if (op.equals("+")) return a + b == c;
        if (op.equals("-")) return a - b == c;
        if (op.equals("*")) return a * b == c;
        if (op.equals("/")) return b != 0 && a % b == 0 && a / b == c;
        return false;
    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // SỬA LỖI: Dùng nextLine() ép kiểu luôn để tránh bị trôi lệnh do nextInt()
        int t = Integer.parseInt(input.nextLine()); 
        
        while (--t >= 0) {
            String s = input.nextLine();
            String[] arr = s.split(" ");

            // SỬA LỖI: Truy cập đúng index của phương trình (VD: 22 + 2? = 48)
            List<String> a = random(arr[0]);
            List<String> op = random(arr[1]); 
            List<String> b = random(arr[2]); 
            // arr[3] là dấu "=" nên bỏ qua
            List<String> c = random(arr[4]); 
            
            // THÊM MỚI: Logic duyệt kết quả và in WRONG PROBLEM!
            boolean found = false;
            outer: for (String x : a) {
                for (String y : b) {
                    for (String z : c) {
                        for (String o : op) {
                            if (calc(Integer.parseInt(x), Integer.parseInt(y), Integer.parseInt(z), o)) {
                                System.out.println(x + " " + o + " " + y + " = " + z);
                                found = true;
                                break outer; // Tìm được là chốt luôn, thoát vòng lặp
                            }
                        }
                    }
                }
            }
            if (!found) System.out.println("WRONG PROBLEM!");
        }
    }
}