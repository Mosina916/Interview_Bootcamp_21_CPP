#include<iostream>
#include<algorithm>
using namespace std;
#define MOD 998244353
#define ll long long

bool compare(ll a,ll b){
	return a>b;

}
int main(){
	int n;
	cin>>n;
	ll *a=new ll[n];
	ll *b=new ll[n];

	for (int i = 0; i <n; ++i)
	{
		cin>>a[i];
		a[i]=a[i]*(i+1)*(n-i);
	}


	for (int i = 0; i <n; ++i)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n,compare);
	ll ans=0;
	for (int i = 0; i <n; ++i)
	{
		// ans+=(a[i]*b[i])%MOD;//(a[i]%MOD *b[i]%MOD)%MOD
		ans+=((a[i]%MOD)*(b[i]%MOD))%MOD;
		ans=ans%MOD;
	}


	cout<<ans<<endl;




	return 0;
}