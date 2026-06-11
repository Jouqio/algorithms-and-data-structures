/*
 * Tugas 1 - Program Data Pegawai
 * Menyimpan data pegawai dan menghitung total gaji
 * berdasarkan hari kerja.
 */

#include <iostream>
#include <string.h>
using namespace std;

typedef struct {
    char   nip[12];
    char   nama[30];
    int    hari_kerja;
    double gaji_perhari;
    double total_gaji;
} DataPegawai;

int main()
{
    DataPegawai pegawai;

    // ── INPUT DATA ──────────────────────────────────────────
    cout << "==============================" << endl;
    cout << "     INPUT DATA PEGAWAI       " << endl;
    cout << "==============================" << endl;

    cout << "Nama         : ";
    cin.getline(pegawai.nama, 30);          // getline agar bisa input spasi

    cout << "NIP          : ";
    cin >> pegawai.nip;

    cout << "Hari Kerja   : ";
    cin >> pegawai.hari_kerja;

    cout << "Gaji/Hari    : ";
    cin >> pegawai.gaji_perhari;

    // ── HITUNG TOTAL GAJI ───────────────────────────────────
    pegawai.total_gaji = pegawai.hari_kerja * pegawai.gaji_perhari;

    // ── TAMPIL DATA ─────────────────────────────────────────
    cout << "\n==============================" << endl;
    cout << "       DATA PEGAWAI           " << endl;
    cout << "==============================" << endl;
    cout << "Nama         : " << pegawai.nama         << endl;
    cout << "NIP          : " << pegawai.nip          << endl;
    cout << "Hari Kerja   : " << pegawai.hari_kerja   << " hari" << endl;
    cout << "Gaji/Hari    : " << pegawai.gaji_perhari << endl;
    cout << "Total Gaji   : " << pegawai.total_gaji   << endl;
    cout << "==============================" << endl;

    return 0;
}