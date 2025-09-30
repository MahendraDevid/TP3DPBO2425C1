#ifndef FAMILY_CPP
#define FAMILY_CPP

#include <bits/stdc++.h>
#include "mobil.cpp"
using namespace std;

class Family : public Mobil{
    private:
        string kapasitasBagasi;
        string fiturKeselamatan;
        string fiturKeluarga;
    public:
        Family() : Mobil(){
            kapasitasBagasi = "";
            fiturKeselamatan = "";
            fiturKeluarga = "";
        }
        
        Family(string nama, string merk, Mesin mesin, int seat, string warna, int tahun, string harga, string kapasitasBagasi, string fiturKeselamatan, string fiturKeluarga) : Mobil(nama, merk, mesin, seat, warna, tahun, harga){
            this->kapasitasBagasi = kapasitasBagasi;
            this->fiturKeselamatan = fiturKeselamatan;
            this->fiturKeluarga = fiturKeluarga;
        }

        string getKapasitasBagasi(){
            return kapasitasBagasi;
        }

        string getFiturKeselamatan(){
            return fiturKeselamatan;
        }

        string getFiturKeluarga(){
            return fiturKeluarga;
        }

        void setKapasitasBagasi(string kapasitasBagasi){
            this->kapasitasBagasi = kapasitasBagasi;
        }

        void setFiturKeselamatan(string fiturKeselamatan){
            this->fiturKeselamatan = fiturKeselamatan;
        }

        void setFiturKeluarga(string fiturKeluarga){
            this->fiturKeluarga = fiturKeluarga;
        }

        void tampilkanInfo() const override {
            Mobil::tampilkanInfo();
            cout << "Kapasitas Bagasi: " << kapasitasBagasi << endl;
            cout << "Fitur Keselamatan: " << fiturKeselamatan << endl;
            cout << "Fitur Keluarga: " << fiturKeluarga << endl;
        }

        ~Family(){
            // Destructor
        }
};

#endif