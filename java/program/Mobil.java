class Mobil {
    private String nama;
    private String merk;
    private Mesin mesin;
    private int seat;
    private String warna;
    private int tahun;
    private String harga;

    public Mobil() {
        this.nama = "";
        this.merk = "";
        this.mesin = new Mesin();
        this.seat = 0;
        this.warna = "";
        this.tahun = 0;
        this.harga = "";
    }

    public Mobil(String nama, String merk, Mesin mesin, int seat, String warna, int tahun, String harga) {
        this.nama = nama;
        this.merk = merk;
        this.mesin = mesin;
        this.seat = seat;
        this.warna = warna;
        this.tahun = tahun;
        this.harga = harga;
    }

    public String getNama() {
        return nama;
    }

    public String getMerk() {
        return merk;
    }

    public Mesin getMesin() {
        return mesin;
    }

    public int getSeat() {
        return seat;
    }

    public String getWarna() {
        return warna;
    }

    public int getTahun() {
        return tahun;
    }

    public String getHarga() {
        return harga;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setMerk(String merk) {
        this.merk = merk;
    }

    public void setMesin(Mesin mesin) {
        this.mesin = mesin;
    }

    public void setSeat(int seat) {
        this.seat = seat;
    }

    public void setWarna(String warna) {
        this.warna = warna;
    }

    public void setTahun(int tahun) {
        this.tahun = tahun;
    }

    public void setHarga(String harga) {
        this.harga = harga;
    }

    public void tampilkanInfo() {
        System.out.println("Nama: " + nama);
        System.out.println("Merk: " + merk);
        System.out.println("Mesin:");
        System.out.println("  - Tipe       : " + mesin.getTipe());
        System.out.println("  - Kapasitas  : " + mesin.getKapasitas() + " L");
        System.out.println("  - Silinder   : " + mesin.getSilinder());
        System.out.println("  - Bahan Bakar: " + mesin.getBahanBakar());
        System.out.println("Seat: " + seat);
        System.out.println("Warna: " + warna);
        System.out.println("Tahun: " + tahun);
        System.out.println("Harga: " + harga);
    }
}
