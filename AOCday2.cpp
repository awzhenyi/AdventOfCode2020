#include <iostream>
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define is pair<int,string>
#define ii pair<int,int>
#define mp make_pair
#define FOR(i,n) for(int i=0; i<n; ++i)
#define pb push_back
#define eb emplace_back
#define ar array
#define vt vector
#define EACH(i,x) for(auto &i : x)


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int ans = 0;
	int n = 1000;
	while (n--) {
		int k;
		char dash;
		int j;
		char c;
		char semicolon;
		string s;
		int counter = 0;
		cin >> k >> dash >> j >> c >> semicolon >> s;
		/*Part A 
		for(int i = 0; i<s.length(); ++i) {
			if(s[i]==c)
				counter++;
		}
		if(counter >= k && counter <= j)
			ans++;
		*/
		if(s[k-1]==c)
			counter++;
		if(s[j-1]==c)
			counter++;
		if(counter==1)
			ans++;
	}
	cout << ans;

}