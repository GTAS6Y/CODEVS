#include <iostream>
using namespace std;

int n,m,a[100001];

int check(int x){
	int t=0;
	for(int i=1;i<=n;++i){
		t+=a[i]/x;	
	}
	if(t>=m)	return 0;
	else 		return 1;
}

int main(){
	cin >> n >> m;
	int sum=0;
	for(int i=1;i<=n;++i){
		cin >> a[i];
		sum+=a[i];
	}
	int l=0,r=sum/m;
	while(l+1<r){
		int mid=(l+r)/2;
		if(check(mid)==0) 	l=mid;
		else		r=mid;
	}
	cout << l << endl;
	return 0;
}
