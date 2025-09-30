#ifndef SPORT_CPP
#define SPORT_CPP

#include <bits/stdc++.h>
#include "mobil.cpp"
using namespace std;

class Sport : public Mobil{
    private:
        string horsepower;
        string topspeed;
        bool turbo;
    public:
        Sport() : Mobil(){
            horsepower = "";
            topspeed = "";
            turbo = false;
        }

        Sport(string nama, string merk, Mesin mesin, int seat, string warna, int tahun, string harga, string horsepower, string topspeed, bool turbo) : Mobil(nama, merk, mesin, seat, warna, tahun, harga){
            this->horsepower = horsepower;
            this->topspeed = topspeed;
            this->turbo = turbo;
        }

        string getHorsepower(){
            return horsepower;
        }

        string getTopspeed(){
            return topspeed;
        }

        bool getTurbo(){
            return turbo;
        }

        void setHorsepower(string horsepower){
            this->horsepower = horsepower;
        }

        void setTopspeed(string topspeed){
            this->topspeed = topspeed;
        }

        void setTurbo(bool turbo){
            this->turbo = turbo;
        }
        
            void tampilkanInfo() const override {
                Mobil::tampilkanInfo();
                cout << "Horsepower: " << horsepower << endl;
                cout << "Top Speed: " << topspeed << endl;
                cout << "Turbo: " << (turbo ? "Yes" : "No") << endl;
            }
        
        ~Sport(){
            // Destructor
        }
};

#endif