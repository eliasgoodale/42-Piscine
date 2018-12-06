#include "rush_two.h"

void check_corners(char *input, int *width, int *height, int *total_len)	
{
	int result;

	if (input[0] == 'o')	
		result = 0;
	if(input[0] == '/')
		result = 1;					
	if(*width == 1 && input[(*total_len - 2)] == 'C')
		result = 6;
	if(input[0] == input[*width - 1] && input[*width - 1] == 'A')
		result = 2;
	if(*width == 1 && input[*total_len - 2] == 'A')
		result = 3;
	if(input[0] == input[*total_len - 2] && input[*width - 1] == 'C')
		result = 4;	
	if(input[*width - 1] == input[*total_len - 2] && input[*width - 1] == 'C')
		result = 3;
	if(*height == 1 && input[*width - 1] == 'C')
		result = 7;
	if(*height == 1 && *width == 1)
		result = 9;							
	if(*width == 1 && input[*total_len - 2] == 'C')
		result = 6;
	print_rush(&result, width, height);
}
