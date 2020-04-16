/*
Using Dr_T's Color in CPP as a Header //filename: Color_in_CPP.h in my solution folder
*/
#ifndef SHAPE_FUNCTIONS_H
#define SHAPE_FUNCTIONS_H

//function prototypes 
char showMenu(char &); 
void drawRect(RectangleShape &); 
void drawTri(TriangleShape &); 
void drawCirc(CircleShape &); 
void drawSquare(SquareShape &); 

//Function Definitions
char showMenu(char &selectedOption)
{
	RectangleShape r;
	TriangleShape t;
	CircleShape c;
	SquareShape s; 
	
	cout << "Menu: " << endl; 
	cout << "R = Draw Rectangle" << endl; 
	cout << "T = Draw Triangle" << endl; 
	cout << "C = Draw Circle" << endl;
	cout << "S = Draw Square" << endl;  
	cout << "E = Exit" << endl; 
	cout << "Z = clear the screen" << endl; 
	cout << "Please enter an option: "; 
	selectedOption = validateChar(selectedOption); 
	
	if(selectedOption == 'R' || selectedOption == 'r')
	{
		drawRect(r); //pass the local r Rectagle Shape by reference and draw it. 
	}
	else if(selectedOption == 'T' || selectedOption == 't')
	{
		drawTri(t); //pass the local t Triangle Shape by reference and draw it. 
	}
	else if(selectedOption == 'C' || selectedOption == 'c')
	{
		drawCirc(c); //pass the local t Triangle Shape by reference and draw it. 
	}
	else if(selectedOption == 'S' || selectedOption == 's')
	{
		drawSquare(s); //pass the local t Triangle Shape by reference and draw it. 
	}
	else if(selectedOption == 'Z' || selectedOption == 'z')
	{
		system("clear"); //clear the screen 
	}
	else if(selectedOption == 'E' || selectedOption == 'e')
	{
		cout << "\nExit..." << endl; 
	}
	else
	{
		cout << "\nInvalid input." << endl; 
	}
	
	return selectedOption; 
}

void drawRect(RectangleShape &Rect)
{	
	double userInput = 0.0;   
	ofstream outfile; //output file stream
	
	changeColor(32); 
	cout << "\n\n**********Rectangle Program***********" << endl;
	changeColor(7);
	
	cout << fixed << setprecision(3); 
	Rect.setName("Rectangle_1");
	
	cout << "Kindly provide me a width for the Rectangle. ";
	userInput = validateDouble(userInput); 
	Rect.setWidth(userInput);
	
	cout << "Kindly provide me a length for the Rectangle. ";
	userInput = validateDouble(userInput); 	
	Rect.setLength(userInput);

	// Print the Perimeter of the object.
	cout << "\nThe Perimeter for: " << Rect.getName() << endl;
	cout << "with width = " << Rect.getWidth() << " and length = " << Rect.getLength(); 
	cout << " is " << Rect.getPerimeter(); 
	
		// Print the area of the object.
	cout << "\n\nThe Area for: " << Rect.getName() << endl;
	cout << "with width = " << Rect.getWidth() << " and length = " << Rect.getLength(); 
	cout << " is " << Rect.getArea() << endl; 
	
	Rect.drawShape(); //draw the rectangle on screen with *
	outfile.open("RecShape.txt"); //draw the shape in a file
	  if (outfile.is_open())
	  {
	  	
	  	outfile << "\nDrawing for: " << Rect.getName()<< endl; 
		 
	 	for(int i=0;i<Rect.getWidth();i++)
	 	{
	 		for(int j=0;j<Rect.getLength();j++)
	 		{
				 changeColor(32); 
				 outfile<<"*";
				 changeColor(7); 
	 		}
			outfile<<"\n";
		}
		outfile.close(); 
		system("RecShape.txt"); //open the output file
	}
}

