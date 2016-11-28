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
  int number; // CD Number
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
void printAllCds(int numArtists, artistTypeNode* artistArr); // Prints all of an artists information
void searchForCd(int numArtists, artistTypeNode* artistArr);
void sellCD(int numArtists, artistTypeNode* artistArr);
int main(void){
	int numArtists = 0; // Array to track number of artists
	int option = 0; // Users input for option
	artistTypeNode* artistArr = NULL; // creates an array of artists
	artistArr = (artistTypeNode*) malloc(ARTISTS * sizeof(artistTypeNode)); // allocates space for the artist arr
	listOptions();
	scanf("%d", &option);
	switch(option){
		case 1:
			numArtists = numArtists + stockNewCD(numArtists, artistArr);
			break;
		case 2:
      printAllCds(numArtists, artistArr);
			break;
		case 3:
      searchForCd(numArtists, artistArr);
			break;
		case 4:
		  sellCD(numArtists, artistArr);
			break;
		case 5:
			//Do nothing
			break;
    default:
      break;
	}

  while(option != 5){
    listOptions();
    scanf("%d", &option);
    switch(option){
  		case 1:
  			numArtists = numArtists + stockNewCD(numArtists, artistArr);
  			break;
  		case 2:
  		 	printAllCds(numArtists, artistArr);
  			break;
  		case 3:
        searchForCd(numArtists, artistArr);
  			break;
  		case 4:
        sellCD(numArtists, artistArr);
  			break;
  		case 5:
  			//Do nothing
  			break;
      default:
        break;
  	}
  }

	// printf("main: %d\n", artistArr[0].cdRoot->number);

  return 0;
}

/**
* Lists all operations a user can do
*
*/
void listOptions(){
	printf("Please select one of the following options:\n");
	printf("1) Stock a new CD\n");
	printf("2) Print the details of an artist\n");
	printf("3) Search a CD\n");
	printf("4) Sell a CD\n");
	printf("5) Quit\n");

	return ;
}


/**
* Adds a New CD
* If no user exists creates a user and a CD
* If user exists will add CD to that user
*/
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
	scanf(" %d", &stock);

	if(numArtists <= 0){
		// Adds artist and CD
		cdTypeNode* root = NULL;
		root = (cdTypeNode*) malloc(sizeof(cdTypeNode));
		strcpy(artistArr[numArtists].name , name);
		artistArr[numArtists].cdRoot = root;

		// creates root node
		root->number = cdNumber;
		strcpy(root->title, title);
		root->count = stock;
    root->next = NULL;
    returnAmount = 1;
	}else{
    int i = 0;
    for(i = 0; i < numArtists + 1; i++){
      // Loops through artists to find if they exist
      if(strcmp(artistArr[i].name, name) == 0){
         cdTypeNode* node = NULL;
         cdTypeNode* temp = NULL;
         node = (cdTypeNode*) malloc(sizeof(cdTypeNode));
         temp = (cdTypeNode*) malloc(sizeof(cdTypeNode));
         node = artistArr[i].cdRoot; // gets root

        while(node->next != NULL){
            node = node->next;
        }
         temp->next = NULL;
         temp->number = cdNumber;
         strcpy(temp->title, title);
         temp->count = stock;
         node->next = temp;


      }else{
        // Create a new artist
        // Adds artist and CD
        cdTypeNode* root = NULL;
        root = (cdTypeNode*) malloc(sizeof(cdTypeNode));
        // printf("%s\n", name);
        strcpy(artistArr[numArtists].name , name);
        artistArr[numArtists].cdRoot = root;
        // printf("arr %s\n", artistArr[numArtists].name);

        // creates root node
        root->number = cdNumber;
        strcpy(root->title, title);
        root->count = stock;
        root->next = NULL;
        returnAmount = 1;
      }
    }
	}


	return returnAmount;
}

/**
* Gets user input on artist to find, then searches through artist arr
*
*/
void printAllCds(int numArtists, artistTypeNode* artistArr){
  char artist[20];
  printf("Which artist to find?\n");
  scanf(" %s", artist);
  int artistNum = -1;

  int i = 0;
  for(i = 0; i<= numArtists; i++){
    if(strcmp(artistArr[i].name, artist) == 0){
      artistNum = i;
      // TODO: testing on how to loop through
      if(artistNum != -1){
        cdTypeNode* node = NULL;
        node = (cdTypeNode*) malloc(sizeof(cdTypeNode));
        node = artistArr[artistNum].cdRoot;

        printf("CD Title for: %s; CD Number: %d; Amount remaining: %d \n", node->title, node->number, node->count);

        while(node->next != NULL){
          node = node->next;
        }
      }else{
        printf("Artist could not be found\n");
      }

    }

  }
}


/**
* Searches for a CD and then prints it's information
*/
void searchForCd(int numArtists, artistTypeNode* artistArr){
  int numToFind;
  printf("Please enter the CD number to find:\n");
  scanf(" %d", &numToFind);
  cdTypeNode* nodeF = NULL;

  nodeF = (cdTypeNode*) malloc(sizeof(cdTypeNode));
  int i = 0;
  for(i = 0; i<=numArtists; i++){
    nodeF = (cdTypeNode*) realloc(nodeF, sizeof(cdTypeNode));
    nodeF = artistArr[i].cdRoot;
    if(nodeF->number == numToFind){
      printf("Found: %s %d. Remaining: %d \n", nodeF->title, nodeF->number, nodeF->count);
        i = numArtists + 1;
        break;
    }
    while(nodeF->next != NULL){

      if(nodeF->number == numToFind){
          printf("Found: %s %d. Remaining: %d \n", nodeF->title, nodeF->number, nodeF->count);

          i = numArtists + 1;
          break;
      }
      nodeF = nodeF->next;
    }

  }


}

/**
* Searches for a specific CD and then decreases it's count by one
**/
void sellCD(int numArtists, artistTypeNode* artistArr){
  int numToFind;
  printf("Please enter the CD number to sell:\n");
  scanf(" %d", &numToFind);
  cdTypeNode* nodeF = NULL;

  nodeF = (cdTypeNode*) malloc(sizeof(cdTypeNode));
  int i = 0;
  for(i = 0; i<=numArtists; i++){
    nodeF = (cdTypeNode*) realloc(nodeF, sizeof(cdTypeNode));
    nodeF = artistArr[i].cdRoot;
    if(nodeF->number == numToFind){
        i = numArtists + 1;
        nodeF->count--;
        printf("Sold: %s %d. Remaining: %d \n", nodeF->title, nodeF->number, nodeF->count);

        break;
    }
    while(nodeF->next != NULL){

      if(nodeF->number == numToFind){
          nodeF->count--;
          printf("Sold: %s %d. Remaining: %d \n", nodeF->title, nodeF->number, nodeF->count);

          i = numArtists + 1;
          break;
      }
      nodeF = nodeF->next;
    }

  }
}
