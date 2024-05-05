//  nama:Muhammad Rayhan Widayat
//  NIM:20230140152
// 
// 
// 
// 1.---------------------------------------------------------------------------------
// 
// string nama;
// int panjang;
// bool hasil;
//
//
//2.-----------------------------------------------------------------------------------
// 
// int nBilanganA, nBilanganB;

// nBilanganA = 30;
// nBilanganB = 40;
// 
// if (nBilanganA == nBilanganB) {
//status = "sama Besar";
 //   }
 //   else if (nBilanganA > nBilanganB) {
 //       status = "Bilangan A lebih besar dari bilangan B";
 //   }
 //   else {
 //       status = "Bilangan A  lebih kecil dari bilangan B";
 //   }
//
//3.-------------------------------------------------------------------------------
// 
// 
//struct Mahasiswa {
//string nim;
//string nama;
//}
// 
// 
//int main() {
// 
//Mahasiswa mhs[3];
//for (int i = 0; i < 3; i++) {
//   cout << "Data Ke-" << (i + 1) << ":" << endl;
//   cout << "Nomor Mahasiswa : ";
//   cin>> mhs[i].nim;
//   cout << "Nama Mahasiswa : ";
//   cin>> mhs[i].nama;
//
//for (int i = 0; i < 3; i++) {
//   cout << endl;
//   cout << "Data Mahasiswa Ke-" << (i + 1) << ":" << endl;
//   cout << "\n NIM : " << mhs[i].nim;
//   cout << "\n Nama : " << mhs[i].nama;
//
// 
// 4----------------------------------------------------------------
// #include <iostream>
//using namespace std;
//
//int sisi;
//
//void inputdata() {
//    cout << "namuskan nilai panjang:";
//    cin >> sisi;
//}
//int hitungluas() {
//    return sisi * sisi;
//}
//
//void display() {
//    cout << "luasnya adalah: " << hitungluas() << endl;
//
//}
//
//
//int main() {
//    inputdata();
//    display();
//}
// 
// 5.--------------------------------------------------------------------------
// #include <iostream>
//using namespace std;
//
//int main()
//{
//    int i;
//    int arr[5];
//    for (i = 60; i > 10; i -= 10) {
//        cout << i << "selamat pagi dunia" << endl;
//    }
//
//    cout << "Nilai i terakhir" << i << endl;
//
//    for (i = 0; i < 5; i++) {
//        cout << "masukan nilai index ke-" << i << ":";
//        cin >> arr[i];
//    }
//    for (i = 0; i < 5; i++) {
//        cout << "Data array ke-" << i << ":" << arr[i] << endl;
//    }
//    return 0;
//}
// 
// 
// 
// 
// 6-----------------------------------------------------------------------------------
#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    float nilaiM;
    float nilaiBI;
    float rerata;
    string status;

};

int main()
{
    Mahasiswa mhs[2];
    int opsi;
    do {

        for (int i = 0; i < 2; i++) {
            cout << "Data Ke-" << (i + 1) << ":" << endl;
            cout << "nama Mahasiswa : ";
            cin >> mhs[i].nama;
            cout << "nilai matematika Mahasiswa : ";
            cin >> mhs[i].nilaiM;
            cout << "nilai bahasa inggris Mahasiswa : ";
            cin >> mhs[i].nilaiBI;

            mhs[i].rerata = (mhs[i].nilaiM + mhs[i].nilaiM) / 2;


            if (mhs[i].rerata >= 70 || mhs[i].nilaiM > 80) {

                mhs[i].status = "diterima";
            }
            else {
                mhs[i].status = "ditolak";
            }
        }


        for (int i = 0; i < 2; i++) {
            cout << " " << "nama" << "       " << "  status" << endl;
            cout << " " << mhs[i].nama << "       " << mhs[i].status << endl;

        }        cout << "apakah masih mau lanjut ? kalau lanjut? tekan 1:" << endl;
        cin >> opsi;
    } while (opsi == 1);
    return 0;
}