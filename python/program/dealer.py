from mobil import Mobil

class Dealer:
    def __init__(self, NIB="", nama="", alamat="", listMobil=None):
        self.NIB = NIB
        self.nama = nama
        self.alamat = alamat
        if listMobil is None:
            self.listMobil = []
        else:
            self.listMobil = listMobil

    def getNIB(self):
        return self.NIB

    def getNama(self):
        return self.nama

    def getAlamat(self):
        return self.alamat

    def getListMobil(self):
        return self.listMobil

    def setNIB(self, NIB):
        self.NIB = NIB

    def setNama(self, nama):
        self.nama = nama

    def setAlamat(self, alamat):
        self.alamat = alamat

    def setListMobil(self, listMobil):
        self.listMobil = listMobil

    def tambahMobil(self, mobil: Mobil):
        self.listMobil.append(mobil)

    def tampilkan_mobil(self):
        if not self.listMobil:  # atau: if len(self.listMobil) == 0:
            print("Tidak ada mobil di dealer.")
            return
        
        for mobil in self.listMobil:
            mobil.tampilkan_info()
            print("-----------------------------")