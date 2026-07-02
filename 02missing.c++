/*-----------------------------------------
 * author:advikkaushik478
 ------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n;
    long long a=0;
    cin>>n;
    long long sum = n*(n+1) /2; 
    for(int i=n-1;i>0;i--){
        long long x;
        cin>>x;
        a+=x;
    }
        
    cout<<sum-a;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}
