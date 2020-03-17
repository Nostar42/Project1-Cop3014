#include "Triangle.h"

Triangle::Triangle(){
	this -> base = 1;
	this -> height = 1;
}

Triangle::Triangle(double Base, double Height){
	this -> base = Base;
	this -> height = Height;
}
double Triangle::getHeight(){
	return height;
}

double Triangle::getBase(){
	return base;
}

void Triangle::setHeight(double Height){
	this -> height = Height;
}

void Triangle::setBase(double Base){
	this -> base = Base;
}

double Triangle::area(){
	return  (0.5*base*height);
}
