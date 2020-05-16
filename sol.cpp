#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	char s[255];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	int cnt = 0;
	for(int i = 0; i < n-1; i++){
		if(s[i] == s[i+1]){
			cnt++;
		}
	}
	cout << cnt;
	cout << "\n";
	return 0;
}
