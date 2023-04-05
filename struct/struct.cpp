#include <iostream>
using namespace std;


// ceate struct for mahasiswa
struct mahasiswa {
	string NIM;
	string Nama;
	string Alamat;
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
	cout << "masukan Alamat = ";
	cin >> mhs.Alamat;
	cout << "masukan Umur = ";
	cin >> mhs.Umur;

	// display your data
	cout << "\nNIM :" << mhs.NIM;
	cout << "\nNama :" << mhs.Nama;
	cout << "\nAlamat :" << mhs.Alamat;
	cout << "\nUmur :" << mhs.Umur;

}