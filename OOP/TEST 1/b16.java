import java.util.Arrays;
import java.util.Scanner;

public class b16 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while (input.hasNextLine()) {
            String line = input.nextLine();
            line = line.toLowerCase();
            String[] word = line.split("\\s+");
            int last = word.length - 1;
            if (word[word.length - 1].matches("^[.?!]$")) {
                if (last > 0) {
                    word[last - 1] += word[last];
                    word = Arrays.copyOf(word, last);
                }
            } else if (!word[word.length - 1].matches(".*[.?!]$")) {
                word[last] += ".";
            }
            word[0] = Character.toUpperCase(word[0].charAt(0)) + word[0].substring(1);
            for (String x : word) {
                System.out.print(x + " ");
            }
            System.out.println();
            

        }

        input.close();
    }
}