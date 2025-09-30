class Family extends Mobil{
    private String  kapasitasBagasi;
    private String fiturKeselamatan;
    private String fiturKeluarga;

    public Family() {
        super();
        this.kapasitasBagasi = "";
        this.fiturKeselamatan = "";
        this.fiturKeluarga = "";
    }

    public Family(String nama, String merk, Mesin mesin, int seat, String warna, int tahun, String harga, String kapasitasBagasi, String fiturKeselamatan, String fiturKeluarga) {
        super(nama, merk, mesin, seat, warna, tahun, harga);
        this.kapasitasBagasi = kapasitasBagasi;
        this.fiturKeselamatan = fiturKeselamatan;
        this.fiturKeluarga = fiturKeluarga;
    }

    public String getKapasitasBagasi() {
        return kapasitasBagasi;
    }

    public String getFiturKeselamatan() {
        return fiturKeselamatan;
    }

    public String getFiturKeluarga() {
        return fiturKeluarga;
    }

    public void setKapasitasBagasi(String kapasitasBagasi) {
        this.kapasitasBagasi = kapasitasBagasi;
    }

    public void setFiturKeselamatan(String fiturKeselamatan) {
        this.fiturKeselamatan = fiturKeselamatan;
    }

    public void setFiturKeluarga(String fiturKeluarga) {
        this.fiturKeluarga = fiturKeluarga;
    }

    @Override
    public void tampilkanInfo() {
        super.tampilkanInfo();
        System.out.println("Kapasitas Bagasi: " + kapasitasBagasi);
        System.out.println("Fitur Keselamatan: " + fiturKeselamatan);
        System.out.println("Fitur Keluarga: " + fiturKeluarga);
    }
}