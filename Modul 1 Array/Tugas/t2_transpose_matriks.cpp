/**
 * ============================================================
 *  Program  : Transpose Matriks
 *  Bahasa   : C++
 *  Deskripsi: Melakukan operasi transpose pada matriks
 *             ordo M×N → N×M menggunakan template fungsi.
 * ============================================================
 */

#include <iostream>
#include <iomanip>
#include <vector>

using Matrix = std::vector<std::vector<int>>;

// ─── Deklarasi Fungsi ────────────────────────────────────────
Matrix inputMatriks(int baris, int kolom);
Matrix transposeMatriks(const Matrix& matriks);
void    tampilkanMatriks(const Matrix& matriks, const std::string& label);

// ─── Main ────────────────────────────────────────────────────
int main() {
    std::cout << "===== PROGRAM TRANSPOSE MATRIKS =====\n\n";

    int baris, kolom;

    std::cout << "Masukkan jumlah baris  : ";
    std::cin >> baris;
    std::cout << "Masukkan jumlah kolom  : ";
    std::cin >> kolom;
    std::cout << "\n";

    Matrix original  = inputMatriks(baris, kolom);
    Matrix transposed = transposeMatriks(original);

    tampilkanMatriks(original,   "Matriks Original (" +
                                  std::to_string(baris) + "x" +
                                  std::to_string(kolom) + ")");

    tampilkanMatriks(transposed, "Matriks Transpose (" +
                                  std::to_string(kolom) + "x" +
                                  std::to_string(baris) + ")");

    return 0;
}

// ─── Implementasi Fungsi ─────────────────────────────────────

/**
 * Membaca elemen matriks dari input pengguna.
 * @param baris  Jumlah baris matriks.
 * @param kolom  Jumlah kolom matriks.
 * @return       Matriks hasil input.
 */
Matrix inputMatriks(int baris, int kolom) {
    Matrix matriks(baris, std::vector<int>(kolom));

    std::cout << "Masukkan elemen matriks:\n";
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            std::cout << "  [" << i << "][" << j << "] = ";
            std::cin >> matriks[i][j];
        }
    }
    std::cout << "\n";

    return matriks;
}

/**
 * Melakukan operasi transpose pada matriks.
 * Elemen pada posisi [i][j] dipindahkan ke posisi [j][i].
 * @param matriks  Matriks sumber (M×N).
 * @return         Matriks hasil transpose (N×M).
 */
Matrix transposeMatriks(const Matrix& matriks) {
    int baris = static_cast<int>(matriks.size());
    int kolom = static_cast<int>(matriks[0].size());

    // Matriks hasil berukuran kolom × baris (dibalik)
    Matrix hasil(kolom, std::vector<int>(baris));

    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            hasil[j][i] = matriks[i][j];   // inti operasi transpose
        }
    }

    return hasil;
}

/**
 * Menampilkan matriks ke layar dengan format rapi.
 * @param matriks  Matriks yang akan ditampilkan.
 * @param label    Judul / keterangan matriks.
 */
void tampilkanMatriks(const Matrix& matriks, const std::string& label) {
    std::cout << label << ":\n";

    for (const auto& baris : matriks) {
        std::cout << "  | ";
        for (int elemen : baris) {
            std::cout << std::setw(4) << elemen;
        }
        std::cout << "  |\n";
    }

    std::cout << "\n";
}
