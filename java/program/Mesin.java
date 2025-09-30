class Mesin {
    private String tipe;
    private String kapasitas;
    private String silinder;
    private String bahanBakar;

    public Mesin(){
        this.tipe = "";
        this.kapasitas = "";
        this.silinder = "";
        this.bahanBakar = "";
    }

    public Mesin(String tipe, String kapasitas, String silinder, String bahanBakar) {
        this.tipe = tipe;
        this.kapasitas = kapasitas;
        this.silinder = silinder;
        this.bahanBakar = bahanBakar;
    }

    public String getTipe() {
        return tipe;
    }

    public String getKapasitas() {
        return kapasitas;
    }

    public String getSilinder() {
        return silinder;
    }

    public String getBahanBakar() {
        return bahanBakar;
    }

    public void setTipe(String tipe) {
        this.tipe = tipe;
    }

    public void setKapasitas(String kapasitas) {
        this.kapasitas = kapasitas;
    }

    public void setSilinder(String silinder) {
        this.silinder = silinder;
    }

    public void setBahanBakar(String bahanBakar) {
        this.bahanBakar = bahanBakar;
    }
}