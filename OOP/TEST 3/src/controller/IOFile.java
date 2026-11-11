package controller;

import java.io.*;
import java.util.ArrayList;
import java.util.List;

public class IOFile {
    @SuppressWarnings("unchecked")
    public static <T> List<T> doc(String fname) {
        List<T> list = new ArrayList<>();
        File f = new File(fname);
        if (!f.exists()) return list;
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream(f))) {
            list = (List<T>) ois.readObject();
        } catch (Exception e) {
        }
        return list;
    }

    public static <T> void viet(String fname, List<T> arr) {
        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream(fname))) {
            oos.writeObject(arr);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
