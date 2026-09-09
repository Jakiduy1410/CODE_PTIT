import java.util.*;

public class J02022 {
    static int n;
    static boolean[] visited = new boolean[11];
    static List<Integer> curr = new ArrayList<>();

    static void Try(int i) {
        for (int j = 1; j <= n; j++) {
            if (!visited[j]) {
                if (curr.size() >= 1 && Math.abs(curr.get(curr.size() - 1) - j) == 1) {
                    continue;
                }
                visited[j] = true;
                curr.add(j);

                if (curr.size() == n) {
                    for (int x : curr) {
                        System.out.print(x);
                    }
                    System.out.println();

                } else {

                    Try(i + 1);
                }

                visited[j] = false;
                curr.remove(curr.size() - 1);
            }
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (--t >= 0) {
            n = input.nextInt();
            Arrays.fill(visited, false);
            Try(0);
            System.out.println();
        }
        input.close();
    }
}
