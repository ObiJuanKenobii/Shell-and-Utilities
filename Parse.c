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

	printf("%s\n\n", "Before token");

	token = strtok(tokenArray, s);

	int count = 0;

	while(token != NULL){

	    printf("%s\n", token);
	    	
	    finalArray[count] = token;
	    	
	   	token = strtok(NULL, s);

	   	++count;

   	}
   	
   	printf("\n%s", "After token 1.\n");

   	for (int i = 0; i < count; ++i){

   		printf("\n\nFinal array: %s and count: %d\n", finalArray[i], i);
   	
   	}

   	printf("\n%s", "After token 2.\n");

   	free(tokenArray);

	return finalArray;

}

void my_setup(){

}

void my_prompt(){

}

char *my_read(){

	char *f = "arg1 > arg2 | arg3 + arg4";

	//printf("MY_READ printng: %s\n\n", f);

	return f;

}

char **my_parse(char *line){

	char **c = &line;

	//printf("MY_PARSE printng: %s\n\n", *c);

	char **temp = parse_arguments(*c);

	return temp;

}

void my_execute(char **cmd){

}

void my_clean(){

}