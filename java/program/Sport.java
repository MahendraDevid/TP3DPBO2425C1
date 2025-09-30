class Sport extends Mobil{
    private String horsepower;
    private String topspeed;
    private boolean turbo;

    public Sport() {
        super();
        this.horsepower = "";
        this.topspeed = "";
        this.turbo = false;
    }

    public Sport(String nama, String merk, Mesin mesin, int seat, String warna, int tahun, String harga, String horsepower, String topspeed, boolean turbo) {
        super(nama, merk, mesin, seat, warna, tahun, harga);
        this.horsepower = horsepower;
        this.topspeed = topspeed;
        this.turbo = turbo;
    }

    public String getHorsepower() {
        return horsepower;
    }

    public String getTopspeed() {
        return topspeed;
    }

    public boolean isTurbo() {
        return turbo;
    }

    public void setHorsepower(String horsepower) {
        this.horsepower = horsepower;
    }

    public void setTopspeed(String topspeed) {
        this.topspeed = topspeed;
    }

    public void setTurbo(boolean turbo) {
        this.turbo = turbo;
    }

    @Override
    public void tampilkanInfo() {
        super.tampilkanInfo();
        System.out.println("Horsepower: " + horsepower);
        System.out.println("Top Speed: " + topspeed);
        System.out.println("Turbo: " + (turbo ? "Yes" : "No"));
    }
}