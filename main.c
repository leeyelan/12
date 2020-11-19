#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void){
char str[100];
int i;


FILE *fp;

fp=fopen("sample.text","w");

if(fp==NULL){
	
	return -1;
}

for(i=0; i<3; i++) {

printf("input a word:  ");
scanf("%s",str);

fprintf(fp,"%s\n",str);

}


fclose(fp);



}


