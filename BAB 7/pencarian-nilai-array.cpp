#include <iostream>
using namespace std;

int main(){

    int A[10];
    int Nilai;
    cout << "Nama   : Agung Gumelar" << endl;
    cout << "NIM    : A2.1900006" << endl << endl;
    cout << "Nilai pada:" << endl << endl << endl;
    for (int C=0; C<10; C++){
        cout << "Indeks [" << C << "] = ";
        cin  >> A[C];
    }
    cout << endl;

    cout << "Nilai yang dicari adalah: ";
    cin  >> Nilai;
    for (int D = 0; D<10; D++)
    {
        if (A[D] == Nilai)
        {
            cout << "Nilai terdapat pada Indeks ke " << D << endl;
            break;
        }

    }
    cout << "\n";
    return 0;
}
