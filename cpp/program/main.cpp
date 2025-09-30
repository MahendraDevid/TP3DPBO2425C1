#include <bits/stdc++.h>
#include "sport.cpp"
#include "luxury.cpp"
#include "family.cpp"
#include "dealer.cpp"

using namespace std;

int main() {
    Dealer dealer;
    Mesin mesin;

    //menampikan dealer
    cout << "===========Informasi Dealer=============" << endl;
    cout << "NIB: " << dealer.getNIB() << endl;
    cout << "Dealer: " << dealer.getNama() << endl;
    cout << "Alamat: " << dealer.getAlamat() << endl;
    cout << "========================================" << endl;
    cout << "Daftar Mobil di Dealer:" << endl;
    cout << "========================================" << endl;
    dealer.tampilkanMobil();//tampilkan mobil
    cout << endl;

    // Inisialisasi dealer
    dealer = Dealer("123456789", "AutoWorld", "Jl. Merdeka No. 1, Jakarta");

    // Membuat objek mobil sport
    mesin = Mesin("V8", "4.0", "8", "Bensin");
    Sport* sport1 = new Sport("Mustang", "Ford", mesin, 4, "Merah", 2020, "1 Miliar", "450 HP", "250 km/h", true);
    dealer.tambahMobil(sport1);

    // Membuat objek mobil luxury
    mesin = Mesin("V6", "3.0", "6", "Bensin");
    Luxury* luxury1 = new Luxury("S-Class", "Mercedes", mesin, 5, "Hitam", 2021, "2 Miliar", "Adaptive Cruise Control", "Heated Seats", "Leather");
    dealer.tambahMobil(luxury1);

    // Membuat objek mobil family
    mesin = Mesin("I4", "2.0", "4", "Bensin");
    Family* family1 = new Family("Civic", "Honda", mesin, 5, "Putih", 2019, "500 Juta", "400 L", "Airbags, ABS", "Child Seat Anchors");
    dealer.tambahMobil(family1);

    //menampikan dealer
    cout << endl;
    cout << "===========Informasi Dealer=============" << endl; 
    cout << "NIB: " << dealer.getNIB() << endl;
    cout << "Dealer: " << dealer.getNama() << endl;
    cout << "Alamat: " << dealer.getAlamat() << endl;
    cout << "========================================" << endl;
    cout << "Daftar Mobil di Dealer:" << endl;
    cout << "========================================" << endl;
    dealer.tampilkanMobil();//tampilkan mobil

    // //Input mobil
    // int n;
    // cout << "Masukkan jumlah mobil yang ingin ditambahkan: ";
    // cin >> n;
    // cin.ignore(); // Membersihkan newline dari buffer

    // for(int i = 0; i < n; i++){
    //     string type;
    //     cout << "Masukkan tipe mobil (sport/luxury/family): ";
    //     getline(cin, type);

    //     string nama, merk, tipeMesin, kapasitasMesin, silinderMesin, bahanBakarMesin, warna, harga;
    //     int seat, tahun;

    //     cout << "Masukkan nama: ";
    //     getline(cin, nama);
    //     cout << "Masukkan merk: ";
    //     getline(cin, merk);
    //     cout << "Masukkan tipe mesin: ";
    //     getline(cin, tipeMesin);
    //     cout << "Masukkan kapasitas mesin (dalam liter): ";
    //     getline(cin, kapasitasMesin);
    //     cout << "Masukkan jumlah silinder: ";
    //     getline(cin, silinderMesin);
    //     cout << "Masukkan jenis bahan bakar: ";
    //     getline(cin, bahanBakarMesin);
    //     cout << "Masukkan jumlah seat: ";
    //     cin >> seat;
    //     cin.ignore();
    //     cout << "Masukkan warna: ";
    //     getline(cin, warna);
    //     cout << "Masukkan tahun: ";
    //     cin >> tahun;
    //     cin.ignore();
    //     cout << "Masukkan harga: ";
    //     getline(cin, harga);

    //     mesin = Mesin(tipeMesin, kapasitasMesin, silinderMesin, bahanBakarMesin);

    //     if(type == "sport"){
    //         string horsepower, topspeed;
    //         bool turbo;
    //         cout << "Masukkan horsepower: ";
    //         getline(cin, horsepower);
    //         cout << "Masukkan topspeed: ";
    //         getline(cin, topspeed);
    //         cout << "Apakah memiliki turbo (1 untuk ya, 0 untuk tidak): ";
    //         cin >> turbo;
    //         cin.ignore();

    //         Sport* sport = new Sport(nama, merk, mesin, seat, warna, tahun, harga, horsepower, topspeed, turbo);
    //         dealer.tambahMobil(sport);
    //     } else if(type == "luxury"){
    //         string fiturTeknologi, fiturKenyamanan, materialInterior;
    //         cout << "Masukkan fitur teknologi: ";
    //         getline(cin, fiturTeknologi);
    //         cout << "Masukkan fitur kenyamanan: ";
    //         getline(cin, fiturKenyamanan);
    //         cout << "Masukkan material interior: ";
    //         getline(cin, materialInterior);

    //         Luxury* luxury = new Luxury(nama, merk, mesin, seat, warna, tahun, harga, fiturTeknologi, fiturKenyamanan, materialInterior);
    //         dealer.tambahMobil(luxury);
    //     } else if(type == "family"){
    //         string kapasitasBagasi, fiturKeselamatan, fiturKeluarga;
    //         cout << "Masukkan kapasitas bagasi (dalam liter): ";
    //         getline(cin, kapasitasBagasi);
    //         cout << "Masukkan fitur keselamatan: ";
    //         getline(cin, fiturKeselamatan);
    //         cout << "Masukkan fitur keluarga: ";
    //         getline(cin, fiturKeluarga);

    //         Family* family = new Family(nama, merk, mesin, seat, warna, tahun, harga, kapasitasBagasi, fiturKeselamatan, fiturKeluarga);
    //         dealer.tambahMobil(family); 
    //     }

    //     cout << "Mobil berhasil ditambahkan!" << endl;

    // }


}