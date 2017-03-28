#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	int cont = 1;
	while(true){
		cin >> n;
		if(n == 0)
			break;
		vector<string>sentences;

		for(int i = 0; i <= n; ++i){
			string sentence;
			getline(cin, sentence);
			sentences.push_back(sentence);
		}
		cout << "Case " << cont << ":" << endl;
		cout << "#include<string.h>\n#include<stdio.h>\nint main()\n{\n";
		int a = 0;
		for(auto &x: sentences){

 			for(int i = 0; i < x.size(); ++i){
                  	if(x[i]=='\\'){
                        x.insert(i+1, "\\");
                        ++i;            
                  	}else if(x[i] == '"'){
                        x.insert(i, "\\");
                        ++i;
                  	}else if(x[i] == '"'){
                        x.insert(i, "\\");
                        ++i;
                  	}
			}
			
			if(a > 0)
				cout << "printf(\"" << x <<"\\n\");" << endl;
			a++;
		}

		cout << "printf(\"\\n\");\nreturn 0;\n}";
		cout << endl;
		cont++;
	}

	return 0;
}