#include<bits/stdc++.h>
using namespace std;

int main(){
	int T; cin >> T;
	for(int i = 1; i <= T; ++i){
		int n; cin >> n;
		set<int> a;
		for(int x = 1; x <= n; ++x){
			int soa; cin >> soa;
			a.insert(soa);
		}
		int m; cin >> m;
		set<int> b;
		for(int y = 1; y <= m; ++y){
			int soa; cin >> soa;
			b.insert(soa);
		}
		int dem = 0;
		auto h = a.begin(), k = b.begin();
		while(h != a.end() && k != b.end()){
			if(*h == *k){
				++dem;
				++k;
			} 
			else if(*h > *k){
				++k;
			}
			else{
				++h;
			}
		}
		cout << dem;
	}
}
