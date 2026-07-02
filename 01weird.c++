/*-----------------------------------------
 * author:advikkaushik478
 ------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n;
    cin>>n;

    while(n>1){
        cout<<n<<" ";
        (n%2==0)?n/=2:n=n*3 +1;
    }
    cout<<1<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}
