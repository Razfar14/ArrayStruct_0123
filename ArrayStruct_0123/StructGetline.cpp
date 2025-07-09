#include <iostream>
using namespace std;

struct DetailAlamat{
    string kota;
    string provinsi;
};

struct Mahasiswa{
    string nama;
    string nim;
    DetailAlamat alamat;
};

int main(){

    // Memnbuat objek struct dalam array
    Mahasiswa mhs[2];
    for (int i = 0; i < 2; i++){
       cout << "Mahasiswa ke-" << (i + 1) << endl;
         cout << "Masukkan Nim: ";
        cin >> mhs[i].nim;
        cout << "Masukkan Nama: ";
        cin >> (cin,mhs[i].nama);
        cout << "Masukkan Kota: ";
        cin >> mhs[i].alamat.kota;
        cout << "Masukkan Provinsi: ";
        cin >> mhs[i].alamat.provinsi;
        cin.ignore();
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
        cout << endl;
    }
}