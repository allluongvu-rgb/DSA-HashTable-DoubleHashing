#include <iostream>
#include <vector>
using namespace std;

#define MAXTABLESIZE 10000

struct Hashtable {
    int M;
    int n;
    int *table;
};

void InitHashTable(Hashtable &ht, int M) {
    ht.table = new int[M];
    for (int i = 0; i < M; i++) {
        ht.table[i] = -1;
    }
    ht.M = M;
    ht.n = 0;
}


int HF(int key, int M) {
    return key % M;
}


int H2(int key) {
    return 8 - (key % 8);
}


int HF_DoubleHashing(int key, int M, int i, int f) {
    return (HF(key, M) + i * f) % M;
}


void FindCollidedKeys(Hashtable &ht) {
    int M;
    if (!(cin >> M)) return;

    InitHashTable(ht, M);

    int x;
    vector<int> collided_keys;

    while (cin >> x && x != -1) {
        int idx = HF(x, ht.M);


        if (ht.table[idx] != -1) {
            collided_keys.push_back(x);


            int step = H2(x);
            int i = 1;
            while (i < ht.M) {
                int new_idx = HF_DoubleHashing(x, ht.M, i, step);
                if (ht.table[new_idx] == -1) {
                    ht.table[new_idx] = x;
                    ht.n++;
                    break;
                }
                i++;
            }
        }
        else {

            ht.table[idx] = x;
            ht.n++;
        }
    }


    if (collided_keys.empty()) {
        cout << "Empty" << endl;
    } else {
        for (int i = 0; i < collided_keys.size(); i++) {
            cout << collided_keys[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    Hashtable H;

    FindCollidedKeys(H);

    if (H.table != NULL) {
        delete[] H.table;
    }

    return 0;
}
