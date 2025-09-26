#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++){
    	if (n % i == 0) return false;
	}
    return true;
}

bool inC(int n) {
    vector<int> primes;
    for (int p = 2; p * p <= n; p++) {
        if (n % p == 0 && isPrime(p)) {
            primes.push_back(p);
            n /= p;
            while (n % p == 0) n /= p;
        }
    }
    if (n > 1) primes.push_back(n);
    return primes.size() == 3;
}

int main() {
    const int LIMIT = 12000;
    vector<int> BC;
    for (int i = 0; i <= LIMIT; i++){
    	if (inC(i)) BC.push_back(i);
	}
    cout << BC[119];
}