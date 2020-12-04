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

bool checker(map<string,string> m1) {
	int t1 = stoi(m1["byr"]);
	if(t1<1920 || t1>2002)
		return false;
	//cout << "pass" << endl;
	int t2 = stoi(m1["iyr"]);
	if(t2<2010 || t2>2020)
		return false;
	//cout << "pass" << endl;
	int t3 = stoi(m1["eyr"]);
	if(t3<2020 || t3>2030)
		return false;
	//cout << "pass" << endl;
	string temp = m1["hgt"];
	if(temp[temp.length()-1]=='m') {
		temp.pop_back();
		temp.pop_back();
		int t4 = stoi(temp);
		if(t4<150 || t4>193)
			return false;
	} else if (temp[temp.length()-1]=='n') {
		temp.pop_back();
		temp.pop_back();
		int t4 = stoi(temp);
		if(t4<59 || t4>76)
			return false;
	} else {
		return false;
	}
	//cout << "pass" << endl;
	string temp2 = m1["hcl"];
	set<char> s1 = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
	if(temp2[0]!='#' || temp2.length()!=7) {
		return false;
	} else {
		for(int i=1; i<temp2.length()-1; ++i) {
			if(s1.count(temp2[i])==0)
				return false;
		}
	}
	//cout << "pass" << endl;
	if(m1["ecl"]!="amb" && m1["ecl"]!="blu" && m1["ecl"]!="brn" && m1["ecl"]!="gry" && m1["ecl"]!="grn" && m1["ecl"]!="hzl" && m1["ecl"]!="oth")
		return false;
	//cout << "pass" << endl;
	set<char> s2 = {'0','1','2','3','4','5','6','7','8','9'};
	if(m1["pid"].length()!=9) 
		return false;
	else {
		for(auto c : m1["pid"]) {
			if(s2.count(c)==0)
				return false;
		}
	}
	//cout << "pass" << endl;
	return true; 
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	map<string,string> m1;
	int ans = 0;
	while(!cin.eof()) {
		getline(cin, s);
		if(s.empty()) {
			if(m1.size()==8) {
				bool pass = checker(m1);
				if(pass)
					ans++;
			}	
			if(m1.size()==7) {
				if(m1.count("cid")==0) {
					bool pass = checker(m1);
					if(pass) 
						ans++;
				}
			}
			m1.clear();
		}
		istringstream iss(s);
		string next;
		while(iss>>next) {
			string temp1 = next.substr(0,3);
			string temp2 = next.substr(4,next.length()-3);
			//cout << temp2 << endl;
			//cout << next << endl;
			m1[temp1] = temp2;
		}
	}
	cout << ans;
}



//Part A
/*int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	map<string,string> m1;
	int ans = 0;
	while(!cin.eof()) {
		getline(cin, s);
		if(s.empty()) {
			if(m1.size()==8)
				ans++;
			if(m1.size()==7) {
				if(m1.count("cid")==0)
					ans++;
			}
			m1.clear();
		}
		istringstream iss(s);
		string next;
		while(iss>>next) {
			string temp1 = next.substr(0,3);
			//cout << next << endl;
			m1[temp1] = next;
		}
	}
	cout << ans;
}*/

