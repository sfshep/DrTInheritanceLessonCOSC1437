/*
Using Dr_T's Color in CPP as a Header //filename: Color_in_CPP.h in my solution folder
*/
#ifndef COLOR_IN_CPP_H
#define COLOR_IN_CPP_H


void changeColor(int colorValue)  //function definition
{
	 string  reset = "\x1b[0m";
   if(colorValue != 7) //standard black and white
   { 
    cout << "\x1b[" << colorValue <<";1m"; 
   }
   else if(colorValue == 7) 
   {
     cout << reset; 
   } 
}
#endif
