#include <iostream>

using namespace std;

void PolaSegitiga(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " "; 
        }
        
        cout << endl; 
    }
}

int main() {
    int N_input;
    
    cout << "Masukkan bilangan : ";
    cin >> N_input;

    PolaSegitiga(N_input);

    return 0;
}