class Luxury extends Mobil{
    private String fiturTeknologi;
    private String fiturKenyamanan;
    private String materialInterior;

    public Luxury() {
        super();
        this.fiturTeknologi = "";
        this.fiturKenyamanan = "";
        this.materialInterior = "";
    }

    public Luxury(String nama, String merk, Mesin mesin, int seat, String warna, int tahun, String harga, String fiturTeknologi, String fiturKenyamanan, String materialInterior) {
        super(nama, merk, mesin, seat, warna, tahun, harga);
        this.fiturTeknologi = fiturTeknologi;
        this.fiturKenyamanan = fiturKenyamanan;
        this.materialInterior = materialInterior;
    }

    public String getFiturTeknologi() {
        return fiturTeknologi;
    }

    public String getFiturKenyamanan() {
        return fiturKenyamanan;
    }

    public String getMaterialInterior() {
        return materialInterior;
    }

    public void setFiturTeknologi(String fiturTeknologi) {
        this.fiturTeknologi = fiturTeknologi;
    }

    public void setFiturKenyamanan(String fiturKenyamanan) {
        this.fiturKenyamanan = fiturKenyamanan;
    }

    public void setMaterialInterior(String materialInterior) {
        this.materialInterior = materialInterior;
    }

    @Override
    public void tampilkanInfo() {
        super.tampilkanInfo();
        System.out.println("Fitur Teknologi: " + fiturTeknologi);
        System.out.println("Fitur Kenyamanan: " + fiturKenyamanan);
        System.out.println("Material Interior: " + materialInterior);
    }
}