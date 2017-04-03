#include <bits/stdc++.h>

using namespace std;

int main(){

	string input;

	cin >> input;

	int size = input.size();
	string output = "";

	for(int i = 0; i < size; ++i){
		if(input[i] == '.'){
			output += "0";
		}
		else if(input[i] = '-'){

			if(input[i+1] == '.')
				output += "1";
			else if(input[i+1] == '-'){
				output += "2";
			}
			i++;
				
		}
	}

	cout << output << endl;

	return 0;
}