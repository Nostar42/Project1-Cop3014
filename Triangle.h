#ifndef Triangle_H
#define Triangle_H

//Triangle Class Definition
class Triangle{
	private:
		double base, height;
		
	public:
		
		Triangle();
		Triangle(double, double);
		
		double getHeight();
		double getBase();
		void setHeight(double);
		void setBase(double);
		
		double area();
};

#endif
