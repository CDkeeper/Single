#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=1e6+10;
int n;
int q[N],quer[N];
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
	scanf("%d",&q[i]);
	quer[q[i]]++;
	}
	for(int i=0;i<N;i++){
		if(quer[i]%2!=0){
		cout<<i<<endl;
		break;	
		}
	}
	return 0;
	 
}
