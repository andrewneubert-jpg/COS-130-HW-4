#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char name[50];
	char id[10];
	char description[300];		
} Room; 



int main(){
	FILE *lineP = fopen("dungeonRoomList_large.txt", "r");
	char lineB[900];
	while(fgets(lineB,sizeof(lineB),lineP) != NULL){
	
	printf("\n%s",lineB);
	char splitBy[] = ":";
	char *tok = strtok(lineB,splitBy);
	printf("tok one:%s\n",tok);
	if(strcmp("Room Name",tok)==0){
		tok = strtok(NULL,splitBy);
		printf("tok 2?:%s\n",tok);
		}
	else if(strcmp("Room Code",tok)==0){
		tok = strtok(NULL,splitBy);
		printf("tok 2?:%s\n",tok);
	}
	else if(strcmp("Room Description",tok)==0){
		tok = strtok(NULL,splitBy);
		printf("\ntok 2?:%s\n",tok);
	}
	//printf("%s",lineB);
	//printf("%s\n",tok);
	
	}

return 0;
}


