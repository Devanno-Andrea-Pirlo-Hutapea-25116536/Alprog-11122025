#include <iostream>
#include <string>


using namespace std;

int main() {

    string idBarang[50];
    string namaBarang[50];
    string jumlahBarang[50];

    int jumlahData = 0; 
    int pilihan;

    do {
        system("cls");
        cout << "=== PROGRAM INVENTARIS BARANG ===" << endl;
        cout << "1. Input Data Barang" << endl;
        cout << "2. View Data Barang" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;

        if (pilihan == 1) {

            if (jumlahData < 50) {
                cout << "\n--- Input Data Ke-" << (jumlahData + 1) << " ---" << endl;

                cout << "Masukkan ID Barang: ";
                cin >> idBarang[jumlahData];

                cout << "Masukkan Nama Barang: ";
                cin >> namaBarang[jumlahData];

                cout << "Masukkan Jumlah Barang: ";
                cin >> jumlahBarang[jumlahData];


                cout << "Data berhasil disimpan!" << endl;
            }
            else {
                cout << "Memori penuh! Tidak bisa menambah data lagi." << endl;
            }
            system("pause");

        }
        else if (pilihan == 2) {
            cout << "\n--- Daftar Inventaris Barang ---" << endl;
            cout << "No\tID\tNama\t\tJumlah" << endl;
            cout << "----------------------------------------" << endl;


            for (int i = 0; i < jumlahData; i++) {
                cout << (i + 1) << "\t"
                    << idBarang[i] << "\t"
                    << namaBarang[i] << "\t\t"
                    << jumlahBarang[i] << endl;
            }
            cout << "----------------------------------------" << endl;
            system("pause");

        }
        else if (pilihan == 3) {
            cout << "Keluar dari program..." << endl;
        }
        else {
            cout << "Pilihan tidak valid!" << endl;
            system("pause");
        }

    } while (pilihan != 3);

    return 0;
}