#ifndef PARSE_H_INCLUDED
#define PARSE_H_INCLUDED

   char **parse_arguments(char *line);
   void my_setup();
   void my_prompt();
   
   char *my_read();
   char **my_parse(char *line);
   
   void my_execute(char **cmd);
   void my_clean();

#endif
