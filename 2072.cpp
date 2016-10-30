#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int a[100001],n,m;

int check(int x){
	int t=1,i=2,h=a[1];
	while(i<=n){
		if(a[i]-h>=x){
			h=a[i];
			++t;
			++i;
		}
		else ++i;
	}
	if(t>=m)
		return 0;
	else
		return 1;
}

int main(){
	cin >> n >> m;

	int ma=-1,mi=999999;
	for(int i=1;i<=n;++i){
		cin >> a[i];
		ma=max(ma,a[i]);
		mi=min(mi,a[i]);
	}
	sort(a,a+n+1);

	int l=0,r=ma-mi;
	while(l+1<r){
		int m=(l+r)/2;
		if(check(m)==0){
			l=m;
		}
		else{
			r=m;
		}
	}
	cout << l << endl;
	return 0;
}
