/*____________________________________
 
           CODE IS LIFE <@_@>
____________________________________*/

#include <bits/stdc++.h>
#include <cstdio>
#include <cmath>
#include <set>
#include<stack>
#include<array>
#include<string>
#include <numeric>
#define ll long long
#define ull unsigned long long
#define fai(i, a) for (ll i = 0; i < a; i++)
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define mxe(a, n)( * max_element(a, a + n))
#define mne(a, n)( * min_element(a, a + n))
#define vec vector < int >
#define vv vector < vi >
#define vll vector < ll >
#define pii pair < int, int >
#define pll pair < ll, ll >
#define vpi vector < pii >

///...Other Operations...///
#define pi 2.0 * acos(0.0)
#define eps 1e-11
#define sqr(n) n * n
#define all(a) a.begin(), a.end()
#define nl "\n"
#define check P("here\n")
#define gch getchar()
#define pb push_back
#define pp pop_back
#define sz() size()
#define SUM(a, n) accumulate(a, a + n, 0)
#define fin freopen("input.txt", "r", stdin);
#define fout freopen("output.txt", "w", stdout);
#define Dpos(n) fixed << setprecision(n)
#define w(t) cin >> t; while (t--)

#define count_bit(n) __builtin_popcount(n)

///...define mathematics...///
#define INF(int) 1e10
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MAX 1000

using namespace std;
/*
   when a number is only divisible by 1 and own then its called prime number.
   we known that prime number are: 2 3 5 7 11 13 17 19 ........
   thats mean  1 4 6 8 9 10 12 14 15..... are not prime number.
 */
const ll N = 1e6 + 1;

bitset < N + 1 > bs;
vector < ll > prime;
void sieveOfEratosthenes() {
  bs.set();
  bs[0] = bs[1] = 0;
  for (ll i = 2; i < N; ++i) {
    if (bs[i]) {
      prime.push_back(i);
      for (ll j = i * i; j < N; j += i) bs[j] = 0;
    }
  }
  return;
}

int main() {
  sieveOfEratosthenes();
  int n;
  cin >> n;
  cout<<"All prime number from 1 to "<<n<<" : "<<endl;
  for(auto p: prime){
  	if(p<=n)cout<<p<<" ";
  	else break;
  }
}