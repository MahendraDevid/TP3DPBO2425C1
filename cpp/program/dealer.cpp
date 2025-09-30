#ifndef DEALER_CPP
#define DEALER_CPP

#include <bits/stdc++.h>
#include "mobil.cpp"
using namespace std;

class Dealer{
    string nib;
    string nama;
    string alamat;
    vector<class Mobil*> listMobil;

    public:
        Dealer(){
            nib = "";
            nama = "";
            alamat = "";
        }

        Dealer(string nib, string nama, string alamat){
            this->nib = nib;
            this->nama = nama;
            this->alamat = alamat;
        }

        string getNIB(){
            return nib;
        }

        string getNama(){
            return nama;
        }

        string getAlamat(){
            return alamat;
        }

        void setNIB(string nib){
            this->nib = nib;
        }

        void setNama(string nama){
            this->nama = nama;
        }

        void setAlamat(string alamat){
            this->alamat = alamat;
        }

        void tambahMobil(Mobil* mobil){
            listMobil.push_back(mobil);
        }

        void tampilkanMobil() const {
            if(listMobil.empty()){
                cout << "Tidak ada mobil di dealer." << endl;
                return;
            }
            for(const auto& mobil : listMobil){
                mobil->tampilkanInfo();
                cout << "----------------------------------------" << endl;
            }
        }

        ~Dealer(){
            // Destructor
        }
};

#endif