/*-----------------------------------------
 * author:advikkaushik478
 ------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin>>s;
    s+="#";

    int n= s.length();
    int ans=0;
    int bloc=0;
    for(int i=0;i<n;i++){
        if(i!=0 && s[i]==s[i-1]){
            bloc++;
        }else{
            ans=max(ans,bloc);
            bloc=1;
        }
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}
