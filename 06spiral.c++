/*-----------------------------------------
 * author:advikkaushik478
 ------------------------------------------*/
#include <bits/stdc++.h>
 
using namespace std;
 
long long integer_pow(long long base, long long exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
 
void solve() {
    long long row,col;
    cin>>row>>col;
 
    long long layer = max(row,col);
   
    if(layer%2!=0){
        swap(row,col);
    }
    
    if(row>col){
        cout<<integer_pow(layer,2)-(col-1)<<"\n";
    }else{
         cout<<integer_pow(layer-1,2)+row<<"\n";
    } 
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
