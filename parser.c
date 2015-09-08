/* ****************************************************************************
** COP 4610 -- Project 1
** Due September 21, 2015
** Team Members:
** Elliot Rauchwerger, Michael Anderson, Juan Llaguno
**
** parser.c
******************************************************************************/

#include "parser.h"
#include "ctype.h"
#include "string.h"
#include "stdlib.h"

// temp
#include "stdio.h"
//

// This function parses the line into commands that can be executed
char **my_parse (char *line)
{
    char **args;

    // temp
    char line2[] = "  sleep   20  322& fd";
    //

    line = parse_whitespace(line2);
    puts (line);
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

    return newLine;
}
