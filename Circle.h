#ifndef Circle_H
#define Circle_H

static const double pi = 3.141592;
//Circle Class Definition;
class Circle{
	private:	
    	double radius;
		
	public:
		Circle();
		Circle(double);
		double getRadius();
		double area();
		double diameter();
		double circumference();
		void setRadius(double);
};

#endif
