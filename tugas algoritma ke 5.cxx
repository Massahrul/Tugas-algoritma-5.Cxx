/*
Nama program : Latihan02.cpp
Dibuat tanggal : 5 Februari 2015
Fungsi Program : menggunakan variabel
Dibuat oleh : nama mahasiswa
*/
#include <iostream.h>
#include <conio.h>
char nama[30];
char Alamat[30];
int nilai1;
int nilai2;
float rata;
int main ()
{
clrscr();
strcpy(nama, "Muhamad imam sahrul badarudin");
strcpy(Alamat, "Jl.projosumarto 2");
nilai1 = 90;
nilai2 = 95;;
//cetak data...........................
cout << "Data Mahasiswa" << endl;
cout << "=============================" << endl;
cout << "1. Nama : " << nama << endl;
cout << "2. Alamat : " << Alamat << endl;
cout << "3. Nilai1 : " << nilai1 << endl;
cout << "4. Nilai2 : " << nilai2 << endl;
rata = (nilai1 + nilai2)/2;
cout << "5. Rata-rata : " << rata << endl;
cout << "=============================" << endl;
getch();
return 0;
}