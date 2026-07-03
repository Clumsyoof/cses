/*-----------------------------------------
 * author:advikkaushik478
 ------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n;
    cin>>n;
    int ans=0;
    while(n>=5){
        ans +=n/5;
        n/=5;
    }
    cout<<ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

