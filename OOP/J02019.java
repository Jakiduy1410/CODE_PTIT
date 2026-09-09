
import java.util.*;

public class J02019{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();

        int[] arr = new int[b+1];
        for(int i = 1; i <= b / 2 ; i++){
            for(int j = i*2; j <= b ; j += i){
                arr[j] += i;
            }
        }

        int cnt = 0;
        for (int i = a; i < b+1; i++) {
            if (arr[i] > i) {
                cnt += 1;
            }
        }
        System.out.println(cnt);
        input.close();
    }
}