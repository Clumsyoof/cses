/*-----------------------------------------
 * author:advikkaushik478
 ------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long answer=0;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            answer+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }
   cout<<answer<<"\n"; 

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}
