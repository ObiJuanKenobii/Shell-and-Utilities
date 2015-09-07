/* ****************************************************************************
** COP 4610 -- Project 1
** Due September 21, 2015
** Team Members:
** Elliot Rauchwerger, Michael Anderson, Juan Llaguno
**
** Main.c
******************************************************************************/

#include <stdio.h>
#include <string.h>

#include "Parse.h"

int main(){

    char *line;
    char **cmd;
    int count = 0;

    for (int i = 0; i < 1; ++i){

	    my_setup();
		my_prompt();
		line = my_read();
		cmd = my_parse(line);

		while(cmd[count] != NULL){

			printf("Argument number: %d is: %s\n", count+1, cmd[count]);

			++count;

		}
					
		my_execute(cmd);
		my_clean();

 	}

    /*while (1)
	{
	
		my_setup();
		my_prompt();
		line = my_read();
		cmd = my_parse(line);

		printf("Printing cmd: %s\n\n", *cmd);		

		//printf("Printing: %s\n", array[8]);

		my_execute(cmd);
		my_clean();
	
    }*/

    return 0;

}
