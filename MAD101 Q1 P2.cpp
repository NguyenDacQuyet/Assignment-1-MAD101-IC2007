#include <bits/stdc++.h>
using namespace std;

bool tapA(int n) {
    return ((1LL * n * n + 7LL * n + 6) % 21 == 0);
}

int main() {
    vector<int> tap;
    for (int i = 0; i <= 12000; i++) {
        if (tapA(i)) tap.push_back(i);
    }
    if (tap.size() >= 120)
        cout<< tap[119];
}