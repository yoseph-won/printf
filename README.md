Reinventing printf

Pseudo code for _printf() functions

Step 1 Declare a function _printf (char* format, ...) which can take variable number of an arguments.
Step 2 create a variable to hold our arguments list . 
    • va_list list;
Step 3 check if there is any argument that are passed to the functions.
    • If (format == NULL) or not

Step 4 if there is nothing passed close the program.

    • Return(-1);
Step 5 If there is an argument check if there is any  special character like .
    • \n 	\t 	\a 	\b 	%c 	%d 	%e 	%f	 
    • %g 	%i	 %o 	%s	 %u	 %x 	%% 
Step 6 create a function for every one of them.
    • Void print_int()
    • void print_double()
….

Step 7 if there is no special character iterate and display them using _putchar.
