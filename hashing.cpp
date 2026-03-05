#include <iostream>
using namespace std;

#define SIZE 10

class HashTable {
    int table[SIZE];

public:
    HashTable() {
        for(int i = 0; i < SIZE; i++)
            table[i] = -1;
    }

    int hashFunction(int key) {
        return key % SIZE;
    }

    void insert(int key) {
        int index = hashFunction(key);

        while(table[index] != -1) {
            index = (index + 1) % SIZE;
        }

        table[index] = key;
        cout << "Element " << key << " inserted at index " << index << endl;
    }

    void display() {
        cout << "Hash Table:\n";
        for(int i = 0; i < SIZE; i++) {
            cout << i << " --> " << table[i] << endl;
        }
    }
};

int main() {
    HashTable h;

    h.insert(10);
    h.insert(22);
    h.insert(31);
    h.insert(4);
    h.insert(15);
    h.insert(28);

    h.display();

    return 0;
}
