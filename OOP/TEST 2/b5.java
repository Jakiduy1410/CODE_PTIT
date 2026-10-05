import java.util.*;

class WordSet{
    String line;

    private TreeSet<String> st;

    WordSet(String line){
        st = new TreeSet<>();
        String[] words = line.trim().toLowerCase().split("\\s+");
        for(String word : words){
            st.add(word);
        }
    }

    public String union(WordSet other){
        TreeSet<String> res = new TreeSet<>(this.st);
        res.addAll(other.st);
        return String.join(" ", res) + "\n";
    }

    public String intersection(WordSet other){
        TreeSet<String> res = new TreeSet<>(this.st);
        res.retainAll(other.st);
        return String.join(" ", res) + "\n";
    }
}

public class b5 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        WordSet s1 = new WordSet(in.nextLine());
        WordSet s2 = new WordSet(in.nextLine());
        System.out.print(s1.union(s2));
        System.out.print(s1.intersection(s2));
    }
}