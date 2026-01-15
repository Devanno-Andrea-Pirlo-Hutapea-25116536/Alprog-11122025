#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <cstdio>
#include <limits>
#include <iomanip>

using namespace std;

// fungsi header gt lh
static void atas()
{
    cout << endl;
    cout << "" << endl;
    cout << "		Film Rating" << endl;
    cout << endl;
}

class filmRat
{
private:
    int jumlahData = 0, pilihM, mExit;

    // ini fungsi2nya
public:
    string namaFilm[50], sutradaraFilm[50], waktuRilis[50];
    void mainMenu();   // cuma main menu
    void inputFilm();  // untuk inpupt film
    void giveRat();    // untuk ngasih rating
    void countAvg();   // untuk ngitung rerata
    void findHiFilm(); // untuk cari film dgn rating tertinggi
    void dispFilm();   // untuk nampilin film
    void adalah();     // data klmpk
    void records();    // harusnya utk fstream
};

// pokoknya main menu
void filmRat::mainMenu()
{
    system("cls");
    atas();
    cout << "		MAIN MENU" << endl;
    cout << endl;
    cout << endl;
    cout << "1. Input film" << endl;
    cout << "2. Memberi rating" << endl;
    cout << "3. Menghitung rata - rata" << endl;
    cout << "4. Mencari film dengan rating tertinggi" << endl;
    cout << "5. Menampilkan Semua Data" << endl;
    cout << "6. Adalah" << endl;
    cout << "7. Exit" << endl;

    do
    {
        cout << "Pilih Menu: ";
        cin >> pilihM;
        cin.ignore();
        switch (pilihM)
        {
        case 1:
            inputFilm();
            break;
        case 2:
            giveRat();
            break;
        case 3:
            countAvg();
            break;
        case 4:
            findHiFilm();
            break;
        case 5:
            dispFilm();
            break;
        case 6:
            adalah();
            break;
        case 7:
            break;
        default:
        {
            cout << "pilih yg bener kocak" << endl;
        }
        }
    } while (pilihM != 6);
}

// input film hrsnya
void filmRat::inputFilm()
{

    system("cls");
    atas();

    cout << "		INPUT FILM" << endl;
    cout << endl;
    cout << endl;

    if (jumlahData < 49)
    {
        cout << "\n--- Input Data Ke-" << (jumlahData + 1) << " ---" << endl;

        cout << "Nama Film: ";
        // cin >> namaFilm[jumlahData];
        getline(cin, namaFilm[jumlahData]);
        cout << "Sutradara Film: ";
        // cin >> sutradaraFilm[jumlahData];
        getline(cin, sutradaraFilm[jumlahData]);
        cout << "Waktu Rilis: ";
        // cin >> waktuRilis[jumlahData];
        getline(cin, waktuRilis[jumlahData]);
        jumlahData++;
        cout << "\nInput Film Tersimpan\n"
             << endl;
    }
    else
    {
        cout << "Memori penuh! Tidak bisa menambah data lagi." << endl;
    }

    // balik ke menu awal atau exit atau input lg
    do
    {
        cout << "Kembali ke Main Menu atau Exit" << endl;
        cout << "1. Input Film lagi" << endl;
        cout << "2. Main Menu" << endl;
        cout << "0. Exit" << endl;
        cin >> mExit;
        cin.ignore();

        switch (mExit)
        {
        case 0:
            break;
        case 2:
            mainMenu();
            break;
        case 1:
            inputFilm();
            break;
        }
    } while (mExit != 0);
}

// bagian rating film
void filmRat::giveRat()
{
    system("cls");
    atas();
    cout << "		Beri Rating" << endl;
    cout << endl;
    cout << endl;

    do
    {
        cout << "Kembali ke Main Menu atau Exit" << endl;
        cout << "1. Main Menu" << endl;
        cout << "0. Exit" << endl;

        cin >> mExit;

        switch (mExit)
        {
        case 0:
            break;
        case 1:
            mainMenu();
            break;
        }
    } while (mExit != 0);
}

