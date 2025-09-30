#ifndef LUXURY_CPP
#define LUXURY_CPP

#include <bits/stdc++.h>
#include "mobil.cpp"
using namespace std;

class Luxury : public Mobil{
    private:
        string fiturTeknologi;
        string fiturKenyamanan;
        string materialInterior;
    public:
        Luxury() : Mobil(){
            fiturTeknologi = "";    
            fiturKenyamanan = "";
            materialInterior = "";
        }

        Luxury(string nama, string merk, Mesin mesin, int seat, string warna, int tahun, string harga, string fiturTeknologi, string fiturKenyamanan, string materialInterior) : Mobil(nama, merk, mesin, seat, warna, tahun, harga){
            this->fiturTeknologi = fiturTeknologi;
            this->fiturKenyamanan = fiturKenyamanan;
            this->materialInterior = materialInterior;
        }

        string getFiturTeknologi(){
            return fiturTeknologi;
        }  

        string getFiturKenyamanan(){
            return fiturKenyamanan;
        }

        string getMaterialInterior(){
            return materialInterior;
        }

        void setFiturTeknologi(string fiturTeknologi){
            this->fiturTeknologi = fiturTeknologi;
        }

        void setFiturKenyamanan(string fiturKenyamanan){
            this->fiturKenyamanan = fiturKenyamanan;
        }

        void setMaterialInterior(string materialInterior){
            this->materialInterior = materialInterior;
        }

        void tampilkanInfo() const override {
            Mobil::tampilkanInfo();
            cout << "Fitur Teknologi: " << fiturTeknologi << endl;
            cout << "Fitur Kenyamanan: " << fiturKenyamanan << endl;
            cout << "Material Interior: " << materialInterior << endl;
        }

        ~Luxury(){
            // Destructor
        }
};

#endif