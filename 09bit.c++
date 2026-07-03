/*-----------------------------------------
 * author:advikkaushik478
 ------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    long long ans=1;
    
    for(int i=0;i<n;i++){
        ans=(ans*2)%(long long)(1e9+7);
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}

