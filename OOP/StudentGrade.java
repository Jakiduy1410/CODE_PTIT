class StudenSystem {
    String name;
    int[] grades;
    boolean flag;

    public StudenSystem(String name, int[] grades) {
        this.name = name;
        this.grades = grades;
    }

    public void checkPoint(){
        for( int x : grades){
            if (x < 0) {
                flag = false;
                return;
            }
        }
        flag = true;
    }

    public double getAvg() {
        int sum = 0;
        for (int g : grades) sum += g;
        return (double) sum / grades.length;
    }

    public boolean isPass() {
        return getAvg() >= 50;
    }

    public int getHighest() {
        int max = grades[0];
        for (int g : grades) {
            if (g > max) max = g;
        }
        return max;
    }

    public void displayReport() {
        checkPoint();
        if (flag) {
            
            System.out.println("Name: " + name);
            System.out.println("Avg Score: " + getAvg());
            System.out.println("Result: " + (isPass() ? "Pass" : "Not Pass"));
            System.out.println("Best Score: " + getHighest());
        }else{
            System.out.println("So diem phai lon hon 0 vui long nhap lai");
        }
    }
}

public class StudentGrade {
    public static void main(String[] args) {
        int[] grades = {40, 55, 85, 90, 45};
        StudenSystem student1 = new StudenSystem("Duy", grades);
        student1.displayReport();

        int[] grades_1 = {-90, 95, 85, 90, 195};
        StudenSystem student2 = new StudenSystem("Duy_1", grades_1);
        student2.displayReport();
    }
}