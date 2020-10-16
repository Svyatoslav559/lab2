#include <iostream>
#include <cstdio>
using namespace std;
class Circle {
	int r;
	int xC;
	int yC;
public:
	Circle();
	int getR();
	int getxC();
	int getyC();
	Circle operator+(int ob);
	Circle operator-(int ob);
};
class Square {
	int a;
	int xSlt;
	int ySlt;
public:
	Square();
	int geta();
	int getxS1();
	int getyS1();
	void show();
	Square operator+(int ob);
	Square operator-(int ob);
	Square operator*(int ob);
};
class Rectangle {
	int a1;
	int b1;
	int xR1, yR1, xR2, yR2, xR3, yR3, xR4, yR4;
public:
	Rectangle();
	int geta1();
	int getb1();
	int getxR1();
	int getyR1
	();
	void show();
	Rectangle operator+(int ob);
	Rectangle operator-(int ob);
	Rectangle operator*(int ob);
};
