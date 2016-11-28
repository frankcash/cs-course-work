/**
 * Name: Charles Cash
 * Date:  November 27, 2016
 * Class: COP 2220
 * Assignment: Simple Database
 * Compiled with GCC on Arch Linux
 */

#include <stdio.h>
#include <stdlib.h>



typedef struct cdTypeNode_struct{
  unsigned int number; // CD Number
  char title[20]; // CD Title
  unsigned int count; // Number of the CD
	struct cdTypeNode* next; // points to the next node to create a linked list
} cdTypeNode;

typedef struct Artist_type_node_struct{
	char name[20];
	int cdList[100]; // Foreign key for cdObject[number]
	cdTypeNode* cdRoot; // points to the root CD node for the artist
} artistTypeNode;

void listOptions(); // prints the CD options
void stockNewCD();

int main(void){
	const int ARTISTS = 100;
	listOptions();
	artistTypeNode* artistArr = NULL; // creates an array of artists
	artistArr = (artistTypeNode*) malloc(ARTISTS * sizeof(artistTypeNode)); // allocates space for the artist arr
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


void stockNewCD(){

	return ;
}
