/**
 * this is done using pure math 
 * the length of the base of the pyramid is => n+(n-1) where n is the number of rows entered by the user 
 * the sequance of stars is the odd numbers (1,3,5,7,...) which can be found using => 2*i+1  where i is the index of the row 
 * the number of space before the stars in each line can be found using the equation  (abs(row_length - star_count)/2) +1 
 * we add one to the space count because the last line will result in zero as the space length and this will not print the pyramid properly 
 *  
 * */

#include <stdio.h>
#include <stdlib.h>

// single loop 
void full_pyramid()
{
	int y; // number of rows
	char *star = "****************************************************************************";
	//padding 
	char * space = " ";
	
	// variables to keep track of numbers
	int star_count=0;  // count of stars in each line 
	int space_count=0; // count of spaces in each line  



	printf("Enter number of rows : \n");
	scanf("%d",&y);
	int row_len = y+(y-1);

	for (int i =0 ; i < y; i++)
	{
		star_count = 2*i+1;
		space_count = abs(( (row_len) -star_count)/2)+1;
		//printf("i:%d | star_count: %d | left_space: %d  |  %*s%*.*s\n",i , star_count, space_count, space_count, space, star_count, star_count , star);
		printf("%*s%*.*s\n", space_count, space, star_count, star_count , star);
	}
}


void left_pyramid()
{
	int y; // number of rows
	char *star = "****************************************************************************";
	//padding 
	char * space = " ";
	printf("Enter number of rows : \n");
	scanf("%d",&y);
	for (int i =0; i < y; i++)
	{
		printf("%*.*s\n",i+1,i+1,star);
	}
}



void right_pyramid()
{
	int y; // number of rows
	char *star = "****************************************************************************";
	//padding 
	char * space = " ";
	printf("Enter number of rows : \n");
	scanf("%d",&y);
	for (int i =0; i < y; i++)
	{
		printf("%*s%*.*s\n",y-i,space, i+1,i+1,star);
	}
}



int main()
{
	
	full_pyramid();
	left_pyramid();
	right_pyramid();
	return 0;
}




/**
 * resources:
 * https://stackoverflow.com/questions/276827/string-padding-in-c 
 * */
