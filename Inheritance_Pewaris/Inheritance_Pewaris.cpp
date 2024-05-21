
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

int main()
{

}