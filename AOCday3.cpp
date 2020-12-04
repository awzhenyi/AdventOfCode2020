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

ll traverse(int x, int y, string s[]) {
	int r = 0;
	int c = 0;
	int ans = 0;
	while(r<322) {
		c+=x;
		r+=y;
		if(c>30)
			c=c%31;
		if(s[r][c]=='#')
			ans++;
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s[323];
	FOR(i,323) {
		cin >> s[i];
	}
	//cout << traverse(1,2,s); //part A
	ll ans = traverse(1,1,s) * traverse(3,1,s) * traverse(5,1,s) * traverse(7,1,s) * traverse(1,2,s); //Part B
	cout << ans;
}