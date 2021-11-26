#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define pb push_back
#define pf push_front
#define eb emplace_back
#define loop(i, n) for (ll i = 0; i < (n); i++)
#define FOR(i, a, b) for (ll i = (a); i <= (b); i++)
#define FORD(i, a, b) for (ll i = (a); i >= (b); i--)
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
/******READER******/
template <typename... T>
void read(T &...args) {
((cin >> args), ...);
}
/******DEBUGGER******/
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template <typename... Args>
void logger(string vars, Args &&...values)
{
    cout << vars << " = ";
    string delim = "";
    (..., (cout << delim << values, delim = ", "));
}
/*--------------------------------------------------*/
int main()
{
    fastread();
    ll n;cin>>n;
    ll arr[n][3];
    loop(i,n){
        loop(j,3){
            cin>>arr[i][j];
        }
    }
    ll ans=0,counter=0;
    loop(i,n){
        counter=0;
        loop(j,3){
            if(arr[i][j] == 1){counter++;}
        }
        if(counter >= 2){ans++;}
    }
    cout<<ans<<endl;
    
    return 0;
}
