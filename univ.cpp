#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <iomanip>


typedef char option[45] ;
const int row = 10, col = 10 ;
int scan ;	//To hold the special character for moving the prompt in menu
int ascii ;

//To display the main menu options
option a[] = {
		"Entry",
		"Display",
		"Enquiry",
		"Modification",
		"Performance",
		"Exit",
	} ;
//To display the ENTRY menu option.
option b[] = {
		"College",
		"Student",
		"Exam Form",
		"Exam Schedule",
		"Result",
		"Back To Previous Menu",
	} ;
//To display the DISPLAY menu option
option c[] = {
		"College",
		"Student",
		"Exam Form",
		"Exam Schedule",
		"Result",
		"Back To Previous Menu",
	} ;
//To display the ENQUIRY menu option
option d[] = {
		"College",
		"Student",
		"back To Previous Menu",
	} ;
//To display the MODIFICATION menu option
option e[] = {
		"College",
		"Student",
		"Back To Previous Menu",
	} ;
//To display the PERFORMANCE menu option
option f[] = {
		"Foundation",
		"Back To Previous Menu",
	   } ;
