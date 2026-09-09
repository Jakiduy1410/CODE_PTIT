import java.util.*;

public class J02017{

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();

        Stack<Integer> st = new Stack<>();
        for (int i = 0; i < n; i++) {
            int x = input.nextInt();
            if (!st.isEmpty()) {
                int top = st.peek();
                if ((top + x) % 2 == 0) {
                    st.pop();
                }else{
                    st.push(x);
                }
            }else{
                st.push(x);
            }
        }

        System.out.println(st.size());
    }
}