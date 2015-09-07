/* ****************************************************************************
** COP 4610 -- Project 1
** Due September 21, 2015
** Team Members:
** Elliot Rauchwerger, Michael Anderson, Juan Llaguno
**
** main.c
******************************************************************************/


// main function
int main()
{
    char *line;
    char **cmd;

    while (1)
    {
	/*
	my_setup();
	my_prompt();
	line = my_read();
	cmd = my_parse(line);
	my_exectue(cmd);
	my_clean();
	*/
    }

    return 0;
}



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
char **parse_whitespace(char *line)
{

    return NULL;
}
