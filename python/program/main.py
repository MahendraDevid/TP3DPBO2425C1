from sport import Sport
from luxury import Luxury
from family import Family
from dealer import Dealer
from mesin import Mesin

def main():
    dealer = Dealer()
    mesin = Mesin()

    # Menampilkan dealer
    print("===========Informasi Dealer=============")
    print(f"NIB: {dealer.getNIB()}")
    print(f"Dealer: {dealer.getNama()}")
    print(f"Alamat: {dealer.getAlamat()}")
    print("========================================")
    print("Daftar Mobil di Dealer:")
    print("========================================")
    dealer.tampilkan_mobil()  # tampilkan mobil
    print()

    # Inisialisasi dealer
    dealer = Dealer("123456789", "AutoWorld", "Jl. Merdeka No. 1, Jakarta")

    # Membuat objek mobil sport
    mesin = Mesin("V8", "4.0", "8", "Bensin")
    sport1 = Sport("Mustang", "Ford", mesin, 4, "Merah", 2020, "1 Miliar", "450 HP", "250 km/h", True)
    dealer.tambahMobil(sport1)

    # Membuat objek mobil luxury
    mesin = Mesin("V6", "3.0", "6", "Bensin")
    luxury1 = Luxury("S-Class", "Mercedes", mesin, 5, "Hitam", 2021, "2 Miliar", "Adaptive Cruise Control", "Heated Seats", "Leather")
    dealer.tambahMobil(luxury1)

    # Membuat objek mobil family
    mesin = Mesin("I4", "2.0", "4", "Bensin")
    family1 = Family("Civic", "Honda", mesin, 5, "Putih", 2019, "500 Juta", "400 L", "Airbags, ABS", "Child Seat Anchors")
    dealer.tambahMobil(family1)

    # Menampilkan dealer
    print()
    print("===========Informasi Dealer=============")
    print(f"NIB: {dealer.getNIB()}")
    print(f"Dealer: {dealer.getNama()}")
    print(f"Alamat: {dealer.getAlamat()}")
    print("========================================")
    print("Daftar Mobil di Dealer:")
    print("========================================")
    dealer.tampilkan_mobil()  # tampilkan mobil

if __name__ == "__main__":
    main()