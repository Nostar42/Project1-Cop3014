#ifndef Rectangle_H
#define Tectangle_H

// Rectangle Class Definition
class Rectangle{
	private:
		double length, width;
		bool Square;
	
	public:
		Rectangle();
		Rectangle(double, double);
		
		double getLength();
		double getWidth();
		void setLength(double);
		void setWidth(double);
		
		double area();
		double diagonal();
		double perimeter();
		bool isSquare();
};

#endif
