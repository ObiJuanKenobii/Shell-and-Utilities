/* ****************************************************************************
** COP 4610 -- Project 1
** Due September 21, 2015
** Team Members:
** Elliot Rauchwerger, Michael Anderson, Juan Llaguno
**
** parser.h
******************************************************************************/

#ifndef _PARSER_H
#define _PARSER_H

char *my_read();
char **my_parse (char *);
char *parse_whitespace (char *);
char **parse_arguments (char *);
char **resolve_paths (char **);
char **expand_variables (char **);

#endif
