from mobil import Mobil

class Family(Mobil):
    def __init__(self, nama, merk, mesin, seat, warna, tahun, harga, kapasitasBagasi, fiturKeamanan, fiturKeluarga):
        super().__init__(nama, merk, mesin, seat, warna, tahun, harga)
        self.kapasitasBagasi = kapasitasBagasi
        self.fiturKeamanan = fiturKeamanan
        self.fiturKeluarga = fiturKeluarga

    def getKapasitasBagasi(self):
        return self.kapasitasBagasi

    def getFiturKeamanan(self):
        return self.fiturKeamanan
    
    def getFiturKeluarga(self):
        return self.fiturKeluarga
    
    def setKapasitasBagasi(self, kapasitasBagasi):
        self.kapasitasBagasi = kapasitasBagasi

    def setFiturKeamanan(self, fiturKeamanan):
        self.fiturKeamanan = fiturKeamanan
    
    def setFiturKeluarga(self, fiturKeluarga):
        self.fiturKeluarga = fiturKeluarga

    def tampilkan_info(self):
        """Method override untuk menampilkan informasi mobil family"""
        super().tampilkan_info()
        print(f"Kapasitas Bagasi: {self.kapasitasBagasi} liter")
        print(f"Fitur Keamanan  : {self.fiturKeamanan}")
        print(f"Fitur Keluarga  : {self.fiturKeluarga}")