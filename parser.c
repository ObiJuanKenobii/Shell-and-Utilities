/* ****************************************************************************
** COP 4610 -- Project 1
** Due September 21, 2015
** Team Members:
** Elliot Rauchwerger, Michael Anderson, Juan Llaguno
**
** parser.c
******************************************************************************/

// This function parses the line into commands that can be executed
char **my_parse (char *line)
{
    char **args;

    line = parse_whitespace(line);
    //args = parse_arguments(line);
    // args = expand_variables(args);
    //args = resolve_paths(args);

    return args;
}



// this function parses the whitespace from the line entered
char *parse_whitespace(char *line)
{

    return NULL;
}
