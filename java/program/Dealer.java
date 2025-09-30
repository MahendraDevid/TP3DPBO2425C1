import java.util.ArrayList;

class Dealer {
    private String NIB;
    private String nama;
    private String alamat;
    private ArrayList<Mobil> listMobil;

    public Dealer() {
        this.NIB = "";
        this.nama = "";
        this.alamat = "";
        this.listMobil = new ArrayList<>();
    }

    public Dealer(String NIB, String nama, String alamat) {
        this.NIB = NIB;
        this.nama = nama;
        this.alamat = alamat;
        this.listMobil = new ArrayList<>();
    }

    public String getNIB() {
        return NIB;
    }

    public String getNama() {
        return nama;
    }

    public String getAlamat() {
        return alamat;
    }

    public ArrayList<Mobil> getListMobil() {
        return listMobil;
    }

    public void setNIB(String NIB) {
        this.NIB = NIB;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setAlamat(String alamat) {
        this.alamat = alamat;
    }

    public void tambahMobil(Mobil mobil) {
        this.listMobil.add(mobil);
    }

    public void tampilkanMobil() {
        if(listMobil.isEmpty()) {
            System.out.println("Tidak ada mobil di dealer.");
            return;
        }
        for(Mobil mobil : listMobil) {
            mobil.tampilkanInfo();
            System.out.println("----------------------------------------");
        }
    }
}

