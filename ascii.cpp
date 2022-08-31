#include <bits/stdc++.h>
using namespace std;
void gt(int n){
	int a[n+1];
	int v=0;
	while (n!=0){
		if (n&1){
			a[v++]=1;
		}
		else{
			a[v++]=0;
		}
		n=(n>>1);
	}
	for (int i=v-1;i>=0;i--){
		cout<<a[i];
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int i=0;i<14;i++){
		gt(i);
		cout<<endl;
	}
	return 0;
}
