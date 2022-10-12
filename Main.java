import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        //penggunaan if else
        int nilai;
        String grade;
        System.out.println("Masukkan nilai : ");
        nilai = input.nextInt();

        if (nilai >= 90) {
            grade = "A";
        } else if (nilai >= 70) {
            grade = "B";
        } else if (nilai >= 50) {
            grade = "C";
        } else if (nilai >= 40) {
            grade = "D";
        } else {
            grade = "E";
        }
        System.out.println("nilai" + nilai);
        System.out.println("dengan grade" + grade);
        //penggunaan for dan array1D
        String angka[] = new String[3];
        for (int i = 0; i < angka.length; i++) {
            System.out.print("Masukkan nilai siswa ke -" + (i + 1) + " : ");
            angka[i] = input.next();
        }
        for (int i = 0; i < angka.length; i++)
            System.out.println("Nilai siswa urutan ke" + (i + 1) + ":" + angka[i]);
        //penggunaan while
        int i = 1;
        while (i <= 5) {
            System.out.println("angka" + i);
            i++;
        }
        //array 2D
        String array[][] = new String[2][2];
        for (int x = 0; x < 2; x++) {
            for (int y = 0; y < 2; y++) {
                System.out.println("[" + x + "]" + "[" + y + "]=");
                array[x][y] = input.next();
            }
        }
                for (int x = 0; x < 2; x++) {
                    for (int y = 0; y < 2; y++) {
                        System.out.println(" " + array[x][y]);
            }
        }
    }
}