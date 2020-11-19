#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void){

 char c;


 FILE *fp;

 fp=fopen("sample.text","r");

 if(fp==NULL){
	
 return -1;
   }

 while((c=fgetc(fp)) != EOF){
 	printf("%c",c);
 }
 
 
 fclose(fp);

 return 0;

}


