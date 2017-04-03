#include <bits/stdc++.h>

using namespace std;

int main(){

	string s, t;

	cin >> s >> t;
	int size1 = s.size(), size2 = t.size();
	for(int i = 0; i < size1; ++i){
		if(s[i] != t[size2 - i - 1]){
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;

	return 0;
}