#include <iostream>
using namespace std;

struct Mahasiswa{
    string nama;
    string nim;
    string alamat;
};

int main(){
    Mahasiswa mhs;

    cout << "Masukkan Nim: ";
    cin >> mhs.nim;
    cout << "Masukkan Nama: ";
    cin >> mhs.nama;
    cout << "Masukkan Alamat: ";
    cin >> mhs.alamat;

    cout << endl;
    cout << "Menamplkan Data " << endl;
    cout << endl;

    cout << "Nim: " << mhs.nim << endl;
    cout << "Nama: " << mhs.nama << endl;
    cout << "Alamat: " << mhs.alamat << endl;
}