#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    const int N = 12000;
    vector<int> primes;
    for (int i = 2; i <= N; i++){
    	if (isPrime(i)) primes.push_back(i);
	}
    int cnt = 0;
    for (int i = 0; i < primes.size(); i++){
    	for (int j = i + 1; j < primes.size(); j++) {
            int pq = primes[i] * primes[j];
            if (pq > N) break;
            for (int k = j + 1; k < primes.size(); k++) {
                int pqr = pq * primes[k];
                if (pqr > N) break;
                cnt++;
            }
        }
	}
    cout << cnt;

}
