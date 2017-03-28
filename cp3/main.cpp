#include <bits/stdc++.h>

using namespace std;

int main(){

	FILE *fp = NULL;

	fp = fopen("input.txt", "r+");

	int i = 0, keep_doing = 1;
	int how_many = 0; 
	
	vector<string> strings;
	fflush(stdin);
	
	while(keep_doing){
		char *aux;
		aux = (char*)malloc(sizeof(char) * 30);
		fgets(aux, 30, fp);

		how_many = 0;

		for(int k = 0; k < 7;k++){
			if(aux[k] == '.'){
				how_many++;
			}
		}
		if(how_many == 7){
			break;
		}

		string lul(aux);
		strings.push_back(lul);

		i++;
	}

	string nova;

	for(int x = 0; x < i - 1; x++){
		strtok((char*)strings[x].c_str(), "\n");
		strcat((char*)strings[x].c_str(), " ");
	}

	for(string x: strings){
		nova += x;
	}

	cout << nova;

	string search;

	cin >> search;	
	
	int x = 0;
	int cont = 0, pos = 0;
	
	while(true){
		x = nova.find(search, 0 + (pos));

		if(x != -1){
			cont++;
			pos = x + 1;
		}
		else{
			break;
		}
	}
	
	cout << cont;

	fclose(fp);
}