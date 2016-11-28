/**
 * Name: Charles Cash
 * Date:  November 27, 2016
 * Class: COP 2220
 * Assignment: Simple Database
 * Compiled with GCC on Arch Linux
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int ARTISTS = 100; // predefined amount of artists

/**
	* CD Type Node
	* Stores all the required data for CDs
	* Has a pointer to the next CD Type Node
	*/
typedef struct cdTypeNode_struct{
  unsigned int number; // CD Number
  char title[20]; // CD Title
  unsigned int count; // Number of the CD
	struct cdTypeNode* next; // points to the next node to create a linked list
} cdTypeNode;

/**
	* Artist Type Node
	* Stores all required data for an artist
	* Has a pointer to an artist's root CD Node
	*/
typedef struct Artist_type_node_struct{
	char name[20];
	cdTypeNode* cdRoot; // points to the root CD node for the artist
} artistTypeNode;

/**
	* All functions declarations the program will use
	*/
void listOptions(); // prints the CD options
int stockNewCD(int numArtists, artistTypeNode* artistArr);

int main(void){
	int numArtists = 0; // Array to track number of artists
	int option = 0; // Users input for option
	artistTypeNode* artistArr = NULL; // creates an array of artists
	artistArr = (artistTypeNode*) malloc(ARTISTS * sizeof(artistTypeNode)); // allocates space for the artist arr
	listOptions();
	scanf("%d", &option);
	switch(option){
		case 1:
			numArtists = numArtists + tockNewCD(numArtists, artistArr);
			break;
		case 2:
		 	// TODO: Print details of an artist
			break;
		case 3:
		 	// TODO: Search for CD
			break;
		case 4:
		  // TODO: Sell CD
			break;
		case 5:
			// TODO: Do nothing
			break;
	}

	printf("main: %d\n", artistArr[0].cdRoot->number);

  return 0;
}

void listOptions(){
	printf("Please select one of the following options:\n");
	printf("1) Stock a new CD\n");
	printf("2) Print the details of an artist\n");
	printf("3) Search a CD\n");
	printf("4) Sell a CD\n");
	printf("5) Quit\n");

	return ;
}


int stockNewCD(int numArtists, artistTypeNode* artistArr){
	char name[20];
	char title[20];
	int cdNumber;
	unsigned int stock;
  int returnAmount = 0;


	printf("Please enter the artist name:\n");
	scanf(" %s", name);
	printf("Please enter the CD number:\n");
	scanf(" %d", &cdNumber);
	printf("Please enter the CD title:\n");
	scanf(" %s", title);
	printf("Please enter the amount to be stocked:\n");
	scanf(" %du", &stock);

	if(numArtists <= 0){
		// Adds artist and CD
		cdTypeNode* root = NULL;
		root = malloc(sizeof(cdTypeNode));
		printf("%s\n", name);
		strcpy(artistArr[numArtists].name , name);
		artistArr[numArtists].cdRoot = root;
		printf("arr %s\n", artistArr[numArtists].name);

		// creates root node
		root->number = cdNumber;
		strcpy(root->title, title);
		root->count = stock;
    returnAmount = 1;
	}else{
    int i = 0;
    for(i = 0; i < numArtists; i++){
      if(artistArr[i].name == name){
         // TODO: add CD
      }else{
        // Create a new artist
        // Adds artist and CD
        cdTypeNode* root = NULL;
        root = malloc(sizeof(cdTypeNode));
        printf("%s\n", name);
        strcpy(artistArr[numArtists].name , name);
        artistArr[numArtists].cdRoot = root;
        printf("arr %s\n", artistArr[numArtists].name);

        // creates root node
        root->number = cdNumber;
        strcpy(root->title, title);
        root->count = stock;
        returnAmount = 1;
      }
    }
	}


	return returnAmount;
}
