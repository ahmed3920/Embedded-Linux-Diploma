/*
███╗░░░███╗██████╗░  ░██████╗░██╗░░░░░░█████╗░██████╗░██╗░░░██╗
████╗░████║██╔══██╗  ██╔════╝░██║░░░░░██╔══██╗██╔══██╗╚██╗░██╔╝
██╔████╔██║██████╔╝  ██║░░██╗░██║░░░░░██║░░██║██████╔╝░╚████╔╝░
██║╚██╔╝██║██╔══██╗  ██║░░╚██╗██║░░░░░██║░░██║██╔══██╗░░╚██╔╝░░
██║░╚═╝░██║██║░░██║  ╚██████╔╝███████╗╚█████╔╝██║░░██║░░░██║░░░
╚═╝░░░░░╚═╝╚═╝░░╚═╝  ░╚═════╝░╚══════╝░╚════╝░╚═╝░░╚═╝░░░╚═╝░░░
*/
#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
typedef long long int ll;
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rrep(i, a, b) for (ll i = a; i >= b; i--)
#define repe(i, a, b) for (ll i = a; i <= b; i++)
#define repi(it, x, i, k) for (__typeof((x).begin()) it = (x).begin(); it != (x).end() && i < k; it++, i++)
#define endl '\n'
#define sz(x) x.size()
#define cin(vec)        \
    for (auto &i : vec) \
        cin >> i;
#define cout(vec)         \
    for (auto i : vec)    \
        cout << i << " "; \
    cout << endl;
#define clr(x) memset((x), 0, sizeof(x))
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pq priority_queue
#define MOD 1000000007
#define PI 3.14159265
#define ii pair<int,int>
#define dbg(v) \
    cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
#define Glory                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using ull = unsigned long long int;
using dd = double;
using ldd = long double;
using namespace std;
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)


void solve(){
    string n{""};
    int sum{0};
    cin>>n;
    for (auto i : n) {
        sum+=i-'0';
    }
    cout<<sum<<endl;
}
int main(){
Glory
{
    solve();
}
}