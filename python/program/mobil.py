from mesin import Mesin

class Mobil:
    def __init__(self, nama, merk, mesin: Mesin, seat, warna, tahun, harga):
        self.nama = nama
        self.merk = merk
        self.mesin = mesin
        self.seat = seat
        self.warna = warna
        self.tahun = tahun
        self.harga = harga
    
    def getNama(self):
        return self.nama
    
    def getMerk(self):
        return self.merk
    
    def getMesin(self):
        return self.mesin

    def getSeat(self):
        return self.seat
    
    def getWarna(self):
        return self.warna
    
    def getTahun(self):
        return self.tahun
    
    def getHarga(self):
        return self.harga
    
    def setNama(self, nama):
        self.nama = nama
    
    def setMerk(self, merk):
        self.merk = merk

    def setMesin(self, mesin: Mesin):
        self.mesin = mesin

    def setSeat(self, seat):
        self.seat = seat

    def setWarna(self, warna):
        self.warna = warna

    def setTahun(self, tahun):
        self.tahun = tahun

    def setHarga(self, harga):
        self.harga = harga

    def tampilkan_info(self):
        """Method virtual untuk menampilkan informasi mobil"""
        print(f"Nama: {self.nama}")
        print(f"Merk: {self.merk}")
        print("Mesin:")
        print(f"  - Tipe       : {self.mesin.getTipe()}")
        print(f"  - Kapasitas  : {self.mesin.getKapasitas()} L")
        print(f"  - Silinder   : {self.mesin.getSilinder()}")
        print(f"  - Bahan Bakar: {self.mesin.getBahanBakar()}")
        print(f"Seat: {self.seat}")
        print(f"Warna: {self.warna}")
        print(f"Tahun: {self.tahun}")
        print(f"Harga: {self.harga}")
