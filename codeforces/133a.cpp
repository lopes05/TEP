#include <bits/stdc++.h>

using namespace std;

int main(){

	char instr[4] = {'H', 'Q', '9'};

	string word;
	cin >> word;

	for(int i = 0; i < 4; i++){
		int x = word.find(instr[i]);
		if(x != -1){
			cout << "YES";
			return 0;
		}

	}	

	cout << "NO";

	return 0;
}