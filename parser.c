/* ****************************************************************************
** COP 4610 -- Project 1
** Due September 21, 2015
** Team Members:
** Elliot Rauchwerger, Michael Anderson, Juan Llaguno
**
** parser.c
******************************************************************************/

#include "parser.h"

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>



// reads in a line of data from standard input
char *my_read(){
	char *buffer;
	char *checkChar;
	buffer = malloc(LINE_MAX*sizeof(char));
	int check = 1;
	 
	while(check == 1){
		
		if(fgets(buffer,LINE_MAX,stdin) == NULL){
			printf("Damn, enter a correct command\n"); 
			check = 1;
		}
		else{
			check = 0;
		}
	}

	// replaces new line at end of buffer with null char
        int len = strlen(buffer) - 1;
	if (buffer[len] == '\n')
	    buffer[len] = '\0';
	
	return buffer;
}



// This function parses the line into commands that can be executed
char **my_parse (char *line)
{
    char **args;

    line = parse_whitespace(line);
    printf ("%s\n", line);
    //args = parse_arguments(line);
    // args = expand_variables(args);
    //args = resolve_paths(args);

    return args;
}



// this function parses the whitespace from the line entered
char *parse_whitespace(char *line)
{
    // pointer to read line
    char *pr1, *pr2;
    pr1 = line;

    // replace null of string with space
    pr2 = line + strlen(line);
    *pr2 = ' ';

    // new line to be returned
    char *newLine = (char *)calloc(strlen(line),sizeof(char));

    // get rid of leading white space
    while (isspace(*pr1))
    {
	++pr1;
    }

    // key for string search
    char key[] = " |<>&$~";

    // scan through each argument starting with first one
    pr2 = strpbrk(pr1, key);

    // scan through each successive one
    while (pr2 != NULL)
    {
	// add to newLine
	int len = pr2 - pr1;
	strncat (newLine, pr1, len);

	// get rid of white space
	pr1 = pr2+1;
	while (isspace(*pr1))
	{
	    ++pr1;
	}

	// check if special key
	if (*pr2 != ' ')
	{
	    strcat (newLine, " ");
	    strncat (newLine, pr2, 1);
	}

	// search again
	pr2 = strpbrk(pr1, key);

	// add white space if not last argument
	if (pr2 != '\0')
	    strcat (newLine, " ");
    }

    // deallocate line c string created in my_read
    free(line);

    // return new, whitespace removed line
    return newLine;
}
