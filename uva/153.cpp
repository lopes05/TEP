#include <bits/stdc++.h>

using namespace std;

int main(){

	char input[35];
	vector<int> results;
	while(scanf("%s", input) == 1 && input[0] != '#'){
		string in(input);
		string old = in;
		int i = 0;
		sort(in.begin(), in.end());
		
		do {
    		i++;
    		if(in == old)
    			break;
		}while (std::next_permutation(in.begin(), in.end()));
		
		results.push_back(i);
	}

	for(auto &x : results){
		int MAX = 10;
		int result = 10 - to_string(x).size();
		string spaces(result, ' ');
		string toPrint = spaces + to_string(x);
		printf("%s\n", toPrint.c_str());
	}

	return 0;
}