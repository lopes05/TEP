#include <iostream>
#include <string>

using namespace std;

int main(){

	const string word = "hello";

	string x;

	cin >> x;

	int a = 0, ok = 0;
	for(int i = 0; i < x.length(); i++){
		if(x[i] == word[a]){
			a++;
			ok++;
		}	
	}

	if(ok == 5){
		cout << "YES";
	}
	else{
		cout << "NO";
	}

	return 0;
}