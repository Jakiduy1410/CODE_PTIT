import java.util.*;

public class J01014 {
    
    // Khai báo mảng 1 tỷ phần tử (tốn ~8GB RAM) JVM sẽ báo lỗi OutOfMemoryError (Memory Limit Exceeded) ngay. Bibi comment/xóa dòng này nha.
    // public static long[] bigPrimes = new long[1000000001]; 

    // Hàm sàng này không thể chạy tới 10^9 đâu. Tui comment lại nhé.
    /*
    public static void sieve() {
        for (int i = 0; i <= 1000000001; i++) {
            bigPrimes[i] = i;
        }

        for (int i = 2; i * i <= 1000000001; i++) {
            if (bigPrimes[i] == i) {
                for (int j = i * i; j <= 1000000001; j += i) {
                    bigPrimes[j] = i;
                }
            }
        }
    }
    */

    // Bài này N lên tới 10^10, ông chỉ cần viết hàm phân tích thừa số nguyên tố trực tiếp (giống bài trước nhưng chỉ giữ lại số lớn nhất) là qua.
    public static long calcMaxPrime(long n) {
        long max = 0;
        for (long i = 2; i * i <= n; i++) {
            while (n % i == 0) {
                max = i;
                n /= i;
            }
        }
        if (n > 1) max = n;
        return max;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        // sieve(); // Bỏ gọi sàng đi ông

        int t = input.nextInt();
        while (--t >= 0) {
            long n = input.nextLong();
            // System.out.println(bigPrimes[n]); // Biến long không làm index mảng được (vượt quá giới hạn int), gọi hàm thay thế nhé:
            System.out.println(calcMaxPrime(n));
        }

        input.close();

    }
}