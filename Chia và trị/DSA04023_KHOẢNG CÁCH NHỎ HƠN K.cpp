#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a + n);
        ll res = 0;
        for(int i = 0; i < n; i++){
            res += lower_bound(a + i, a + n, k + a[i]) - a - i - 1;
        }
        cout << res << endl;
    }
}
/*

*/