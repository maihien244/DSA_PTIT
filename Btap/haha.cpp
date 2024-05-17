#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], x[100];
void Try(int i, int bd, int sum){
     for(int j = bd; j <= n; j++){
          x[i] = a[j];
     if(sum + a[j] == k){
          cout <<'[';
          for(int u = 1; u <= i; u++){
               cout << x[u] <<" ";
          }
          cout << ']';
          cout << endl;
     }
     else if(sum + a[j] < k){
          Try(i+1, j+1, sum + a[j]);
     }
     }
}
int main(){
     cin >> n >> k;
     for(int i = 1; i <= n; i++){
          cin >> a[i];
     }
     sort(a, a+n);
     Try(1,1,0);
     return 0;
}