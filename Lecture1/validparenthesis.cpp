#include <iostream>
#include <algorithm>
using namespace std;
void validparenthesis(int n,int i,char *arr,int open,int close){
	if(i==2*n){
		arr[i]='\0';
		cout<<arr<<endl;
		return;
	}
	if(open<n){
		// mai open bracket daal sakti hun
		arr[i]='(';
		validparenthesis(n,i+1,arr,open+1,close);

	}
	if(close<open){
		// mai close bracket daal sakti hun
		arr[i]=')';
		validparenthesis(n,i+1,arr,open,close+1);

	}
}
int main(){

	int n;
	cin>>n;//2
	char arr[100];
	validparenthesis(n,0,arr,0,0);

	
	
	return 0;
}