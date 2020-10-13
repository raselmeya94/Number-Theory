/*____________________________________

           CODE IS LIFE <@_@>
____________________________________*/

#include <bits/stdc++.h>
#define ll  long long
#define ull unsigned long long
#define fai(i,a)       for(ll i=0; i<a; i++)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define mxe(a,n)   (*max_element(a,a+n))
#define mne(a,n)   (*min_element(a,a+n))
#define vec  vector< int >
#define vv vector< vi >
#define vll vector< ll >
#define pii pair< int , int >
#define pll pair< ll , ll >
#define vpi vector< pii >


///...Other Operations...///
#define pi         2.0*acos(0.0)
#define eps        1e-11
#define sqr(n)     n*n
#define all(a)     a.begin(),a.end()
#define nl         "\n"
#define check      P("here\n")
#define gch        getchar()
#define pb         push_back
#define pp         pop_back
#define sz()       size()
#define SUM(a,n)   accumulate(a,a+n,0)
#define fin  freopen( "input.txt", "r", stdin );
#define fout  freopen( "output.txt", "w", stdout );
#define Dpos(n)    fixed<<setprecision(n)
#define w(t)        cin>>t; while(t--)
#define count_bit(n)      __builtin_popcount(n)

///...define mathematics...///
#define INF (int)1e10
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MAX 1000

using namespace std;

///..................... Greastet Common Divisor..........................//

///Naive Approach................................. Time complexity is O(min(A,B)).
int GCD_of_Naive(int A, int B){
 int i , gcd;
  int m = min(A,B);
  for(i=1; i<=m; i++){
    if(A%i==0   && B%i==0)gcd=i;
  }
  return gcd;
}
///Euclid’s Algorithm..............................Time complexity is O(log(max(A, B))).
int  GCD_of_Euclid(int A, int B){

    if ( B==0)return A;
    else return GCD_of_Euclid(B , A%B);
}



int main()
{


  int A , B ;
  cin>>A>>B ;
  int gcdOfAB= GCD_of_Euclid(A,B);
  cout<<gcdOfAB<<nl;
    // Alhamdulillah..
}
