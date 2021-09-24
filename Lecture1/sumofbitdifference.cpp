#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	// int arr[1000000];
	int *arr=new int[n];
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
		
	}
	int ans=0;
	for (int i = 0; i <32; ++i)
	{
		int cntnsb=0;
		// int cntsb=0;
		for(int j=0;j<n;j++){
			if((arr[j]&(1<<i))==0){
				cntnsb++;//1
			}
			// if((arr[j]&(1<<i))>0){
			// 	cntsb++;//1
			// }

		}
		ans=ans+cntnsb*(n-cntnsb)*2;//6
		// ans=ans+cntsb*(n-cntsb)*2;


	}
	cout<<ans<<endl;




	
	
	return 0;
}