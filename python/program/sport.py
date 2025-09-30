from mobil import Mobil

class Sport(Mobil):
    def __init__(self, nama, merk, mesin, seat, warna, tahun, harga, horsepower, topspeed, turbo):
        super().__init__(nama, merk, mesin, seat, warna, tahun, harga)
        self.horsepower = horsepower
        self.topspeed = topspeed
        self.turbo = turbo

    def getHorsepower(self):
        return self.horsepower
    
    def getTopSpeed(self):
        return self.topspeed

    def getTurbo(self):
        return self.turbo
    
    def setHorsepower(self, horsepower):
        self.horsepower = horsepower
    
    def setTopSpeed(self, topspeed):
        self.topspeed = topspeed
    
    def setTurbo(self, turbo):
        self.turbo = turbo

    def tampilkan_info(self):
        """Method override untuk menampilkan informasi mobil sport"""
        super().tampilkan_info()
        print(f"Horsepower: {self.horsepower} HP")
        print(f"Top Speed : {self.topspeed} km/h")
        print(f"Turbo     : {'Ya' if self.turbo else 'Tidak'}")
