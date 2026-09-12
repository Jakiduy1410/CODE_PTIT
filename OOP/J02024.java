import java.util.*;

public class J02024 {
    static int n;
    static Integer[] a = new Integer[101];
    static List<Integer> curr = new ArrayList<>();
    static List<List<Integer>> res = new ArrayList<>();

    static void Try(int i) {
        for (int j = i; j < n; j++) {
            curr.add(a[j]);

            int sum = 0;
            for (int val : curr) {
                sum += val;
            }

            if (sum % 2 == 1) {
                res.add(new ArrayList<>(curr));
            }

            Try(j + 1);
            curr.remove(curr.size() - 1);
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t-- > 0) {
            n = input.nextInt();
            for (int i = 0; i < n; i++) {
                a[i] = input.nextInt();
            }
            Arrays.sort(a, 0, n, Collections.reverseOrder());
            res.clear();
            curr.clear();
            Try(0);

            res.sort((o1, o2) -> {
                int len = Math.min(o1.size(), o2.size());
                for (int i = 0; i < len; i++) {
                    if (!o1.get(i).equals(o2.get(i))) {
                        return o1.get(i) - o2.get(i);
                    }
                }
                return o1.size() - o2.size();
            });

            for (List<Integer> list : res) {
                for (int i = 0; i < list.size(); i++) {
                    System.out.print(list.get(i) + (i == list.size() - 1 ? "" : " "));
                }
                System.out.println();
            }
        }
    }
}