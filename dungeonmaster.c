#include <stdio.h>

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
	//add string compare
	}

return 0;
}

