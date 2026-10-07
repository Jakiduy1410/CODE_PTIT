import java.util.*;

class Product {
    String code;
    double price, amount, finalPrice;

    Product(String code, double price, double amount) {
        this.code = code;
        this.price = price;
        this.amount = amount;
        
        double tax = 0, ship = 0;
        char first = code.charAt(0);
        char last = code.charAt(code.length() - 1);

        if (first == 'T') {
            tax = 0.29; ship = 0.04;
        } else if (first == 'C') {
            tax = 0.10; ship = 0.03;
        } else if (first == 'D') {
            tax = 0.08; ship = 0.025;
        } else if (first == 'M') {
            tax = 0.02; ship = 0.005;
        }

        if (last == 'C') tax *= 0.95;

        double totalCost = price + (price * tax) + (price * ship);
        this.finalPrice = totalCost * 1.2;
    }

    @Override
    public String toString() {
        return code + " " + String.format("%.2f", finalPrice);
    }
}

public class J05073 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Product> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            arr.add(new Product(sc.next(), sc.nextDouble(), sc.nextDouble()));
        }
        
        for (Product p : arr) {
            System.out.println(p);
        }
        sc.close();
    }
}