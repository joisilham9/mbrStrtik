#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public: 
	static int nim;
	int id;
	string nama;

	void setID();
	void printAll();
	mahasiswa(string pnama) :nama(pnama) { setID(); }

};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("lia kurnia");
	mahasiswa mhs2("mamat");
	mahasiswa mhs3("andi kopling");
	mahasiswa mhs4("joko");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();
	return 0;
}