void drawTri(TriangleShape &Tri)
{	
	double userInput = 0.0;   
	ofstream outfile;
	
	changeColor(32); 
	cout << "\n\n**********Triangle Program***********" << endl;
	changeColor(7);
	
	cout << "Kindly provide me a base for the Triangle. ";
	userInput = validateDouble(userInput); 
	Tri.setBase(userInput);
	
	cout << "Kindly provide me a sideA for the Triangle. ";
	userInput = validateDouble(userInput); 	
	Tri.setSideA(userInput);
	
	cout << "Kindly provide me a sideC for the Triangle. ";
	userInput = validateDouble(userInput); 	
	Tri.setSideC(userInput);
	
	cout << "Kindly provide me a height for the Triangle. ";
	userInput = validateDouble(userInput); 	
	Tri.setHeight(userInput);

	// Print the Perimeter of the object.
	cout << "\nThe Perimeter for: " << Tri.getName() << endl;
	cout << "with base = " << Tri.getBase() << " and sideA = " << Tri.getSideA() << " and sideC = " << Tri.getSideC();
	cout << " is " << Tri.getPerimeter(); 
	
		// Print the area of the object.
	cout << "\n\nThe Area for: " << Tri.getName() << endl;
	cout << "with base = " << Tri.getBase() << " and sideA = " << Tri.getSideA() << " and sideC = " << Tri.getSideC();
	cout << " is " << Tri.getArea() << endl; 
	
	Tri.drawShape(); //draw the rectangle on screen with *
	outfile.open("TriShape.txt"); //draw the shape in a file
	  if (outfile.is_open())
	  {
	  	
	  	outfile << "\nDrawing for: " << Tri.getName()<< endl; 
		 		
		 	for(int base=1;base<=Tri.getHeight();base++)
		 	{
		 		for(int sideA=1;sideA<=base; sideA++)
		 		{
		 			 
					 outfile<<"*";
					 
		 		}
				outfile<<"\n";
		 	}
		 	
		}
		outfile.close(); 
		system("TriShape.txt"); //open the output file
}

void drawCirc(CircleShape &Circle)
{
	double userInput = 0.0;   
	ofstream outfile; //output file stream
	
	changeColor(32); 
	cout << "\n\n**********Circle Program***********" << endl;
	changeColor(7);
	
	cout << fixed << setprecision(3); 
	Circle.setName("Circle_1");
	
	cout << "Kindly provide me a radius for the Circle. ";
	userInput = validateDouble(userInput); 
	Circle.setRadius(userInput);
		
// Print the Perimeter (circumference) of the object.
	cout << "\nThe  Circumference for: " << Circle.getName() << endl;
	cout << "with radius = " << Circle.getRadius() << " and PI = " << M_PI; 
	cout << " is " << Circle.getPerimeter(); 
	
		// Print the area of the object.
	cout << "\n\nThe Area for: " << Circle.getName() << endl;
	cout << "with radius = " << Circle.getRadius() << " and PI = " << M_PI; 
	cout << " is " << Circle.getArea() << endl; 
	
	Circle.drawShape(); //draw the Circle on screen with *
	
	outfile.open("CircShape.txt"); //draw the shape in a file
	  if (outfile.is_open())
	  {
		outfile << "\nDrawing for: " << Circle.getName() << endl; 
		 
			  //from http://www.cplusplus.com/forum/beginner/62634/
			  float console_ratio = 2.0/1.0;
    		  float a = console_ratio*Circle.getRadius();
    		  float b = Circle.getRadius();
			  changeColor(32); 
		 	  for (int y = -Circle.getRadius(); y <= Circle.getRadius(); y++)
    		  {
        		for (int x = -console_ratio*Circle.getRadius(); x <= console_ratio*Circle.getRadius(); x++)
        		{
            		float d = (x/a)*(x/a) + (y/b)*(y/b);
		            if (d > 0.90 && d < 1.1)
		            {
		                outfile << "*";
		            }
		            else
		            {
		                 outfile << " ";
		            }
        		}
        		outfile << endl;
    		}
			outfile<<endl;
		}
		outfile.close(); 
		system("CircShape.txt"); //open the output file
}

void drawSquare(SquareShape &Square)
{
	double userInput = 0.0;  
	ofstream outfile; //output file stream 
	
	changeColor(32); 
	cout << "\n\n**********Square Program***********" << endl;
	changeColor(7);
	
	cout << fixed << setprecision(3); 
	Square.setName("Square_1");
	
	cout << "Kindly provide me a side for the Square. ";
	userInput = validateDouble(userInput); 
	Square.setSide(userInput);
	
	// Print the Perimeter of the object.
	cout << "\nThe Perimeter for: " << Square.getName() << endl;
	cout << "with side = " << Square.getSide(); 
	cout << " is " << Square.getPerimeter(); 
	
		// Print the area of the object.
	cout << "\n\nThe Area for: " << Square.getName() << endl;
	cout << "with side = " << Square.getSide(); 
	cout << " is " << Square.getArea() << endl; 
	
	Square.drawShape(); //draw the Square on screen with *
	outfile.open("SquareShape.txt"); //draw the shape in a file
	  if (outfile.is_open())
	  {			 
			outfile << "\nDrawing for: " << Square.getName() << endl; 
		 
		 	for(int i=0;i<Square.getSide();i++)
		 	{
		 		for(int j=0;j<Square.getSide();j++)
		 		{					 
					 outfile<<" * ";					 
		 		}
				outfile<<endl;
		 	}
		}
		outfile.close(); 
		system("SquareShape.txt"); //open the output file
}
#endif
