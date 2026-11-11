import java.util.*;
import java.text.DateFormat;
import java.time.*;
import java.time.chrono.*;
import java.time.format.DateTimeFormatter;
import java.time.format.DateTimeFormatterBuilder;
import java.time.temporal.ChronoUnit;

class Room implements Comparable<Room>{
    String name, ma, room; // SỬA: Lưu lại room để in ra màn hình (ví dụ 106, 207)
    char floor;
    long total;
    int bonus, gia;
    long days;
    public static int cnt = 1;
    // SỬA GÂY RTE: Pattern "d/M/yyyy" đôi khi lỗi với 05/06/2010 tùy version/locale, dùng builder hoặc format chuẩn:
    static DateTimeFormatter f = DateTimeFormatter.ofPattern("[d][dd]/[M][MM]/yyyy");

    Room(String name, String room, String s, String e, int bonus){
        this.name = name.trim();
        this.ma = "KH" + String.format("%02d", cnt++);
        this.room = room.trim(); // SỬA: Lưu mã phòng đã trim
        this.floor = this.room.charAt(0);
        this.gia = find();

        // SỬA GÂY RTE: trim() tuyệt đối trước khi parse ngày
        LocalDate start = LocalDate.parse(s.trim(), f);
        LocalDate end = LocalDate.parse(e.trim(), f);
        this.days = ChronoUnit.DAYS.between(start, end) + 1;

        this.bonus = bonus;
        this.total = (days * gia) + bonus;
    }

    public int find(){
        if (floor == '1') {
            return 25;
        } else if (floor == '2') return 34;
        else if (floor == '3') return 50;
        else return 80;
    }

    @Override
    public int compareTo(Room o) {
        return Long.compare(o.total, this.total);
    }

    @Override
    public String toString() {
        // SỬA: Đề in 'room' (vd: 106) chứ không chỉ in 'floor' ('1')
        return ma + " " + name + " " + room + " " + days + " " + total;
    }
}

public class J05016 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        // SỬA GÂY RTE: Check hasNextLine phòng trường hợp file input rỗng
        if (!input.hasNextLine()) return;
        int n = Integer.parseInt(input.nextLine().trim());

        List<Room> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String name = input.nextLine();
            String room = input.nextLine();
            String s = input.nextLine();
            String e = input.nextLine();
            int bonus = Integer.parseInt(input.nextLine().trim());

            arr.add(new Room(name, room, s, e, bonus));
        }

        Collections.sort(arr);
        for (Room r : arr) {
            System.out.println(r);
        }

        input.close();
    }
}