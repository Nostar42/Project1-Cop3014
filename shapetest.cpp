/*
 * FILE: shapetest.cpp
 *
 * PURPOSE: This file contains the test driver program to call all functionality
 *          for each shape object.
 *
 * AUTHOR:                   
 ,-----.                                                   ,------.                 ,--.                ,--.                
'  .--./ ,--,--.,--,--,--. ,---. ,--.--. ,---. ,--,--,     |  .--. ' ,--,--. ,---.,-'  '-. ,---. ,--.--.`--',--.,--. ,---.  
|  |    ' ,-.  ||        || .-. :|  .--'| .-. ||      \    |  '--' |' ,-.  |(  .-''-.  .-'| .-. ||  .--',--.|  ||  |(  .-'  
'  '--'\\ '-'  ||  |  |  |\   --.|  |   ' '-' '|  ||  |    |  | --' \ '-'  |.-'  `) |  |  ' '-' '|  |   |  |'  ''  '.-'  `) 
 `-----' `--`--'`--`--`--' `----'`--'    `---' `--''--'    `--'      `--`--'`----'  `--'   `---' `--'   `--' `----' `----'  
 */

#include <iostream>
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    cout << "~~~ SHAPES PROJECT TEST DRIVER ~~~\n";

    // Circle Tests
    cout << "\n-= Circle named c1 created with default constructor =-" << endl;
    Circle c1;
    cout << "c1's expected radius (1) v. actual radius (" << c1.getRadius() << ")" << endl;
    cout << "c1's expected area (3.141592) v. actual radius (" << c1.area() << ")" << endl;
    cout << "c1's expected diameter (2) v. actual diameter (" << c1.diameter() << ")" << endl;
    cout << "c1's expected circumference (6.283184) v. actual circumference (" << c1.circumference() << ")" << endl;

    cout << "\n-= c1's radius set to 1.5 =-" << endl;
    c1.setRadius(1.5);
    cout << "c1's expected radius (1.5) v. actual radius (" << c1.getRadius() << ")" << endl;
    cout << "c1's expected area (7.068582) v. actual radius (" << c1.area() << ")" << endl;
    cout << "c1's expected diameter (3) v. actual diameter (" << c1.diameter() << ")" << endl;
    cout << "c1's expected circumference (9.424776) v. actual circumference (" << c1.circumference() << ")" << endl;

    cout << "\n-= Circle named c2 created via overloaded constructor with param (Radius = 13) =-" << endl;
    Circle c2(13);
    cout << "c1's expected radius (13) v. actual radius (" << c2.getRadius() << ")" << endl;
    cout << "c1's expected area (530.929) v. actual radius (" << c2.area() << ")" << endl;
    cout << "c1's expected diameter (26) v. actual diameter (" << c2.diameter() << ")" << endl;
    cout << "c1's expected circumference (81.6814) v. actual circumference (" << c2.circumference() << ")" << endl;


    // Triangle Tests
    cout << "\n-= Triangle named t1 created with default constructor =-" << endl;
    Triangle t1;
    cout << "t1's expected base (1) v. actual base (" << t1.getBase() << ")" << endl;
    cout << "t1's expected height (1) v. actual height (" << t1.getHeight() << ")" << endl;
    cout << "t1's expected area (0.5) v. actual diameter (" << t1.area() << ")" << endl;

    cout << "\n-= t1's base set to 1.5 =-" << endl;
    t1.setBase(1.5);
    cout << "t1's expected base (1.5) v. actual base (" << t1.getBase() << ")" << endl;
    cout << "t1's expected height (1) v. actual height (" << t1.getHeight() << ")" << endl;
    cout << "t1's expected area (0.75) v. actual area (" << t1.area() << ")" << endl;

    cout << "\n-= t1's height set to 2.25 =-" << endl;
    t1.setHeight(2.25);
    cout << "t1's expected base (1.5) v. actual base (" << t1.getBase() << ")" << endl;
    cout << "t1's expected height (2.25) v. actual height (" << t1.getHeight() << ")" << endl;
    cout << "t1's expected area (1.6875) v. actual area (" << t1.area() << ")" << endl;

    cout << "\n-= Triangle named t2 created via overloaded constructor with params (Base = 4.75) and (Height = 3.33) =-" << endl;
    Triangle t2(4.75, 3.33);
    cout << "t2's expected base (4.75) v. actual base (" << t2.getBase() << ")" << endl;
    cout << "t2's expected height (3.33) v. actual height (" << t2.getHeight() << ")" << endl;
    cout << "t2's expected area (7.90875) v. actual area (" << t2.area() << ")" << endl;
    


    // Rectangle Tests
    cout << "\n-= Rectangle named r1 created with default constructor =-" << endl;
    Rectangle r1;
    cout << "r1's expected width (1) v. actual width (" << r1.getWidth() << ")" << endl;
    cout << "r1's expected length (1) v. actual length (" << r1.getLength() << ")" << endl;
    cout << "r1's expected area (1) v. actual area (" << r1.area() << ")" << endl;
    cout << "r1's expected diagonal (1.41421) v. actual diagonal (" << r1.diagonal() << ")" << endl;
    cout << "r1's expected perimeter (4) v. actual perimeter (" << r1.perimeter() << ")" << endl;
    r1.isSquare();
    
    
    cout << "\n-= r1 length set to 1.5 =-" << endl;
    r1.setLength(1.5);
    cout << "r1's expected width (1) v. actual width (" << r1.getWidth() << ")" << endl;
    cout << "r1's expected length (1.5) v. actual length (" << r1.getLength() << ")" << endl;
    cout << "r1's expected area (1.5) v. actual area (" << r1.area() << ")" << endl;
    cout << "r1's expected diagonal (1.80278) v. actual diagonal (" << r1.diagonal() << ")" << endl;
    cout << "r1's expected perimeter (5) v. actual perimeter (" << r1.perimeter() << ")" << endl;
    r1.isSquare();

    cout << "\n-= r1 width set to 2.25 =-" << endl;
    r1.setWidth(2.25);
    cout << "r1's expected width (2.25) v. actual width (" << r1.getWidth() << ")" << endl;
    cout << "r1's expected length (1.5) v. actual length (" << r1.getLength() << ")" << endl;
    cout << "r1's expected area (3.375) v. actual area (" << r1.area() << ")" << endl;
    cout << "r1's expected diagonal (2.70416) v. actual diagonal (" << r1.diagonal() << ")" << endl;
    cout << "r1's expected perimeter (7.5) v. actual perimeter (" << r1.perimeter() << ")" << endl;
    r1.isSquare();

    cout << "\n-= Rectangle named r2 created via overloaded constructor with params (Width = 3.33) and (Length = 3.33) =-" << endl;
    Rectangle r2(3.33, 3.33);
    cout << "r2's expected width (3.33) v. actual width (" << r2.getWidth() << ")" << endl;
    cout << "r2's expected length (3.33) v. actual length (" << r2.getLength() << ")" << endl;
    cout << "r2's expected area (11.0889) v. actual area (" << r2.area() << ")" << endl;
    cout << "r2's expected diagonal (4.70933) v. actual diagonal (" << r2.diagonal() << ")" << endl;
    cout << "r2's expected perimeter (13.32) v. actual perimeter (" << r2.perimeter() << ")" << endl;
    r2.isSquare();
	

    return 0;
}
