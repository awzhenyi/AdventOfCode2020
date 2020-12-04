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
	int k;
	vt<int> v1;
	int ans;
	while(cin >> k) {
		v1.pb(k);
	}
	sort(v1.begin(),v1.end());
	for(int i = 0; i < v1.size(); ++i) {
		int x = v1[i];
		int remain = 2020 - x;
		int start = i+1; //Part A start =  i;
		int end = v1.size()-1;
		while(start < end) {
			if(v1[start] + v1[end] == remain) {//Part A v1[start] + v1[end] == 2020
				ans = v1[start] * v1[end] * x;
				break;
			}
			else if (v1[start] + v1[end] < remain)//Part A v1[start] + v1[end] < 2020
				start ++;
			else
				end--;
		}
	}
	cout << ans;
}
