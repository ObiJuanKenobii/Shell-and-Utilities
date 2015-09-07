#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "Parse.h"

char **parse_arguments(char *line){

	//Creating a array for the tokenizer of the initial arguments.
	char *tokenArray = malloc(sizeof(line));

	//The final array to be returned. Will consist of the arguments in an array.
	char **finalArray = malloc(255 * sizeof(char));	//Maxsize of the commands.

	//Character for our delimiter later on in the tokenizer, ability to add tokens.
	const char s[2] = " ";
	
	//Token to hold the tokenizer values.
	char *token;

	//Get the arguments out of the line passed in.
	for (long unsigned i = 0; i < strlen(line); ++i){

		//Adding to the tokenarray, only 1 character at a time.
		strncat(tokenArray, &line[i], 1);
	
	}

	//Using our delimeter to truncate tokenarray.
	token = strtok(tokenArray, s);

	//Count to get to proper spots in the array.
	int count = 0;

	//While there are still tokens.
	while(token != NULL){
	    
	    //Add that token to the array.
	    finalArray[count] = token;
	    
	    //A null pointer may be specified,
	    //in which case the function continues scanning where 
	    //a previous successful call to the function ended.
	   	token = strtok(NULL, s);

	   	++count;

   	}

   	//Cleaning up...
   	free(tokenArray);

	return finalArray;

}

void my_setup(){}

void my_prompt(){}

char *my_read(){

	char *f = "arg1 > arg2 | arg3 + arg4";

	return f;

}

char **my_parse(char *line){

	char **c = &line;

	char **temp = parse_arguments(*c);

	return temp;

}

void my_execute(char **cmd){}

void my_clean(){}
