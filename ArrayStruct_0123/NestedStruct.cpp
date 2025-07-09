#include <iostream>
using namespace std;

struct DetaiAlamat{
    string kota;
    string provinsi;
};

struct Mahasiswa{
    string nama;
    string nim;
    DetaiAlamat alamat;
};

int main(){

    // Membuat objek struct dalam array
    Mahasiswa mhs[2];
    for (int i = 0; i < 2; i++){
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Masukkan Nim: ";
        cin >> mhs[i].nim;
        cout << "Masukkan Nama: ";
        cin >> mhs[i].nama;
        cout << "Masukkan Kota: ";
        cin >> mhs[i].alamat.kota;
        cout << "Masukkan Provinsi: ";
        cin >> mhs[i].alamat.provinsi;
    }

    cout << endl;
    cout << "Menampilkan Data " << endl;
    cout << endl;
    for (int i = 0; i < 2; i++){
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nim: " << mhs[i].nim << endl;
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "Kota: " << mhs[i].alamat.kota << endl;
        cout << "Provinsi: " << mhs[i].alamat.provinsi << endl;
    }
}