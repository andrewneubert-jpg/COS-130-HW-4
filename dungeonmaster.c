#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char name[50];
	char id[10];
	char description[200];		
} Room; 



int main(){
	FILE *lineP = fopen("dungeonRoomList_large.txt", "r");
	char lineB[100];
	while(fgets(lineB,sizeof(lineB),lineP) != NULL){
	
	printf("%s",lineB);
	char splitBy[] = ":";
	char *tok = strtok(lineB,splitBy);
	printf("tok one:%s\n",tok);
	if(strcpy("Room Name",tok)){
		tok = strtok(NULL,splitBy);
		printf("tok 2?:%s\n",tok);
		}
	//if(strcmp("Room Name",tok)){
	//tok = strtok(NULL, splitBy);
	//printf("%s",tok);
	//}
	//printf("%s",lineB);
	//printf("%s\n",tok);
	
	}

return 0;
}

