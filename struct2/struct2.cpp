#include <iostream>
using namespace std;

// ceate struct for mahasiswa
struct DetaliAlamat {
	string desa;
	string kota;

};
// ceate struct for mahasiswa
struct mahasiswa {
	string NIM;
	string Nama;
	DetaliAlamat Alamat;
	int Umur;
};

int main() {

	// define mahasiswa as mhs
	mahasiswa mhs;


	// input your data to struct
	cout << "masukan NIM = ";
	cin >> mhs.NIM;
	cout << "masukan Nama = ";
	cin >> mhs.Nama;
	cout << "Alamat " << endl;
	cout << "\tmasukan desa = ";
	cin >> mhs.Alamat.desa;
	cout << "\tmasukan Kota = ";
	cin >> mhs.Alamat.kota;
	cout << "masukan Umur = ";
	cin >> mhs.Umur;

	// display your data
	cout << "\nNIM :" << mhs.NIM;
	cout << "\nNama :" << mhs.Nama;
	cout << "\nAlamat :" << endl;
	cout << "\tdesa :" << mhs.Alamat.desa;
	cout << "\n\tkota :" << mhs.Alamat.kota;
	cout << "\nUmur :" << mhs.Umur;

}