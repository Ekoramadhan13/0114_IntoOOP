#include <iostream>
using namespace std;

class mahasiswa {
	public: // akses modifier
		string nama;
		int umur;
		string jurusan;

		void output() {
			cout << "Nama: " << endl;
			cout << "Umur: " << endl;
			cout << "Jurusan: " << endl;
		}

};


class matakuliah {
	private:
		string kodeMK;
		string namaMK;
		int sks;
	public:
		void input() {
			cout << "Kode MK: ";
			cin >> kodeMK;
			cout << "nama MK: ";
			cin >> namaMK;
			cout << "SKS: ";
			cin >> sks;
		}
};