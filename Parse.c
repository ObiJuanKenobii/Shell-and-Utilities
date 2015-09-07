#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "Parse.h"

char **parse_arguments(char *line){
	
	//Deref the line
	char **temp = &line;

	//Creating a array for the tokenizer of the initial arguments and the final array
	char *tokenArray = malloc(sizeof(temp));
	char **finalArray = malloc(255 * sizeof(char));	//Maxsize of the commands

	//Character for our delimiter later on in the tokenizer
	const char s[2] = " ";
	
	//Token for the tokenizer
	char *token;

	for (long unsigned i = 0; i < strlen(*temp); ++i){

		strncat(tokenArray, &temp[0][i], 1);
	
	}

	token = strtok(tokenArray, s);

	int count = 0;

	while(token != NULL){
	    	
	    finalArray[count] = token;
	    	
	   	token = strtok(NULL, s);

	   	++count;

   	}

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
