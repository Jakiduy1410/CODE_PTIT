import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths; // Sửa: Thêm import Paths để dùng ở dưới

public class HelloFile {
    public static void main(String[] args) throws Exception {
        // Sửa: Đổi Path.of() thành Paths.get() vì Java 8 không có hàm of()
        Path filePath = Paths.get("OOP/Hello.txt");

        // Sửa: Đổi Files.readString() thành hàm đọc byte rồi ép kiểu sang String
        String noiDung = new String(Files.readAllBytes(filePath));

        System.out.println(noiDung);
    }
}