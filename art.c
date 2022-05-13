/* This program making use of C array facilities and looping
constructs to produce simple, but scalable ASCII art.
The included Makefile will build the program, and provide a run rule. */

#include <stdio.h>
#include "func.h"

int main() {
	char ar[5][5] = {"\\000/",".|.|.","..0..","00.00","\\___/"}; // Array of static size
	for(int i=0;i<5;i++) // Iterate through rows
 	{
 	for(int j=0;j<5;j++) // Iterate through columns
 			{		
  				printf("%c", ar[i][j]);
 		}
 		printf("\n");
 	
 	}
 	printf("\n");
 	
	int n = -1;
	while(n <= 0){ // Keep prompting for a positive scaling factor
		printf("Enter a scaling factor: ");
		scanf("%d",&n);
	}
	scale(n, ar); // Function takes two args; desired scaling factor and array
}
