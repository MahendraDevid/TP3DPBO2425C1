#ifndef MESIN_CPP
#define MESIN_CPP

#include <bits/stdc++.h>
using namespace std;

class Mesin{
    private:
        string tipe;
        string kapasitas;
        string silinder;
        string bahanBakar;
    public:
        Mesin(){
            tipe = "";
            kapasitas = "";
            silinder = "";
            bahanBakar = "";
        }

        Mesin(string tipe, string kapasitas, string silinder, string bahanBakar){
            this->tipe = tipe;
            this->kapasitas = kapasitas;
            this->silinder = silinder;
            this->bahanBakar = bahanBakar;
        }

        string getTipe() const{
            return tipe;
        }

        string getKapasitas() const{
            return kapasitas;
        }

        string getSilinder() const{
            return silinder;
        }

        string getBahanBakar() const{
            return bahanBakar;
        }

        void setTipe(string tipe){
            this->tipe = tipe;
        }

        void setKapasitas(string kapasitas){
            this->kapasitas = kapasitas;
        }

        void setSilinder(string silinder){
            this->silinder = silinder;
        }

        void setBahanBakar(string bahanBakar){
            this->bahanBakar = bahanBakar;
        }

        ~Mesin(){
            // Destructor
        }
};

#endif