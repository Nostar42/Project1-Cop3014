#include "Circle.h"

Circle::Circle(){
	this -> radius = 1;
}

Circle::Circle(double Radius){
	this -> radius = Radius;
}

double Circle::getRadius(){
	return radius;
}

void Circle::setRadius(double Radius){
	this -> radius = Radius;
}

double Circle::area(){
	return(pi*radius*radius);
}

double Circle::diameter(){
	return(2*radius);
}

double Circle::circumference(){
	return(2*pi*radius);
}

