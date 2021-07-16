#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define MP make_pair
#define PB push_back
typedef long double ld;
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define rf(i, a, b) for (ll i = a; i >= b; i--)
typedef std::vector<long long> vi;
#define mod 1000000007
#define PI 3.14159265358979323846
#define all(a) a.begin(), a.end()
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
const ll INF = LLONG_MAX / 2;
#define logarr(arr,a,b) for(int i=a;i<b;i++) cout<<arr[i]
#define print_vector(a) for(int i=0;i<a.size();i++) cout<<a[i];
#define fi first
#define se second
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<PII> VPII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
ll gcd(ll a, ll b){ while (b){ a %= b; swap(a, b);} return a;}
#define print_array(a) for(int i=0;i<n;i++)  cout<<a[i]<<
;
#define precise_impact cout<<setprecision(10)<<fixed;
long long int inverse(long long int i){
if(i==1) return 1;
return (mod - ((mod/i)*inverse(mod%i))%mod+mod)%mod;}
ll lcm(ll a, ll b){ return (a/gcd(a, b)*b);}
ll ncr(ll a, ll b){ ll x = max(a-b, b), ans=1; for(ll K=a, L=1; K>=x+1; K--, L++){ ans = ans * K; ans /= L;} return ans;}
ll bigmod(ll a,ll b){ if(b==0){ return 1;} ll tm=bigmod(a,b/2); tm=(tm*tm)%mod; if(b%2==1) tm=(tm*a)%mod; return tm;}
ll egcd(ll a,ll b,ll &x,ll &y){ if(a==0){ x=0; y=1; return b;} ll x1,y1; ll d=egcd(b%a,a,x1,y1); x=y1-(b/a)*x1; y=x1; return d;}
/*think before writing the code always !! , it save much more time , than writing without thinking */

int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout<<"fnvnei";

 return 0;
}