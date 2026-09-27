import java.util.ArrayList;
import java.util.Scanner;

public class b9 {
    static int n,k;
    static boolean[] visited = new boolean[101];
    String s = " ";
    static int[] a = new int[105];
    static ArrayList<String> res =  new ArrayList<>();


    static void Try(int i, int start){
        for(int j = start ; j <= n - k + i; j++){
            a[i] = j;
            if (i == k) {
                StringBuilder sb = new StringBuilder();
                for (int l = 1; l <= k; l++) {
                    sb.append(a[l]);
                }
                res.add(sb.toString().trim());
            }
            else{
                Try(i+1,j+1);
            }
        }
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        k = input.nextInt();
        Try(1,1);

        for(String s : res){
            System.out.print(s + " ");
        }
        System.out.println();
        System.out.println("Tong cong co " + res.size() + " to hop");
        input.close();
    }
}