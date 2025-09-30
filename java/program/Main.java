public class Main {
    public static void main(String[] args) {
        Dealer dealer;
        Mesin mesin;

        // Inisialisasi dealer kosong
        dealer = new Dealer();

        // Menampilkan dealer
        System.out.println("===========Informasi Dealer=============");
        System.out.println("NIB: " + dealer.getNIB());
        System.out.println("Dealer: " + dealer.getNama());
        System.out.println("Alamat: " + dealer.getAlamat());
        System.out.println("========================================");
        System.out.println("Daftar Mobil di Dealer:");
        System.out.println("========================================");
        dealer.tampilkanMobil(); // tampilkan mobil
        System.out.println();

        // Inisialisasi dealer dengan data
        dealer = new Dealer("123456789", "AutoWorld", "Jl. Merdeka No. 1, Jakarta");

        // Membuat objek mobil sport
        mesin = new Mesin("V8", "4.0", "8", "Bensin");
        Sport sport1 = new Sport("Mustang", "Ford", mesin, 4, "Merah", 2020, "1 Miliar", "450 HP", "250 km/h", true);
        dealer.tambahMobil(sport1);

        // Membuat objek mobil luxury
        mesin = new Mesin("V6", "3.0", "6", "Bensin");
        Luxury luxury1 = new Luxury("S-Class", "Mercedes", mesin, 5, "Hitam", 2021, "2 Miliar", "Adaptive Cruise Control", "Heated Seats", "Leather");
        dealer.tambahMobil(luxury1);

        // Membuat objek mobil family
        mesin = new Mesin("I4", "2.0", "4", "Bensin");
        Family family1 = new Family("Civic", "Honda", mesin, 5, "Putih", 2019, "500 Juta", "400 L", "Airbags, ABS", "Child Seat Anchors");
        dealer.tambahMobil(family1);

        // Menampilkan dealer
        System.out.println();
        System.out.println("===========Informasi Dealer=============");
        System.out.println("NIB: " + dealer.getNIB());
        System.out.println("Dealer: " + dealer.getNama());
        System.out.println("Alamat: " + dealer.getAlamat());
        System.out.println("========================================");
        System.out.println("Daftar Mobil di Dealer:");
        System.out.println("========================================");
        dealer.tampilkanMobil(); // tampilkan mobil
    }
}