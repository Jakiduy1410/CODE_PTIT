class BankSystem{
    public String name = new String();
    public int id = 0;
    public int balance = 0;

    public BankSystem(String name, int id, int balance) {
        this.name = name;
        this.id = id;
        this.balance = balance;
    }

    public void deposit(int a) {
        balance += a;
    }

    public void withdraw(int a){
        if (a <= balance) {
            balance -= a;
            System.out.println("Rut thanh cong " + a);
        }else{
            System.out.println("So du khong du");
            
        }
    }

    public void transfer(BankSystem target, int a){
        if (this.balance >= a) {
            this.balance -= a;
            target.balance += a;
            System.out.println("Hoan thanh chuyen " + a + " toi tai khoan" + target.name);
        }else{
            System.out.println("So du khong du");
        }
    }

    public void display() {
        System.out.println("Name: " + name + " | ID: " + id + " | Balance: " + balance);
    }
}

public class BankAccount{
    public static void main(String[] args) {
        BankSystem acc1 = new BankSystem("Alice", 101, 10000);
        BankSystem acc2 = new BankSystem("Bob", 102, 10000);

        acc1.deposit(200);
        acc1.withdraw(2000);
        acc1.transfer(acc2, 1500);

        acc1.display();
        acc2.display();

        acc1.withdraw(90000);
        acc1.display();
    }
}