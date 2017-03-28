#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;

	scanf("%d", &n);
	
	char w[n];

	for(int i = 0; i < n; i++){
		cin >> w[i];
	}

	int cont = 0;
	for(int i = 0; i < n;i++){
		if(w[i] == w[i + 1]){
			cont++;
		}
	}

	cout << cont;

	return 0;
}