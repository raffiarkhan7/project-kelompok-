#include <iostream>
#include <string>
using namespace std;

class Anggota {
public:
    int id_anggota;
    string nama;
};

class Buku {
public:
    int id_buku;
    string judul;
};

class Petugas {
public:
    int id_petugas;
    string nama;
};

class Peminjaman {
public:
    int id_peminjaman;
    int id_anggota;
    int id_buku;
    int id_petugas;
    string tgl_pinjam;
};

int main() {
    Anggota A;
    Buku B;
    Petugas P;
    Peminjaman PM;

    cout << "Input Anggota:\n";
    cin >> A.id_anggota;
    cin.ignore();
    getline(cin, A.nama);

    cout << "Input Buku:\n";
    cin >> B.id_buku;
    cin.ignore();
    getline(cin, B.judul);

    cout << "Input Petugas:\n";
    cin >> P.id_petugas;
    cin.ignore();
    getline(cin, P.nama);

    cout << "Input Peminjaman:\n";
    cin >> PM.id_peminjaman;
    cin >> PM.id_anggota;
    cin >> PM.id_buku;
    cin >> PM.id_petugas;
    cin >> PM.tgl_pinjam;

    cout << "\n=== OUTPUT DATA ===\n";
    cout << "Anggota: " << A.id_anggota << " - " << A.nama << endl;
    cout << "Buku   : " << B.id_buku << " - " << B.judul << endl;
    cout << "Petugas: " << P.id_petugas << " - " << P.nama << endl;
    cout << "Pinjam : " << PM.id_peminjaman 
         << " | Anggota " << PM.id_anggota
         << " | Buku " << PM.id_buku
         << " | Petugas " << PM.id_petugas
         << " | Tgl " << PM.tgl_pinjam << endl;

    return 0;
}