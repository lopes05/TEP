#include <bits/stdc++.h>

using namespace std;

int main(){

	string input;
	
	bool ok = true;
	vector<bool> aux;

	while(getline(cin, input) && input != "*"){
		ok = true;
		stringstream is(input);
		string word;
		char first = input[0];
		while(is>>word){
			if((char) tolower(word[0]) != (char) tolower(first)){
				ok = false;
				break;
			}
		}
		aux.push_back(ok);

	}

	for(bool x : aux){
		if(x)
			cout << "Y" << endl;
		else
			cout << "N" << endl;
	}

	return 0;
}