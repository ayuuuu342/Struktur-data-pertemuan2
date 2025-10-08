#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int JUMLAH_MAHASISWA = 5;
const int JUMLAH_MATA_KULIAH = 3;

struct Mahasiswa {
    string nama;
    float nilai[JUMLAH_MATA_KULIAH]; 
    float rataRata;
};

int main() {
    Mahasiswa daftarMahasiswa[JUMLAH_MAHASISWA];
    string namaMataKuliah[JUMLAH_MATA_KULIAH] = {"Sistem Operasi", "Kalkulus", "struktur data"};
    
    int indeksTertinggi = 0;
    float rataRataTertinggi = -1.0;

    cout << "==PROGRAM PENGHITUNG RATA-RATA NILAI MAHASISWA==\n";

    for (int i = 0; i < JUMLAH_MAHASISWA; i++) {
        cout << "\n--- Input Data Mahasiswa ke-" << i + 1 << " ---\n";
        
        cout << "Masukkan Nama Mahasiswa : ";
        cin >> daftarMahasiswa[i].nama; 

        float totalNilai = 0;
        for (int j = 0; j < JUMLAH_MATA_KULIAH; j++) {
            cout << "Masukkan Nilai " << namaMataKuliah[j] << " : ";
            cin >> daftarMahasiswa[i].nilai[j];
            totalNilai += daftarMahasiswa[i].nilai[j];
        }
        daftarMahasiswa[i].rataRata = totalNilai / JUMLAH_MATA_KULIAH;

        if (daftarMahasiswa[i].rataRata > rataRataTertinggi) {
            rataRataTertinggi = daftarMahasiswa[i].rataRata;
            indeksTertinggi = i;
        }
    }

    cout << "\n\n=======================LAPORAN NILAI AKHIR MAHASISWA====================================\n";
    
    cout << left << setw(5) << "No."
         << setw(20) << "Nama Mahasiswa"
         << setw(15) << namaMataKuliah[0] 
         << setw(15) << namaMataKuliah[1] 
         << setw(15) << namaMataKuliah[2] 
         << setw(10) << "Rata-rata"
         << "Keterangan\n";
    cout << "----------------------------------------------------------------------------------------\n";

    for (int i = 0; i < JUMLAH_MAHASISWA; i++) {
        cout << left << setw(5) << i + 1
             << setw(20) << daftarMahasiswa[i].nama;
             
        for (int j = 0; j < JUMLAH_MATA_KULIAH; j++) {
            cout << setw(15) << daftarMahasiswa[i].nilai[j];
        }
        
        cout << setw(10) << daftarMahasiswa[i].rataRata;

        if (i == indeksTertinggi) {
            cout << "TERBAIK";
        }
        cout << "\n";
    }
    cout << "========================================================================================\n";

    return 0;
}