
#include <iostream>
#include <string>
using namespace std;

class Orang {
public:
	string nama;

	Orang(string pNama) :nama(pNama) {
		cout << "Orang dibuat\n" << endl;
	}
	~Orang() {
		cout << "Orang dihapus\n" << endl;
	}
	int jumlah(int a, int b) {
		return a + b;
	}
};

class Pelajar : public Orang {		//Ini menunjukkan bahwa Pelajar mewarisi dari Orang.
public:
	string sekolah;

	Pelajar(string pNama, string pSekolah) : Orang(pNama), sekolah(pSekolah) {
		cout << "Pe;ajar dibuat\n" << endl;
	}
	~Pelajar() {
		cout << "Pelajar dihapus\n" << endl;
	}
	string Perkenalan() {
		return "Halo, nama saya" + nama + "dari sekolah" + sekolah + "\n\n";
	}
};

int main() 
{
	Pelajar siswa1("andi laksono", "SMAN 1Bantul");
	cout << siswa1.Perkenalan();
	cout << "Hasil = " << siswa1.jumlah(10, 90) << endl;

	return 0;
}