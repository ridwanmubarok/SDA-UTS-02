// library yang dibutuhkan
#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <iomanip>
using namespace std;

// program utama
int main(){

    // membuat map menu
    map<string,double> menu = {
        {"Soto",15000},
        {"Rawon",20000},
        {"Pecel",10000},
        {"Bakso",12500},
        {"Siomay",25000},
    };

    // mengambil input dari user
    string input_user;
    cout << "Isikan Makanan yang dipesan : ";
    getline(cin,input_user);

    // mengambil input dari user dan melakukan pengecekan terhadap input user
    istringstream iss(input_user);
    string makanan;

    // Pendeklarasian  Variable Total dan jumlah yang akan dihitung
    int jumlah;
    double total = 0;

    // Pendeklarasian map pesanan
    map<string,int> pesanan;

    // melakukan pengecekan dan perhitungan jika ada makanan yang sesuai dengan menu
    while (iss >> makanan >> jumlah){
        // kondisi jika makanan sesuai dengan menu
        if(menu.find(makanan) != menu.end()){
            // menambahkan makanan dan jumlah ke dalam map pesanan
            pesanan[makanan] = jumlah;
        }else{ 
            // jika makanan tidak sesuai dengan menu
            cout << "Makanan " << makanan << " tidak terseedia dalam menu." << endl;
            return 0; // mengakhiri program jika makanan tidak tersedia sesuai menu
        }
    }

    cout << "\nTotal Harga : " << endl;

    // melakukan perhitungan dan menampilkan pesanan beserta harga
    for (const auto& order : pesanan) {
        // menampilkan pesanan beserta harga
        double price = menu[order.first] * order.second;
        // menambahkan harga makanan sesuai jumlah yang diinput user
        total += price;
        // menampilkan pesanan beserta harga
        cout << "  " << order.first << " @"
             << fixed << setprecision(0) << menu[order.first]
             << " * " << order.second << " = " 
             << fixed << setprecision(0) << price << endl;
    }
    cout << "Total = " << fixed << setprecision(0) << total << endl;
    return 0;

    // program ini dibuat dengan mengambil input dari user dan melakukan pengecekan terhadap input user
    // jika ada makanan yang sesuai dengan menu maka akan menambahkan makanan dan jumlah ke dalam map pesanan
    // jika tidak sesuai dengan menu maka akan menampilkan pesanan tidak tersedia dalam menu
    // setelah itu akan menampilkan pesanan beserta harga
}

// setprecision digunakan untuk menentukan jumlah angka di belakang koma
// setprecision(0) berarti hanya menampilkan angka integer
// fixed digunakan untuk menampilkan angka yang dihasilkan agar tidak ada komanya