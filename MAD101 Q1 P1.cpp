#include <bits/stdc++.h>
using namespace std;

bool thuocTapA(int n) {
    return ((1LL * n * n + 7LL * n + 6) % 21 == 0);
}

int main() {
    int dem = 0;
    for (int i = 0; i <= 12000; i++) {
        if (!thuocTapA(i)) dem++;
    }
    cout<< dem;
}