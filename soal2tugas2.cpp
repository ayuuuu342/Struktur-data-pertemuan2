#include <iostream>
using namespace std;

int main() {
    int N;
    int data_array[100]; 
    int *ptr_array; 

    cout << "Masukkan jumlah bilangan bulat : ";
    cin >> N;


    ptr_array = data_array; 

    cout << "\nMasukkan " << N << " bilangan bulat:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Bilangan ke-" << i + 1 << ": ";
        cin >> *(ptr_array + i); 
    }

    long long jumlah = 0;
    int nilai_min = *ptr_array; 
    int nilai_max = *ptr_array; 

    for (int i = 0; i < N; i++) {
        int nilai_saat_ini = *(ptr_array + i); 
        
        jumlah += nilai_saat_ini;

        if (nilai_saat_ini > nilai_max) {
            nilai_max = nilai_saat_ini;
        }

        if (nilai_saat_ini < nilai_min) {
            nilai_min = nilai_saat_ini;
        }
    }

    cout << "\n--- Hasil Perhitungan ---" << endl;
    cout << "Jumlah seluruh bilangan: " << jumlah << endl;
    cout << "Nilai maksimum: " << nilai_max << endl;
    cout << "Nilai minimum: " << nilai_min << endl;

    return 0;
}