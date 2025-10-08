#include <iostream>
using namespace std;

float hitungRataRata(int nilai_arr[], int N) {
    long long total_nilai = 0;
    
    for (int i = 0; i < N; i++) {
        total_nilai += nilai_arr[i]; 
    }
    if (N > 0) {
        return (float)total_nilai / N;
    } else {
        return 0; 
    }
}

void cariMinMax(int nilai_arr[], int N, int &nilai_max, int &nilai_min) {
    if (N <= 0) {
        nilai_max = 0;
        nilai_min = 0;
        return;
    }
    nilai_max = nilai_arr[0];
    nilai_min = nilai_arr[0];

    for (int i = 1; i < N; i++) {
        if (nilai_arr[i] > nilai_max) {
            nilai_max = nilai_arr[i];
        }

        if (nilai_arr[i] < nilai_min) {
            nilai_min = nilai_arr[i];
        }
    }
}

int main() {
    int N;
    int nilai_ujian[100];
    
    cout << "Masukkan jumlah siswa : ";
    cin >> N;


    cout << "\nMasukkan nilai ujian untuk " << N << " siswa:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Nilai siswa ke-" << i + 1 << ": ";
        cin >> nilai_ujian[i]; 
    }

    float rata_rata;
    int nilai_tertinggi, nilai_terendah;
    
    rata_rata = hitungRataRata(nilai_ujian, N);

    cariMinMax(nilai_ujian, N, nilai_tertinggi, nilai_terendah);

    cout << "Rata-rata Kelas:  " << rata_rata << endl;
    cout << "Nilai Tertinggi:  " << nilai_tertinggi << endl;
    cout << "Nilai Terendah:   " << nilai_terendah << endl;

    return 0;
}