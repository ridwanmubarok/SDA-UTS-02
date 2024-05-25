#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int capacity = 5;

    // Operasi enqueue dan dequeue sesuai urutan
    if (q.size() < capacity) q.push(3);
    if (q.size() < capacity) q.push(7);
    if (!q.empty()) q.pop();
    if (q.size() < capacity) q.push(2);
    if (q.size() < capacity) q.push(4);
    if (q.size() < capacity) q.push(1);
    if (!q.empty()) q.pop();
    if (q.size() < capacity) q.push(6);
    if (!q.empty()) q.pop();
    if (q.size() < capacity) q.push(5);

    // Menampilkan isi queue
    cout << "Isi Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
