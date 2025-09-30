from mobil import Mobil

class Luxury(Mobil):
    def __init__(self, nama, merk, mesin, seat, warna, tahun, harga, fiturTeknologi, fiturKenyamanan, materialInterior):
        super().__init__(nama, merk, mesin, seat, warna, tahun, harga)
        self.fiturTeknologi = fiturTeknologi
        self.fiturKenyamanan = fiturKenyamanan
        self.materialInterior = materialInterior

    def getFiturTeknologi(self):
        return self.fiturTeknologi

    def getFiturKenyamanan(self):
        return self.fiturKenyamanan

    def getMaterialInterior(self):
        return self.materialInterior

    def getFiturTeknologi(self):
        return self.fiturTeknologi

    def setFiturTeknologi(self, fiturTeknologi):
        self.fiturTeknologi = fiturTeknologi

    def setFiturKenyamanan(self, fiturKenyamanan):
        self.fiturKenyamanan = fiturKenyamanan

    def setMaterialInterior(self, materialInterior):
        self.materialInterior = materialInterior

    def tampilkan_info(self):
        """Method override untuk menampilkan informasi mobil luxury"""
        super().tampilkan_info()
        print(f"Fitur Teknologi : {self.fiturTeknologi}")
        print(f"Fitur Kenyamanan: {self.fiturKenyamanan}")
        print(f"Material Interior: {self.materialInterior}")