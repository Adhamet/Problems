#include <bits/stdc++.h>

using namespace std;
#define adhamet ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define lld long long double
#define intPair pair<int,int>
#define llPair pair<ll,ll>
#define ldPair pair<lld,lld>

 
int main() 
{
    /*
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
    #endif
    */
    
    adhamet;
    
    int a,b,c,result;
    cin >> a >> b >> c;

    result = max( max((a+b*c), (a*(b+c))), max(a*b*c, ((a+b)*c)));
    result = max(result, max(a*b+c, a+b+c));
    cout << result;
	return 0;
}
