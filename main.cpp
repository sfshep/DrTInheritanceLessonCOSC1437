/*
	Dr. Tyson McMillan Working with 
	Source URL: https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm
	updated: 4-10-2017, 4-9-2018, 10-30-2018, 4-15-2020 by Dr. Tyson McMillan 
	//Extended to have a custom on-demand menu.
*/

#include "includes.h" //all the .h includes of program

int main() 
{
	char menuOption = '\0'; //int main local menu option
	
	do
	{
		menuOption = showMenu(menuOption); //function call 
	}while(menuOption != 'e' && menuOption != 'E'); //DeMorgan's Law 
	
	cout << "\nGoodbye" << endl; 

	return 0;
}
