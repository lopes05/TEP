#include <bits/stdc++.h>

using namespace std;

vector<int> computeArray(string pattern){
	vector<int> pattern_array(pattern.length());

	int j = 0;

	for(int i = 1; i < pattern.length();){
		if(pattern[i] == pattern[j]){
			pattern_array[i] = j+1;
			j++;
			i++;
		}
		else{
			if(j != 0){
				j = pattern_array[j - 1];
			}
			else{
				pattern_array[i] = 0;
				i++;
			}
		}
	}

	return pattern_array;

}


bool kmp(string text, string pattern){
	vector<int> pattern_array = computeArray(pattern);

	int i = 0, j = 0;

	while(i < text.length() && j < pattern.length()){
		if(text[i] == pattern[j]){
			i++;
			j++;
		}
		else{
			if(j != 0){
				j = pattern_array[j - 1];
			}
			else{
				i++;
			}
		}
	}

	if(j == pattern.length()){
		return true;
	}
	else{
		return false;
	}

}

int main(){

	string a, b;

	cin >> a >> b;

	cout << kmp(a, b) << endl;

	return 0;
}