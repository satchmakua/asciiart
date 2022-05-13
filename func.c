#include <stdio.h>
#include "func.h"

// This file contains our helper function implementation

void scale(int n, char ar[5][5]){

	int i,j,k,m;

	 for(i=0;i<5;i++) // Iterate through rows
	 {	
	 	for(k=0;k<n;k++) // Apply scaling factor to rows (horizontally)
	 	{
	 			printf("\n");
		 		for(j=0;j<5;j++) // Iterate through columns
	  		{		
	  				for(m=0;m<n;m++) // Apply scaling factor to columns (vertically)
	  			{
	  					printf("%c", ar[i][j]);
	 				}
	 			}
	 		}
	 	}
	 	printf("\n");
}

