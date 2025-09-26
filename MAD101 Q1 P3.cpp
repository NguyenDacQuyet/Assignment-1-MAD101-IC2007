#include <iostream>
#include <vector>
using namespace std;

bool tapC(int n) {
    int cnt = 0;
    for (int p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            cnt++;
            while (n % p == 0) n /= p;
        }
    }
    if (n > 1) cnt++;
    return cnt == 3;
}

int main() {
    vector<int> v;
    for (int i = 0; i <= 12000; i++){
	    if (tapC(i)) v.push_back(i);
	}

    cout << v[119];

}
