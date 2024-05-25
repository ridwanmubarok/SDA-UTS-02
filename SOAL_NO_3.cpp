#include <iostream>
#include <stack>
using namespace std;

// Fungsi untuk membandingkan dua buah stack
bool cekDataStack(stack<int> stack1, stack<int> stack2) {
    // Cek apakah ukuran kedua stack sama
    if (stack1.size() != stack2.size()) {
        cout << "Stack 1 : " << stack1.size() << endl;
        cout << "Stack 2 : " << stack2.size() << endl;
        return false;
    }
    
    // Bandingkan elemen satu per satu
    while (!stack1.empty()) {
        if (stack1.top() != stack2.top()) {
            return false;
        }
        // menampilkan nilai yang sama
        stack1.pop(); // menghapus nilai yang sama
        stack2.pop(); // menghapus nilai yang sama

        cout << "Stack 1 : " << stack1.top() << "," << endl;
        cout << "Stack 2 : " << stack2.top() << "," << endl;
    }
    
    return true;
}

int main() {
    stack<int> stack1;
    stack<int> stack2;

    // stack pertama
    // memasukkan nilai ke stack pertama
    stack1.push(4);
    stack1.push(5);
    stack1.push(1);

    // stack kedua
    // memasukkan nilai ke stack kedua
    stack2.push(1);
    stack2.push(2);
    stack2.push(3);

    // Pengecekan apakah kedua stack memiliki nilai yang sama
    if (cekDataStack(stack1, stack2)) {
        cout << "Kedua stack memiliki nilai yang sama." << endl;
    } else {
        cout << "Kedua stack memiliki nilai yang berbeda." << endl;
    }

    return 0;
}