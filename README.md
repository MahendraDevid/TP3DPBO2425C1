**Janji**
Saya Mahendra Devid Putra Anwar dengan NIM 2407792 mengerjakan Tugas Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

**Desain Diagram Program**
<img width="666" height="731" alt="image" src="https://github.com/user-attachments/assets/123be0c2-c7e8-4e08-b431-0fd3e7625094" />


**Penjelasan Atribut dan Method**
1. Class Dealer
  - Atribut
    1. NIB : Nomor Usaha Dealer
    2. Nama : Nama Dealer
    3. Lokasi : Lokasi Dealer
    4. List Mobil : Kumpulan Mobil yang dimiliki dealer
       
  - Method
    1. Constructor : Inisialisasi semua atribut yang ada di class
    2. Getter dan Setter : Menampilkan Dan Menambahkan Isi Atribut
    3. TambahMobil : Menambahkan mobil ke dalam listmobil
    4. TampilkanMobil : Menampilkan listmobil dari Class Mobil

2. Class Mobil
   - Atribut
     1. Nama : nama mobil
     2. Merk : Merk mobil
     3. Mesin : Mesin Mobil
     4. Seat : jumlah seat mobil
     5. Warna : warna mobil
     6. Tahun : Tahun produksi mobil
     7. Harga : Harga Mobil
        
   - Method
    1. Constructor : Inisialisasi semua atribut yang ada di class
    2. Getter dan Setter : Menampilkan Dan Menambahkan Isi Atribut
    3. TampilkanInfo : Menampilkan Info Mobil Tersebut dan Menggunakan Polymorphism yang menurunkan method ke anaknya

4. Class Mesin
   - Atribut
     1. Tipe = Tipe mesin
     2. Kapasitas = Kapasitas Mesin
     3. Silinder = Jumlah Silinder Mesin
     4. Bahan Bakar : bahan bakar mesin
        
   - Method
    1. Constructor : Inisialisasi semua atribut yang ada di class
    2. Getter dan Setter : Menampilkan Dan Menambahkan Isi Atribut
  
5. Class Sport
   - Atribut
     1. Horsepower = HorsePower Mobil
     2. TopSpeed = Topspeed mobil
     3. Turbo = Memiliki turbo/tidak
        
   - Method
    1. Constructor : Inisialisasi semua atribut yang ada di class
    2. Getter dan Setter : Menampilkan Dan Menambahkan Isi Atribut
    3. TampilkanInfo : Menampilkan Info Mobil Sport menggunak override

6. Class Luxury
   - Atribut
     1. Fiturteknologi : teknologi mobil
     2. Fiturkenyamanan : kenyamanan mobil
     3. materialInterior : Material mobil
        
   - Method
    1. Constructor : Inisialisasi semua atribut yang ada di class
    2. Getter dan Setter : Menampilkan Dan Menambahkan Isi Atribut
    3. TampilkanInfo : Menampilkan Info Mobil Sport menggunak override
  
7. Class Family
   - Atribut
     1. kapasitasBagasi : Bagasi mobil
     2. fiturKeselamatan : keselamatan mobil
     3. fiturKeluarga : Fitur keluarga mobil
        
   - Method
    1. Constructor : Inisialisasi semua atribut yang ada di class
    2. Getter dan Setter : Menampilkan Dan Menambahkan Isi Atribut
    3. TampilkanInfo : Menampilkan Info Mobil Sport menggunak override

**Penjelasan Desain Program**
1. Mesin dengan Mobil , Memiliki hubungan composition dikarenakan mobil memiliki mesin, yang dimana mobil dan mesin di produksi dengan 1 perusahaan yang sama dan jika mobil hancur maka mesin pun bisa rusak
2. Dealer dengan Mobil, Memiliki hubungan agregration karena Dealer bisa mempunyai banyak mobil dari berbagai macam merk, namun jika mobil itu sudah kebeli maka dealer akan tetap ada.
3. Sport, Family dan Luxury, Memiliki keturunan (hierarical) dengan mobil,yang dimana ke 3 class tersebut memiliki hal umum atau atribut umum yang dimiliki mobil, tapi ke class ini memiliki atribut khusus masing2

**Penjelasan Alur Program**
1.Menampilkan Terlebih dahulu dealer mobil
2.Jika Belum ada tambahkan dealer mobil

**Screenshoot Program**
<img width="398" height="585" alt="image" src="https://github.com/user-attachments/assets/1b5a4cc6-ac80-41a8-9c0f-abcd82f0d9dc" />
