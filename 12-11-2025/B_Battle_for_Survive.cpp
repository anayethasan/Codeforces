#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> ar(n);  
        for (int i = 0; i < n; i++) cin >> ar[i];

        for (int i = 0; i < n - 2; i++) {
            ar[n - 2] -= ar[i]; 
        }

        cout << ar[n - 1] - ar[n - 2] << '\n'; 
    }
    return 0;
}
