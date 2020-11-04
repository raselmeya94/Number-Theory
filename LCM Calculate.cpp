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
   Least Common Multiple (LCM) calculate...........
  for example : a=20 , b=30
    now , a= 2*2*5
          b= 2*3*5 
     so, lcm is =  2*2*3*5  [ (multiplier of a == multiplier of b ) then get one time's  (2,2)=2, (5,5)=5]
     lcm= 60
     
     now another approach....
     
     a=20, b=30;
     
     at first find gcd of a and b
     
     gcd = GCD(20,30)
     gcd= 10;
     
     
     now, lcm = (a/gcd)*b
              = 20/10 * 30
              = 2 * 30
              = 60
 
    so, best efficient approach  for  LCM = a/GCD(a,b)*b ;
    
 
 
 */
 
 ll GCD(ll a,ll b){
 	
 	if(b==0)return a;
 	return GCD(b, a%b);
 }
 ll LCM(ll a, ll b){
 	
 	return (a/GCD(a,b))*b;
 }
 
int main() {
    ll a,b;
    cin>>a>>b;
    ll ans= LCM(a,b);
    cout<<ans;
    
}