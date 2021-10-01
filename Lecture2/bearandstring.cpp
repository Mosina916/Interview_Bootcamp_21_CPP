#include<iostream>
using namespace std;
#define ll long long
int main(){
	string s;
	cin>>s;
	ll ans=0;
	for(int i=0;i<s.length();i++){//1
		int j=s.substr(i).find("bear");//-1
		if(j>=0&&j<=s.length()){
			ans=ans+s.length()-(i+j+3);//11-(0+0+3)-->8+2

		}

	}
	cout<<ans<<endl;


	return 0;
}