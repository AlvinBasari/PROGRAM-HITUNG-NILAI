#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>



int main() {
    const int i = 10;
    int jml_data;
    int nilaiabsen[i], nilaitugas[i], nilaiuts[i], nilaiuas[i];
    char nim[8][i], namamahasiswa[35][i];
                                                                  
    cout << "Program Perhitungan Nilai Mahasiswa" << endl;
    cout << "_______________________________________\n\n";             
    cout << "Jumlah Data Mahasiswa : "; cin >> jml_data; cout << endl;

    for (int i = 1; i <= jml_data; i++) {
        cout << "Data ke-" << i << endl;
        cout << "NIM : "; cin >> nim[i];
        cout << "Nama Mahasiswa : "; cin >> namamahasiswa[i];
        cout << "Nilai Absen : "; cin >> nilaiabsen[i];
        cout << "Nilai Tugas : "; cin >> nilaitugas[i];
        cout << "Nilai UTS : "; cin >> nilaiuts[i];
        cout << "Nilai UAS : "; cin >> nilaiuas[i]; cout << endl;
    }

    clrscr();  // Clear the screen before showing the output

    cout << "                           DATA NILAI MAHASISWA STMIK MERCUSUAR" << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "NIM       Nama Mahasiswa  Nilai Absen  Nilai Tugas  Nilai UTS  Nilai UAS  Nilai Akhir" << endl;

    for (int i = 1; i <= jml_data; i++) {
        float nilai_akhir = (nilaiabsen[i] * 0.10) + (nilaitugas[i] * 0.20) + (nilaiuts[i] * 0.30) + (nilaiuas[i] * 0.50);
        gotoxy(1, wherey()); cout << nim[i];
        gotoxy(11, wherey()); cout << namamahasiswa[i];
        gotoxy(27, wherey()); cout << nilaiabsen[i];
        gotoxy(40, wherey()); cout << nilaitugas[i];
        gotoxy(53, wherey()); cout << nilaiuts[i];
        gotoxy(64, wherey()); cout << nilaiuas[i];
        gotoxy(75, wherey()); cout << nilai_akhir << endl;
    }

    getche();
    return 0;
}