// bagian itung rata2
void filmRat::countAvg()
{
    system("cls");
    atas();
    cout << "		Hitung Rata-rata?" << endl;
    cout << endl;
    cout << endl;

    do
    {
        cout << "Kembali ke Main Menu atau Exit" << endl;
        cout << "1. Main Menu" << endl;
        cout << "0. Exit" << endl;

        cin >> mExit;

        switch (mExit)
        {
        case 0:
            break;
        case 1:
            mainMenu();
            break;
        }
    } while (mExit != 0);
}

// bagian cari film rating tertinggi
void filmRat::findHiFilm()
{
    system("cls");
    atas();
    cout << "		Cari Film" << endl;
    cout << endl;
    cout << endl;

    do
    {
        cout << "Kembali ke Main Menu atau Exit" << endl;
        cout << "1. Main Menu" << endl;
        cout << "0. Exit" << endl;

        cin >> mExit;

        switch (mExit)
        {
        case 0:
            break;
        case 1:
            mainMenu();
            break;
        }
    } while (mExit != 0);
}

// ini nampilin semua data film
void filmRat::dispFilm()
{
    system("cls");
    atas();
    cout << "       Daftar Semua Film  " << endl;
    cout << "\nNo\tNama Film\t\tSutradara\tWaktu Rilis" << endl;
    cout << "-----------------------------------------------------------------------" << endl;

    for (int i = 0; i < jumlahData; i++)
    {
        cout << (i + 1) << "\t"
             << left << setw(20) << namaFilm[i] << "\t"
             << left << setw(15) << sutradaraFilm[i] << "\t"
             << left << setw(10) << waktuRilis[i] << endl;
    }
    cout << "-----------------------------------------------------------------------" << endl;

    cout << "Kembali ke Main Menu atau Exit" << endl;
    cout << "1. Main Menu" << endl;
    cout << "0. Exit" << endl;
    cin >> mExit;
    do
    {
        switch (mExit)
        {
        case 0:
            break;
        case 1:
            mainMenu();
            break;
        }
    } while (mExit != 0);
}

// klmpk
void filmRat::adalah()
{
    system("cls");
    atas();
    cout << "		Data Kelompok 6" << endl;
    cout << endl;
    cout << endl;

    cout << "Anggota Kelompok 6:" << endl;
    cout << "1. Iqbal Izzudin" << endl;
    cout << "2. Devanno Andrea Pirlo Hutapea" << endl;
    cout << "3. Muhammad Azka Wahid Abdillah" << endl;
    cout << "4. Humaid Hammami" << endl;
    cout << "5. Chasnaunisai Khoirivayanti" << endl;
    cout << endl;
    cout << endl;
    cout << "Matkul: Algoritma dan Pemrograman" << endl;
    cout << "Proyek: Aplikasi Film Rating" << endl;

    do
    {
        cout << "Kembali ke Main Menu atau Exit" << endl;
        cout << "1. Main Menu" << endl;
        cout << "0. Exit" << endl;

        cin >> mExit;

        switch (mExit)
        {
        case 0:
            break;
        case 1:
            mainMenu();
            break;
        }
    } while (mExit != 0);
}

// bagian fungsi main untuk nampilin semua program
int main()
{

    //
    filmRat h;
    atas;

    // bagian login gitulahh
    // bool isLogin = false;
    // string user;
    // string pass;
    // const string uAdmin = "1";
    // const string pAdmin = "1";
    //
    //// login pake if else
    // cout << "       LOGIN" << endl;
    // cout << endl;
    // cout << endl;
    //
    // do
    //{
    //     cout << "Username: ";
    //     cin >> user;
    //     cout << "Password: ";
    //     cin >> pass;

    //    if (user == uAdmin && pass == pAdmin)
    //    {
    //        isLogin = true;
    //    }
    //    else
    //    {
    //        cout << "Login Failed!" << endl;
    //    }
    //} while (!isLogin);

    h.mainMenu();

    return (0);
}