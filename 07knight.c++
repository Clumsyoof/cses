/*-----------------------------------------
 * author:advikkaushik478
 ------------------------------------------*/
#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){   
    long long size= i*i;
    long long total=size*(size-1) /2;
    long long bad =0;
 
    bad +=8*(size-(8*i) +16);
    bad += 4*(4*(i-3));
    bad += 6*(4*(i-4));
    bad += 24;
    bad += 8;
    cout<<total-(bad/2)<<"\n";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
   solve();
    return 0;
}
 
