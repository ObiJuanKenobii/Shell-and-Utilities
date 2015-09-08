# Shell and Utilities
The goal of this project is to make a working shell. The project is divided into several parts. The shell should support input/output redirection, pipes, backround processing and some built in functions.

Some of the features included:
- Parsing
- Environment Variables
- Prompts
- Path Resolution
- Execution
- IO redirection
- Pipes
- Backround Processing
- Built-Ins

## Restrictions
- Must be implemented using the C language.
- Only `fork()` and `execv()` can be used to spawn new processes.
- Cannot use `system()` or any other exec system calls
- Output must match bash
  
## Assumptions
- No more than three pipes will appear on a single line.
- No globs, special characters, regex, quotes, etc.
- Need to handle expansion of environment variables such as `$HOME`
- Input no larger than 255 characters.
- Pipes and IO redirection wont occur at the same time
- Multiple redirects of same type will not occur
- No need to auto complete
- We need to handle zombie processes


Created by:
*_Mike Anderson_*
*_Juan Llaguno_* 
*_Elliot Rauchwerger_*
