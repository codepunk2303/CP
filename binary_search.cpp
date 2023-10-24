#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

bool height(ll a,ll* arr,int n,int x){
	long long ans = 0;
	for(int i = 0;i<n;i++){
		if(a>=arr[i]){
			ans = ans+(a-arr[i]);
		}
	}
	return ans<=x;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		ll arr[n];
		ll maxi = 0;
		for(int i = 0;i<n;i++){
			cin>>arr[i];
			maxi = max(maxi,arr[i]);
		}
		ll low = 1, high = maxi+1+(x/n), mid = 0;
		while(high-low>1){
			mid = (low+high)/2;
			if(height(mid,arr,n,x)) low = mid;
			else high = mid-1;
		}
		if(height(high,arr,n,x)) cout<<high<<endl;
		else cout<<low<<endl;
	}
	
}