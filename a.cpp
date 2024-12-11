#include<bits/stdc++.h>
using namespace std;
int n, m, ntt; 
int a[20+2], result[22], tong = 0, result2[22];
int check(int ucv, int k){
	if(k == m){
		if(tong + a[ucv] >= ntt) return 1;
		else return 0;
	} 
	return 1;
}
void printresult(){
	for(int i = 1; i <= m; ++i) cout << result[i] << ' ';
	cout << endl;
}
void TRY(int k){
	for(int ucv = result2[k-1] + 1; ucv <= n-m+k; ++ucv){
		if(check(ucv,k)){
			result2[k] = ucv;
			result[k] = a[ucv];
			tong += a[ucv];
			if(k == m) printresult();
			else TRY(k+1);
			tong -= a[ucv];
		}
	}
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; ++i) cin >> a[i];
	cin >> ntt; // ntt: nam thanh lap
	for(int th = 1; th <= n; ++th){
		m = th;
		result2[0] = 0;
		TRY(1);
	}
}
