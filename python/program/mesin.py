class Mesin:
    def __init__(self, tipe="", kapasitas="", silinder="", bahanBakar=""):
        self.tipe = tipe
        self.kapasitas = kapasitas
        self.silinder = silinder
        self.bahanBakar = bahanBakar
    
    def getTipe(self):
        return self.tipe 
    
    def getKapasitas(self):
        return self.kapasitas
    
    def getSilinder(self):
        return self.silinder
    
    def getBahanBakar(self):
        return self.bahanBakar
    
    def setTipe(self, tipe):
        self.tipe = tipe

    def setKapasitas(self, kapasitas):
        self.kapasitas = kapasitas
    
    def setSilinder(self, silinder):
        self.silinder = silinder

    def setBahanBakar(self, bahanBakar):
        self.bahanBakar = bahanBakar
