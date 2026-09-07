import java.util.*;

public class J02009 {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        List<List<Integer>> a = new ArrayList<>();
        
        for (int i = 0; i < n; i++) {
            int x = input.nextInt();
            int y = input.nextInt();
            
            a.add(Arrays.asList(x,y));

        }

        a.sort((o1,o2) -> o1.get(0) - o2.get(0));

        int res = 0;
        int start = 0;
        int end = 0;
        for(List<Integer> tmp : a){
            int s = tmp.get(0);
            int d = tmp.get(1);

            if(s > res){
                start = s;
                end = start + d;
                res = end;
            }else{
                start = end;
                end = start + d;
                res = end;
            }
        }
        System.out.println(res);
    }

}
