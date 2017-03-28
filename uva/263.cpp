#include <bits/stdc++.h>

using namespace std;

int main(){

	char input[11];

	vector<pair<string, string>> par;
	vector<string> origs;

	while(input != 0){
		scanf("%s", input);

		if(!stoi(input))
			break;

		pair<string, string> x;
		string original(input);
		origs.push_back(original);
		string two = original;

		sort(original.begin(), original.end(), greater<char>());	
		sort(two.begin(), two.end());
		
		x.first = original;
		int k = stoi(two);
		x.second = to_string(k);
		
		par.push_back(x);

	}

	int cont = 0, i = 0, result = 0;
	map<int, int> help;

	for (auto &x : par){
		printf("Original number was %s\n", origs[cont].c_str());

		while(true){
			result = stoi(x.first) - stoi(x.second);
			++help[result];

			printf("%s - %s = %d\n", x.first.c_str(), x.second.c_str(), result);
			
			x.first = to_string(result);
			x.second = to_string(result);
			
			sort(x.first.begin(), x.first.end(), greater<char>());
			sort(x.second.begin(), x.second.end());

			while(x.second[0] == '0' && x.second.size() > 1)
				x.second.erase(0, 1);


			i++;

			if(help[result] > 1){
				break;
			}


		}


		for(map<int,int>::iterator it = help.begin(); it != help.end(); ++it) {
				help[it->first] = 0;
		}

		printf("Chain length %d\n", i);
		i = 0;
		printf("\n");
		cont++;

	}

	return 0;
}