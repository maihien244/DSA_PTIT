#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i < r; ++i)
#define FORD(i, l, r) for(int i = r; i >= l; --i)

using namespace std;

int n, w;
int f = 0, g ;
int t[100];
vector<pair<int, int>> XOPT;
pair<int, int> x[100];
int FOPT = -1e9;

bool cmp(pair<int, int> a, pair<int, int> b) {
     return (float)a.first/a.second > (float)b.first/b.second;
}

void Try(int i, int f, double g, int b) {
          FOR(j, 0, 2) {
               t[i] = j;
               f += x[i].first*t[i];
               b -= x[i].second*t[i];
               // cout << f << " ";
               if(i != n-1) {
                    g = f + b*((float)x[i+1].first/x[i+1].second);
                    if(g > FOPT && b >= 0) {
                         // cout << x[i].first << " " <<x[i].second << " "<< g << " " << FOPT << endl;
                         Try(i+1, f, g, b);
                    }
               } else {
                    if(f > FOPT && b >= 0) {
                         FOPT = f;
                         FOR(j, 0, n) {
                              FOR(l, 0, n) {
                                   if(XOPT[l].first == x[j].first) {
                                        XOPT[l].second = t[j];
                                   }
                              }
                         }
                    }
                    
               }
          }
}

int main() {
     fstream file("data.in");
     file >> n >> w;
     XOPT.resize(n);
     FOR(i, 0, n) {
          file >> x[i].first;
          XOPT[i].first = x[i].first;
          XOPT[i].second = x[i].second;
     }
     FOR(i, 0, n) file >> x[i].second;
     sort(x, x+n, cmp);
     // FOR(i, 0, n) {
     //      cout << x[i].first << " " <<x[i].second << endl;
     // }
     Try(0, 0, 0, w);
     cout << FOPT << endl;
     FOR(i, 0, n) cout << XOPT[i].second << " ";
     cout << endl;
}