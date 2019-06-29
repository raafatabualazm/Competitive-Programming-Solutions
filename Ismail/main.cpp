#include <bits/stdc++.h>

#define fr(i, n)    for(int i=0; i<(int)n; ++i)
#define rfr(i, n)   for(int i=(int)n-1; i>=0; --i)
#define foor(i,a,n) for(int i=a; i<=(int)n; ++i)
#define rfoor(i,n,a)for(int i=(int)n; i>=a; --i)
#define foru(it, v) for(auto it : v)
#define si(n)       scanf("%d", &n)
#define si2(n,m)    scanf("%d%d", &n, &m)
#define si3(n,m,l)  scanf("%d%d%d", &n, &m, &l)
#define sl(n)       scanf("%lld", &n)
#define sl2(n,m)    scanf("%lld%lld", &n, &m)
#define sl3(n,m,l)  scanf("%lld%lld%lld", &n, &m, &l)
#define sd(n)       scanf("%lf", &n)
#define sld(n)      scanf("%Lf", &n)
#define sc(n)       scanf(" %c", &n)
#define sstr(n)     scanf("%s", n)
#define pi(n)       printf("%d\n", n)
#define pis(n)      printf("%d ", n)
#define pi2(n,m)    printf("%d %d\n", n, m)
#define pi3(n,m,l)  printf("%d %d %d\n", n, m, l)
#define pl(n)       printf("%lld\n", n)
#define pls(n)      printf("%lld ", n)
#define pl2(n,m)    printf("%lld %lld\n", n, m)
#define pl3(n,m,l)  printf("%lld %lld %lld\n", n, m, l)
#define pd(n)       printf("%.20lf\n", n)
#define pd2(n,m)    printf("%.20lf %.20lf\n", n, m)
#define pd3(n,m,l)  printf("%.20lf %.20lf %.20lf\n", n, m, l)
#define pld(n)      printf("%.20Lf\n", n)
#define pld2(n,m)   printf("%.20Lf %.20Lf\n", n, m)
#define pld3(n,m,l) printf("%.20Lf %.20Lf %.20Lf\n", n, m, l)
#define pc(n)       printf("%c", n)
#define pstr(n)     printf("%s\n", n)
#define ff          first
#define ss          second
#define all(v)      v.begin(), v.end()
#define sz          size()
#define pub         push_back
#define pob         pop_back()
#define mmst(a, n)  memset(a, n, sizeof a);
#define OO          0x3f3f3f3f
#define OOLL        0x3f3f3f3f3f3f3f3f
#define MOD         1000000007
#define ndl         "\n"
#define fastin      ios::sync_with_stdio(false); cin.tie(NULL);
#define infile      freopen("input.txt", "r", stdin);
#define outfile     freopen("output.txt", "w", stdout);
#define PNO         printf("NO\n")
#define PYES        printf("YES\n")
#define pno         printf("No\n")
#define pyes        printf("Yes\n")
#define pln         printf("\n")

using namespace std;

typedef long long lld;
typedef long double Ld;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef vector<int> vii;
typedef vector<long long> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<pair<long long , long long>> vpll;

const int N = 2e5 + 5;

lld t, id, n, m, x, y, k, c, p, dif, ans, sum, pre, rem, cur, tmp, tot, r, l, u, d, xx, yy;
lld a[N], vis[N], f[N], b[N], cu[N];
bool fl, ok;
vll v, adj[N], primes, fin, seq;
vector<char> res;
lld p1, p2;

bitset<N> pr;
void sieve(){
    pr.set();
    pr[0] = pr[1] = 0;
    for(lld i=2; i*i<N; ++i){
        if(!pr[i]) continue;
        //primes.push_back(i);
        for(lld j=i*i; j<N; j+=i)
            pr[j] = 0;
    }
}

void calc(lld p){
    vll tmp;
    tmp.push_back(p);
    //pis(p);
    foru(it, seq){
        if(it % p){
            //pl2(it, p);
            return;
        }
        p = it / p;
        tmp.push_back(p);
        //pis(p);
    }
//pln;
    v = tmp;
    primes = tmp;
}

int main()
{
    //infile;
    //outfile;
    //fastin;
    sieve();

    sl(t);
    while(t--){
        primes.clear();
        v.clear();
        fin.clear();
        seq.clear();
        sl2(n, m);
        sl(x);
        seq.push_back(x);
        foor(i, 2, N-1){
            if(pr[i] && !(x % i)){
                p1 = i;
                p2 = x / i;
                break;
            }
        }
        //pl2(p1, p2);
        foor(i, 1, m-1){
            sl(x);
            seq.push_back(x);
        }

        calc(p1);
        calc(p2);

        printf("Case #%d: ", ++id);

        sort(all(primes));
        foru(it, primes){
            if(fin.empty() || fin.back() != it) fin.push_back(it);
            //pis(it);
        }

        foru(it, v){
            pc('A' + (lower_bound(all(fin), it) - fin.begin()));
        }
        pln;

    }
    return 0;
}
