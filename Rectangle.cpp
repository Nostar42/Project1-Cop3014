#include "Rectangle.h"
#include <cmath>
#include <iostream>
using namespace std;

Rectangle::Rectangle(){
	this -> length = 1;
	this -> width = 1;
}

Rectangle::Rectangle(double Length, double Width){
	this -> length = Length;
	this -> width = Width;
}

double Rectangle::getLength(){
	return length;
}

double Rectangle::getWidth(){
	return width;
}

void Rectangle::setLength(double Length){
	this -> length = Length;
}

void Rectangle::setWidth(double Width){
	this -> width = Width;
}

double Rectangle::area(){
	return(length*width);
}

double Rectangle::perimeter(){
	return((2*length)+(2*width));
}

double Rectangle::diagonal(){
	return (sqrt((length*length)+(width*width)));
}

bool Rectangle::isSquare(){
	if(this -> width == this ->  length){
        cout << "This is a square" << endl;
		return true;
	}
	else{
        cout << "Not a square" << endl;
		return false;
	}
}
