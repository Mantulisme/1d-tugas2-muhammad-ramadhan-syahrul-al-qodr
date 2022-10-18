#include <iostream>
 using namespace std;

 int main() {
 float hasilnya,angka1,angka2,angka3,jumlah1;
 int p;
 cout<< "Pilihlah bangun datar dibawah ini yang akan dihitung luasnya dengan memasukkan angka dibawah." << endl;
 cout<< "1. Persegi" << endl;
 cout<< "2. Persegi Panjang"<< endl;
 cout<< "3. Lingkaran" << endl;
 cout<< "4. Trapesium" << endl;
 cout<< "5. Belah Ketupat" << endl;
 cout<< "6. Jajar Genjang" << endl;
 cout<< "7. Layang-Layang" << endl;
 cout<< "8. Segitiga" << endl;
 cout<< "9. Exit" << endl;
 cout<<"Bangun datar yang akan dihitung luasnya : ";
 cin>>p;

  if (p == 1)
  {
	cout << "Masukan angka sisi perseginya : ";
	cin >> angka1;
	hasilnya = angka1 * angka1;

	cout << "Luas Perseginya adalah " << hasilnya;
 }
 else if (p == 2)
 {
	cout << "Masukan angka sisi pertama : ";
	cin >> angka1;
	cout << "Masukan angka sisi kedua : ";
	cin >> angka2;
	hasilnya = angka1 * angka2;

	cout << "Luas Persegi panjangnya adalah " << hasilnya;
 }
 else if (p == 3)
 {
	cout << "Masukan angka jari jari lingkarang : ";
	cin >> angka1;
	hasilnya = 3.14 * angka1 * angka1;

	cout << "Luas lingkarannya adalah " << hasilnya;
 }
else if (p == 4)
 {
	cout << "Masukan angka sisi pertama : ";
	cin >> angka1;
	cout << "Masukan angka sisi kedua : ";
	cin >> angka2;
	cout << "Masukan angka tinggi trapesium : ";
	cin >> angka3;
	hasilnya = 0.5 * (angka1 + angka2) * angka3;

	cout << "Luas trapesiumnya adalah " << hasilnya;
 }
else if (p == 5)
 {
	cout << "Masukan angka diameter pertama : ";
	cin >> angka1;
	cout << "Masukan angka diameter kedua : ";
	cin >> angka2;
	hasilnya = 0.5 * angka1 * angka2;

	cout << "Luas belah ketupatnya adalah " << hasilnya;
 }
else if (p == 6)
 {
	cout << "Masukan angka alas : ";
	cin >> angka1;
	cout << "Masukan angka tinggi : ";
	cin >> angka2;
	hasilnya = angka1 * angka2;

	cout << "Luas jajar genjangnya adalah " << hasilnya;
 }
else if (p == 7)
 {
	cout << "Masukan angka diameter pertama : ";
	cin >> angka1;
	cout << "Masukan angka diameter kedua : ";
	cin >> angka2;
	hasilnya = 0.5 * angka1 * angka2;

	cout << "Luas layang-layangnya adalah " << hasilnya;
 }
else if (p == 8)
 {
	cout << "Masukan angka alas segitiga : ";
	cin >> angka1;
	cout << "Masukan angka tinggi segitiga : ";
	cin >> angka2;
	hasilnya = 0.5 * angka1 * angka2;

	cout << "Luas segitiganya adalah " << hasilnya;
 }
else if (p == 9)
 {
	return 0;
 }  else{
    cout<<"input tidak sesuai";
 }
  return 0;
}
