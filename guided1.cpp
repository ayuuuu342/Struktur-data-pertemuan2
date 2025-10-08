#include <iostream>
#define MAX 5 
using namespace std;

int main(){
 int i, j;
 float nilai[MAX];
 static int nilai_tahun[MAX][MAX] = {
    {0,2,2,0,0},
    {0,1,1,1,0},
    {0,3,3,3,0},
    {4,4,0,0,4},
    {5,0,0,0,5}
 };
    //input data array
    cout << "=== inout nilai siswa ===\n";
    for ( i = 0; i < MAX; i++)
    {
        cout << "masukkan nilai ke-" << i + 1 << ":";
        cin >> nilai[i];
    }
    
    //menampilakan isi array
    cout << "\n=== data nilai siswa ==\n";
    for (i = 0; i < MAX; i++)
    {
        cout << "nilai ke- " << i + 1 << "=" << nilai[i] << endl;
    }
    
    // menampilkan isi aray 2 dimensi
    cout << "\n=== nilai tahunan ===\n";
    for ( i = 0; i < MAX; i++){
    for ( j = 0; j < MAX; j++)
    {
        cout << nilai_tahun[i][j] << " ";
    }
    cout << endl;    
    }
    
    return 0;

}