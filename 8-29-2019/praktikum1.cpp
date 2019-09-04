#include <iostream>
#include<bits/stdc++.h> 

using namespace std;

// Membuat Structure pasien
struct pasien {
	string namaPasien;
	string jenisPenyakit;
	string dokter;
	string ruangPasien;
};

// Deklarasi Nama Dokter
string namaDokter[4] = {"UTRODUS", "SUGIARTO", "DEFY", "WILDAN"};


// Membuat variable untuk struct
pasien data[50];
int noPasien = 0;
bool cekNama = true;
string dokter;
char jawab;



int inputData() {
	for(int i=noPasien; i<50; i++) {
		cout << "Masukkan Nama Pasien \t: ";
		cin >> data[noPasien].namaPasien;
		cout << "Masukkan Jenis Penyakit : ";
		cin >> data[noPasien].jenisPenyakit;
		cout << "Masukkan Ruang Pasien \t: ";
		cin >> data[noPasien].ruangPasien;

		while(cekNama) {
			cout << "\nMasukkan Nama Dokter \t: ";
			cin >> dokter;
			
			// Menggunakan bantuan fungsi transform() dan ::toupper in STL untuk merubah isi variable dokter menjadi huruf besar semua
			transform(dokter.begin(), dokter.end(), dokter.begin(), ::toupper);

			if(dokter == namaDokter[0] || dokter == namaDokter[1] || dokter == namaDokter[2] || dokter == namaDokter[3]) {
				data[noPasien].dokter = dokter;
				cekNama = false;
			} else {
				cout << "Maaf Nama Dokter yang Anda Masukkan tidak Valid !\n";
			}
		}

		cout << "Apakah Anda Ingin Menambah Data ? (y/t) : ";
		cin >> jawab;
		cout << endl;
		if(jawab == 'y' || jawab == 'Y') {
			noPasien++;
			cekNama = true;
		} else if(jawab == 't' || jawab == 'T') {
			break;
		};
	}

}

int tampilkanData() {
	cout << "Data Pasien Rumah Sakit : \n\n";
	cout << "No Pasien\tNama Pasien\tJenis Penyakit\tNama Dokter\tRuang Pasien \n";

	for (int i=0; i<=noPasien; i++) {
		cout << "  " << (i+1) << ".\t\t" << data[i].namaPasien << "\t\t" << data[i].jenisPenyakit << "\t\t" << data[i].dokter << "\t\t" << data[i].ruangPasien <<endl;
	}
}

int main() {
	cout << " === Selamat Datang di Program Data pasien Rumah Sakit ===\n\n";
	inputData();
	tampilkanData();
}
