/*
 * Tugas 2 - Program Menu Data Penduduk
 * Menyimpan data penduduk dalam array struct dengan fitur:
 * tambah, tampil, cari, dan hapus data.
 */

#include <iostream>
#include <string.h>
using namespace std;

// ── KONSTANTA & STRUCT ──────────────────────────────────────
const int MAX_DATA = 100;

typedef struct {
    char nama[30];
    char alamat[50];
    int  umur;
    char agama[15];
    char gol_darah[3];
    char status[20];
} DataPenduduk;

// ── DATA GLOBAL ─────────────────────────────────────────────
DataPenduduk penduduk[MAX_DATA];
int jumlah = 0;

// ── FUNGSI HELPER ───────────────────────────────────────────

void tampilMenu() {
    cout << "\n================================" << endl;
    cout << "      SISTEM DATA PENDUDUK      " << endl;
    cout << "================================" << endl;
    cout << " 1. Tambah Data                 " << endl;
    cout << " 2. Tampil Semua Data           " << endl;
    cout << " 3. Cari Data                   " << endl;
    cout << " 4. Hapus Data                  " << endl;
    cout << " 0. Keluar                      " << endl;
    cout << "================================" << endl;
    cout << "Pilihan : ";
}

void tampilSatuData(int i) {
    cout << "--------------------------------" << endl;
    cout << "Nama       : " << penduduk[i].nama      << endl;
    cout << "Alamat     : " << penduduk[i].alamat    << endl;
    cout << "Umur       : " << penduduk[i].umur      << " tahun" << endl;
    cout << "Agama      : " << penduduk[i].agama     << endl;
    cout << "Gol. Darah : " << penduduk[i].gol_darah << endl;
    cout << "Status     : " << penduduk[i].status    << endl;
}

// ── FUNGSI MENU ─────────────────────────────────────────────

void tambahData() {
    if (jumlah >= MAX_DATA) {
        cout << "[!] Data sudah penuh, tidak bisa menambah lagi." << endl;
        return;
    }

    cout << "\n--- Tambah Data Penduduk ---" << endl;

    cout << "Nama       : ";
    cin.getline(penduduk[jumlah].nama, 30);

    cout << "Alamat     : ";
    cin.getline(penduduk[jumlah].alamat, 50);

    cout << "Umur       : ";
    cin >> penduduk[jumlah].umur;
    cin.ignore();                           // bersihkan newline setelah cin >>

    cout << "Agama      : ";
    cin.getline(penduduk[jumlah].agama, 15);

    cout << "Gol. Darah : ";
    cin.getline(penduduk[jumlah].gol_darah, 3);

    cout << "Status     : ";
    cin.getline(penduduk[jumlah].status, 20);

    jumlah++;
    cout << "[+] Data berhasil ditambahkan! (Total: " << jumlah << " data)" << endl;
}

void tampilSemuaData() {
    if (jumlah == 0) {
        cout << "[!] Belum ada data penduduk." << endl;
        return;
    }

    cout << "\n=== DAFTAR SEMUA DATA PENDUDUK (" << jumlah << " data) ===" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << "Data ke-" << i + 1 << endl;
        tampilSatuData(i);
    }
}

void cariData() {
    char keyword[30];

    cout << "\n--- Cari Data Penduduk ---" << endl;
    cout << "Masukkan nama : ";
    cin.getline(keyword, 30);

    bool found = false;
    for (int i = 0; i < jumlah; i++) {
        if (strcmp(penduduk[i].nama, keyword) == 0) {
            if (!found) cout << "\n[+] Data ditemukan:" << endl;
            tampilSatuData(i);
            found = true;
        }
    }

    if (!found) {
        cout << "[-] Data dengan nama '" << keyword << "' tidak ditemukan." << endl;
    }
}

void hapusData() {
    char keyword[30];

    cout << "\n--- Hapus Data Penduduk ---" << endl;
    cout << "Masukkan nama : ";
    cin.getline(keyword, 30);

    bool found = false;
    for (int i = 0; i < jumlah; i++) {
        if (strcmp(penduduk[i].nama, keyword) == 0) {
            // Geser semua data setelah indeks i ke kiri
            for (int j = i; j < jumlah - 1; j++) {
                penduduk[j] = penduduk[j + 1];
            }
            jumlah--;
            cout << "[-] Data '" << keyword << "' berhasil dihapus. "
                 << "(Sisa: " << jumlah << " data)" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "[!] Data dengan nama '" << keyword << "' tidak ditemukan." << endl;
    }
}

// ── MAIN ────────────────────────────────────────────────────

int main()
{
    int pilihan;

    do {
        tampilMenu();
        cin >> pilihan;
        cin.ignore();                       // bersihkan newline setelah cin >>

        switch (pilihan) {
            case 1: tambahData();      break;
            case 2: tampilSemuaData(); break;
            case 3: cariData();        break;
            case 4: hapusData();       break;
            case 0:
                cout << "\nProgram selesai. Terima kasih!" << endl;
                break;
            default:
                cout << "[!] Pilihan tidak valid. Masukkan angka 0-4." << endl;
        }
    } while (pilihan != 0);

    return 0;
}