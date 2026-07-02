/*-----------------------------------------
 * author:advikkaushik478
 ------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;

    if(n!=2 && n!=3){   
    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
        }
     for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
     }
}else{
    cout<<"NO SOLUTION";
}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
  
    return 0;
}
