#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct{ //making the structure
        char name[50];//probably gave a little bit more space than I need
        char id[10];
        char description[300];
} Room;



int main(int numFile, char **fileName){ //take in input from terminal
        FILE *lineP = fopen(fileName[1], "r");//opens the file
        char lineB[900];//extra big buffer so it dosent break
        int roomCount = 0; //my way of keeping track of which room is being made. also counds the total number of rooms
        Room room[100];//give the structure this funkey number so my code dosent break

        while(fgets(lineB,sizeof(lineB),lineP) != NULL){//reads line until end of file
        char splitBy[] = ":";
        char *tok = strtok(lineB,splitBy);//splits the line by : to see what type of data it is

        if(strcmp("Room Name",tok)==0){//identifies the type of info
                tok = strtok(NULL,splitBy);// gets the second half of the line (type of info:info)
                roomCount++;//adds one to the number of rooms counter
                tok = strtok(tok,"\n");//takes away the \n at the end
                tok++;//takes away the space at the front
                strcpy(room[roomCount].name,tok);//adds room info to structure [rooms names seperated by the room count, that is how they are distinct structures]
                }
        else if(strcmp("Room Code",tok)==0){
                tok = strtok(NULL,splitBy);
                tok = strtok(tok, "\n");//same as above
                tok++;
                strcpy(room[roomCount].id,tok);
        }
        else if(strcmp("Room Description",tok)==0){
                tok = strtok(NULL,splitBy);
                tok = strtok(tok, "\n");
                tok++;
                strcpy(room[roomCount].description,tok);
                printf("Room %s: %s\n",room[roomCount].id,room[roomCount].name);//prints the output when it gets to the last part of the room



        }
        }
        fclose(lineP);//closes file

return 0;
}
