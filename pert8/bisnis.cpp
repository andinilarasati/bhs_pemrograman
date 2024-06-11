#include <iostream>
#include <string>
#include <vector>

// Kelas untuk merepresentasikan kebutuhan konsumen
class KebutuhanKonsumen {
public:
    std::string deskripsi;
    int tingkatPenting;

    KebutuhanKonsumen(const std::string& desc, int penting) : deskripsi(desc), tingkatPenting(penting) {}
};

// Kelas untuk melakukan penelitian pasar
class PenelitianPasar {
private:
    std::vector<KebutuhanKonsumen> kebutuhanKonsumen;

public:
    void tambahKebutuhan(const std::string& deskripsi, int tingkatPenting) {
        KebutuhanKonsumen kebutuhan(deskripsi, tingkatPenting);
        kebutuhanKonsumen.push_back(kebutuhan);
    }

    void identifikasiPeluang() {
        std::cout << "Identifikasi Peluang Pasar Berdasarkan Kebutuhan Konsumen:\n";
        for (const auto& kebutuhan : kebutuhanKonsumen) {
            std::cout << "- " << kebutuhan.deskripsi << " (Tingkat Penting: " << kebutuhan.tingkatPenting << ")\n";
        }
    }
};

// Kelas untuk merepresentasikan item menu
class ItemMenu {
public:
    std::string nama;
    double harga;

    ItemMenu(const std::string& nama, double harga) : nama(nama), harga(harga) {}
};

// Kelas untuk perencanaan produk
class PerencanaanProduk {
private:
    std::vector<ItemMenu> menu;

public:
    void tambahkanItem(const std::string& nama, double harga) {
        ItemMenu item(nama, harga);
        menu.push_back(item);
    }

    void tampilkanMenu() {
        std::cout << "\nMenu yang Akan Dijual:\n";
        for (const auto& item : menu) {
            std::cout << "- " << item.nama << " (Harga: Rp" << item.harga << ")\n";
        }
    }
};

int main() {
    PenelitianPasar penelitianPasar;

    int jumlahKebutuhan;
    std::cout << "Masukkan jumlah kebutuhan konsumen yang ingin diteliti: ";
    std::cin >> jumlahKebutuhan;
    std::cin.ignore();  // Membersihkan buffer newline

    for (int i = 0; i < jumlahKebutuhan; ++i) {
        std::string deskripsi;
        int tingkatPenting;

        std::cout << "Masukkan deskripsi kebutuhan konsumen ke-" << i + 1 << ": ";
        std::getline(std::cin, deskripsi);

        std::cout << "Masukkan tingkat penting (1-10) untuk kebutuhan ini: ";
        std::cin >> tingkatPenting;
        std::cin.ignore();  // Membersihkan buffer newline

        penelitianPasar.tambahKebutuhan(deskripsi, tingkatPenting);
    }

    penelitianPasar.identifikasiPeluang();

    PerencanaanProduk perencanaanProduk;

    int jumlahMenu;
    std::cout << "\nMasukkan jumlah item menu yang ingin dikembangkan: ";
    std::cin >> jumlahMenu;
    std::cin.ignore();  // Membersihkan buffer newline

    for (int i = 0; i < jumlahMenu; ++i) {
        std::string namaItem;
        double hargaItem;

        std::cout << "Masukkan nama item menu ke-" << i + 1 << ": ";
        std::getline(std::cin, namaItem);

        std::cout << "Masukkan harga untuk item ini: Rp";
        std::cin >> hargaItem;
        std::cin.ignore();  // Membersihkan buffer newline

        perencanaanProduk.tambahkanItem(namaItem, hargaItem);
    }

    perencanaanProduk.tampilkanMenu();

    return 0;
}
