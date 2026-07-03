/*-----------------------------------------
 * author:advikkaushik478
 ------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long a,b;
    cin>>a>>b;
    
    ((a+b)%3==0 && a<=2*b&&b<=2*a)?cout<<"YES"<<"\n":cout<<"NO"<<"\n";
} 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

