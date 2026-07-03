/*-----------------------------------------
 * author:advikkaushik478
 ------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    
    int n;
    cin>>n;

    vector<int> a,b;

    int i = n;
     while(i>0){
        if(i!=n)
            a.push_back(i--);
        if(i==0)
            break;
        a.push_back(i--);
        b.push_back(i--);
        b.push_back(i--);

     }

     if(accumulate(a.begin(), a.end(), 0)==accumulate(b.begin(), b.end(), 0)){
       
        cout<<"YES"<<"\n";
        cout<<a.size()<<"\n";
        for(int i :a){
            cout<<i<<" ";

        }
        cout<<"\n";
        cout<<b.size()<<"\n";
        for(int i :b){
            cout<<i<<" ";

        }
     }else{
        cout<<"NO";

     }

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}
