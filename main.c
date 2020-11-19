#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void){


 char str[100];
 char path[100];
 char lookup[100];
 FILE *fp;
 
 printf("input file path:");
 scanf("%s",path);
 printf("input search word:");
 scanf("%s",lookup);


 fp=fopen(path,"r");

//fp = fopen("sample.txt","r");

 if(fp==NULL){
	
	printf("invalid path! (%s)\n",path);
	getchar();
    return -1;
   }

 while(fgets(str,100,fp) != NULL){
 	
 	if(strncmp(str,lookup,strlen(lookup))==0) {
	 printf("Search succeed!\n");
     fclose(fp);
     	getchar();
     return 0;
	 
  
 
}
    
 }
 	getchar();
 printf("Search failed!\n");
 fclose(fp);
 return 0;

}


