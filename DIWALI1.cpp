#include<bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<ll> vll;

#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define sf(x) scanf("%f",&x)
#define ss(x) scanf("%s",x)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define pf(x) printf("%f\n",x)
#define ps(x) printf("%s\n",x)
#define PI 3.14

const ll MOD = 1e9+7;
ll lcm (ll a,ll b){
    ll a0=a;
    ll b0=b;
    return a0*b0/__gcd(a0,b0);
}

const ll MAX_SIZE = 1000001;
vll isprime(MAX_SIZE,true);
vll prime;
vll SPF(MAX_SIZE);

void manipulated_sieve(int N){
    isprime[0] = isprime[1] = false;
    for(ll i=2;i<N;i++){
        if(isprime[i]){
            prime.push_back(i);
            SPF[i]=i;
        }
        for(ll j=0; j<(int)prime.size() && i*prime[j] < N && prime[j] <= SPF[i];j++){
            isprime[i*prime[j]]=false;
            SPF[i*prime[j]] = prime[j];
        }
    }
}


int main()
{
    FAST
    
    int t;cin>>t;
    while(t--)
    {
        // Your Code goes here
        long long int p,a,b,c,x,y;
        cin>>p>>a>>b>>c>>x>>y;
        long long int anar = p/((x*a)+b);
        long long int chakri = p/((y*a)+c);
        cout<<max(anar,chakri)<<endl;
    }
}