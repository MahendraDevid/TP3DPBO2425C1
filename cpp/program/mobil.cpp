#ifndef MOBIL_CPP
#define MOBIL_CPP

#include <bits/stdc++.h>
using namespace std;

#include "mesin.cpp"

class Mobil{
    private:
        string nama;
        string merk;
        Mesin mesin;
        int seat;
        string warna;
        int tahun;
        string harga;
    public:
        Mobil(){
            nama = "";
            merk = "";
            seat = 0;
            warna = "";
            tahun = 0;
            harga = "";
        }

        Mobil(string nama, string merk, Mesin mesin, int seat, string warna, int tahun, string harga){
            this->nama = nama;
            this->merk = merk;
            this->mesin = mesin;
            this->seat = seat;
            this->warna = warna;
            this->tahun = tahun;
            this->harga = harga;
        }

        string getNama(){
            return nama;
        }

        string getMerk(){
            return merk;
        }

        Mesin getMesin(){
            return mesin;
        }

        int getSeat(){
            return seat;
        }

        string getWarna(){
            return warna;
        }

        int getTahun(){
            return tahun;
        }

        string getHarga(){
            return harga;
        }

        void setNama(string nama){
            this->nama = nama;
        }

        void setMerk(string merk){
            this->merk = merk;
        }

        void setSeat(int seat){
            this->seat = seat;
        }

        void setWarna(string warna){
            this->warna = warna;
        }

        void setTahun(int tahun){
            this->tahun = tahun;
        }

        void setHarga(string harga){
            this->harga = harga;
        }

        virtual void tampilkanInfo() const {
            cout << "Nama: " << nama << endl;
            cout << "Merk: " << merk << endl;
            cout << "Mesin:" << endl;
            cout << "  - Tipe       : " << mesin.getTipe() << endl;
            cout << "  - Kapasitas  : " << mesin.getKapasitas() << " L" << endl;
            cout << "  - Silinder   : " << mesin.getSilinder() << endl;
            cout << "  - Bahan Bakar: " << mesin.getBahanBakar() << endl;
            cout << "Seat: " << seat << endl;
            cout << "Warna: " << warna << endl;
            cout << "Tahun: " << tahun << endl;
            cout << "Harga: " << harga << endl;
        }

        virtual ~Mobil() {}

};  

#endif