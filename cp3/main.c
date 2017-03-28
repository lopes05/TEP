#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	FILE *fp = NULL;

	fp = fopen("input.txt", "r+");

	char line_content[10][30];
	int i = 0, keep_doing = 1;
	int how_many = 0; 
	
	while(keep_doing){
		fgets(line_content[i], 30, fp);
		how_many = 0;
		for(int k = 0; k < 7;k++){
			if(line_content[i][k] == '.'){
				how_many++;
			}
		}
		if(how_many == 7){
			break;
		}

		i++;
	}


	for(int x = 0; x < i - 1; x++){
		strtok(line_content[x], "\n");
		strcat(line_content[x], " ");
	}

	char sentence[1000];
	strcpy(sentence, line_content[0]);
	for(int j = 1; j < i; j++){
		strcat(sentence, line_content[j]);
	}

	printf("%s", sentence);


	char search[80];
	scanf("%s", search);
	
	char *p;
	int cont = 0;
	int pos = 0;

	while(p != NULL){
		p = strstr(sentence + pos, search);
		pos = strlen(search);
		cont++;
	}

	printf("%d\n", cont);

	fclose(fp);
}