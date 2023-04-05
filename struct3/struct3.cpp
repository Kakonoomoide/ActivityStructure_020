#include <iostream>
using namespace std;

// ceate struct for mahasiswa
struct DetaliAlamat {
	char desa[20];
	char kota[20];

};
// ceate struct for mahasiswa
struct mahasiswa {
	char NIM[12];
	char Nama[20];
	DetaliAlamat Alamat;
	int Umur;
};

int main() {

	// define mahasiswa as mhs
	mahasiswa mhs[3];

	for (int i = 0; i < 3; i++) {
		// input your data to struct
		cout << "\nmasukan NIM = ";
		cin.getline(mhs[i].NIM, 12);
		cout << "masukan Nama = ";
		cin.getline(mhs[i].Nama, 20);
		cout << "Alamat " << endl;
		cout << "\tmasukan desa = ";
		cin.getline(mhs[i].Alamat.desa, 20);
		cout << "\tmasukan Kota = ";
		cin.getline(mhs[i].Alamat.kota, 20);
		cout << "masukan Umur = ";
		cin >> mhs[i].Umur;
		cin.ignore(1, ' ');
	}

	for (int i = 0; i < 3; i++) {
		// display your data
		cout << "\nNIM :" << mhs[i].NIM;
		cout << "\nNama :" << mhs[i].Nama;
		cout << "\nAlamat :" << endl;
		cout << "\tdesa :" << mhs[i].Alamat.desa;
		cout << "\n\tkota :" << mhs[i].Alamat.kota;
		cout << "\nUmur :" << mhs[i].Umur;

	}
}