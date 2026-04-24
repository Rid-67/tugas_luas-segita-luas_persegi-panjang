import java.util.Scanner;

public class HitungLuas {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("1. Segitiga\n2. Persegi Panjang\nPilih: ");
        int pilihan = input.nextInt();

        if (pilihan == 1) {
            System.out.print("Alas: "); double a = input.nextDouble();
            System.out.print("Tinggi: "); double t = input.nextDouble();
            System.out.println("Luas: " + (0.5 * a * t));
        } else if (pilihan == 2) {
            System.out.print("Panjang: "); double p = input.nextDouble();
            System.out.print("Lebar: "); double l = input.nextDouble();
            System.out.println("Luas: " + (p * l));
        }
    }
}
