/*
Using Dr_T's Color in CPP as a Header //filename: Color_in_CPP.h in my solution folder
*/
#ifndef SHAPE_CLASSES_H
#define SHAPE_CLASSES_H


// Base class
class Shape  // "paraent class"
{
   protected:   //accessible by dervied classes
      string name; 
	  double perimeter;
      double surfaceArea;
      
    public:
		Shape() //default constructor
		{
		    // cout << "\nParent Shape Default Constructor Called " << endl; 
			 string name = "Initial Name"; 
	  		 perimeter = 0.0;
      		 surfaceArea = 0.0;
		} 
		
		void setName(string n) 
		{
			name = n;
	    }
	    void setPerimeter(double p) 
		{
			perimeter = p;
		}
			
		void setSurfaceArea(double sa) 
		{
			surfaceArea = sa;
		}
};

// Derived class
class RectangleShape: public Shape 
{
	private:
		double length;
		double width; 
	
	public:
		RectangleShape() //default constructor
		{ 
	  		//cout << "\nBase Rect Default Constructor Called " << endl;  
			length = 0.0;
      width = 0.0;
		} 
		void setLength(double l)
		{
			length = l; 
		}
		void setWidth(double w)
		{
			width = w; 
		}
		double getPerimeter() //P=2(l+w)
		{ 
		 	return 2*(length + width); 
		}
		double getArea() //A=(l*w)
		{ 
		 	return (length * width); 
		}
		string getName() 
		{ 
		 	return name; 
		}
		double getLength() 
		{ 
		 	return length; 
		}
		double getWidth() 
		{ 
		 	return width; 
		}
		void drawShape()
		{
			cout << "\nDrawing for: " << name << endl; 
		 
		 	for(int i=0;i<width;i++)
		 	{
		 		for(int j=0;j<length;j++)
		 		{
					 changeColor(32);
					 cout<<"*";
					 changeColor(7); 
		 		}
				cout<<endl;
		 	}
		}
};

// Derived class
class TriangleShape: public Shape 
{
	private:
		double base;
		double height; 
		double sideA;
		double sideC; 
	
	public:
		TriangleShape() //default constructor
		{ 
	  		base = 0.0;
			  height = 0.0; 
			  sideA = 0.0;
			  sideC = 0.0; 
		} 
		void setBase(double b)
		{
			base = b; 
		}
		void setHeight(double h)
		{
			height = h; 
		}
		void setSideA(double sa)
		{
			sideA = sa; 
		}
		void setSideC(double sc)
		{
			sideC = sc; 
		}
		double getPerimeter() //P=a+b+c
		{ 
		 	return (sideA + base + sideC); 
		}
		double getArea() //A=.5(b+h)
		{ 
		 	return .5*(base * height); 
		}
		string getName() 
		{ 
		 	 if(base == sideA && sideA == sideC)
		 	 {
		 	 	name = "Equilateral Triangle"; 
		 	 }
		 	 else if( ((base == sideA) && base != sideC) || 
			          ((sideA == sideC) && sideA != base) || 
					  ((base == sideC) && base != sideA) 
					)  
		 	 {
		 	 	name = "Isosceles Triangle"; 
		 	 }
		 	 else if(base != sideA && sideA != sideC && base != sideC)
		 	 {
		 	 	name = "Scalene Triangle"; 
		 	 }
		 	 else
		 	 {
		 	 	name = "Bad Triangle"; 
		 	 }
			 return name; 
		}
		double getBase() 
		{ 
		 	return base; 
		}
		double getHeight() 
		{ 
		 	return height; 
		}
		double getSideA() 
		{ 
		 	return sideA; 
		}
		double getSideC() 
		{ 
		 	return sideC; 
		}
		void drawShape()
		{
			cout << "\nDrawing for: "; 
			changeColor(32); 
			cout << name << endl; 
			changeColor(7); 
		 	
		 	for(int base=1;base<=height;base++)
		 	{
		 		for(int sideA=1;sideA<=base;sideA++)
		 		{
		 			 changeColor(32);
					 cout<<"*";
					 changeColor(7); 
		 		}
				cout<<endl;
		 	}
		 	
		}
};

// Derived class
class CircleShape: public Shape 
{
	private:
		double radius; 	
				
	public:
		CircleShape() //default constructor
		{ 
	  		radius = 0.0;
		}
		void setRadius(double r)
		{
			radius = r; 
		}
		double getPerimeter() //C=2pr // Circumference for Circle
		{ 
		 	return (2*M_PI*radius); 
		}
		double getArea() //A=pr2
		{ 
		 	return (M_PI * pow(radius,2)); 
		}
		string getName() 
		{ 
		 	return name; 
		}
		double getRadius() 
		{ 
		 	return radius; 
		}
		void drawShape()
		{
			cout << "\nDrawing for: " << name << endl; 
		 
			  //from http://www.cplusplus.com/forum/beginner/62634/
			  float console_ratio = 2.0/1.0;
    		  float a = console_ratio*radius;
    		  float b = radius;
			  changeColor(32); 
		 	  for (int y = -radius; y <= radius; y++)
    		  {
        		for (int x = -console_ratio*radius; x <= console_ratio*radius; x++)
        		{
            		float d = (x/a)*(x/a) + (y/b)*(y/b);
		            if (d > 0.90 && d < 1.1)
		            {
		                cout << "*";
		            }
		            else
		            {
		                 cout << " ";
		            }
        		}
        		cout << endl;
    		}
			cout<<endl;
			changeColor(7); 
		}
	
}; 

// Derived class
class SquareShape: public Shape 
{
	private:
		double side;
	
	public:
		SquareShape() //default constructor
		{ 
	  		 side = 0.0;
		} 
		void setSide(double s)
		{
			side = s; 
		}
		double getPerimeter() //P=4(s)
		{ 
		 	return (4*side); 
		}
		double getArea() //A=(s*s)
		{ 
		 	return pow(side,2); 
		}
		string getName() 
		{ 
		 	return name; 
		}
		double getSide() 
		{ 
		 	return side; 
		}
		void drawShape()
		{
			cout << "\nDrawing for: " << name << endl; 
		 
		 	for(int i=0;i<side;i++)
		 	{
		 		for(int j=0;j<side;j++)
		 		{
					 changeColor(32);
					 cout<<" * ";
					 changeColor(7); 
		 		}
				cout<<endl;
		 	}
		}
};


#endif
