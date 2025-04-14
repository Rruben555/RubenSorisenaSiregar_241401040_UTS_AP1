#include <iostream>
using namespace std;

int main(){
    int alpro,pds,so;
    float rata;
    string nama,nim;
    cout<<"Nama Mahasiswa: ";
    getline(cin,nama);
    cout<<"NIM: ";
    cin>>nim;
    cout<<"Nilai Mata Kuliah: "<<endl;
    cout<<"Algoritma dan Pemrograman: ";
    cin>>alpro;
    cout<<"Probabilitas dan Statistik: ";
    cin>>pds;
    cout<<"Sistem Operasi: ";
    cin>>so;
    cout<<endl;

    cout<<"Algoritma dan Pemrograman: ";
    alpro>=60 ? cout<<"Lulus.\n" : cout<<"Tidak Lulus. Silahkan Ulangi di Tahun Depan\n";
    cout<<"Probabilitas dan Statistik: ";
    pds>=60 ? cout<<"Lulus.\n" : cout<<"Tidak Lulus. Silahkan Ulangi di Tahun Depan\n";
    cout<<"Sistem Operasi: ";
    so>=60 ? cout<<"Lulus.\n" : cout<<"Tidak Lulus. Silahkan Ulangi di Tahun Depan\n";
    
    rata=(alpro+pds+so)/3;

    cout<<"Nilai rata-rata Semester ini: "<<rata;
    getchar();
}