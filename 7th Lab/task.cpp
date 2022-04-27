#define _USE_MATH_DEFINES
#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std;


class Shape{
protected:
	int side;
public:
	void print(){
		cout<<"d"<<endl;
	}
};



class TwoDimensionalShape:Shape{
public:
	virtual void getArea(){
		cout<<"This calculate Area"<<endl;
	}
};




class ThreeDimensionalShape:Shape{
public:
	virtual void getArea(){
		cout<<"This calculate Area"<<endl;
	}

	virtual void getValume(){
		cout<<"This calculate Area"<<endl;
	}
};



class Circle:TwoDimensionalShape{
protected:
	int r;

public:
	void geta(int aa){
		r=aa;
	}
	void getArea(){
		cout<<M_PI*r*r<<endl;

}
};


class Square:TwoDimensionalShape{
protected:
	int a;

public:
	void geta(int aa){
		a=aa;
	}
	void getArea(){
		cout<<a*a<<endl;

}
};

class Triangle:TwoDimensionalShape{
protected:
	int a,b,c;

public:
	void geta(int aa){
		a=aa;
	}
	void getArea(){
		float m=(a+b+c)/2;
		cout<<sqrt(m*(m-a)*(m-b)*(a-c))<<endl;
	}
};



class Sphere:ThreeDimensionalShape{
protected:
	int r;

public:
	void geta(int aa){
		r=aa;
	}
	void getArea(){
		cout<<4*M_PI*r*r<<endl;
	}
	void getValume(){
		cout<<4*M_PI*r*r*r/3<<endl;
	}
};



class Cube:ThreeDimensionalShape{
protected:
	int a;

public:
	void geta(int aa){
		a=aa;
	}
	void getArea(){
		cout<<6*a*a<<endl;
	}
	void getValume(){
		cout<<a*a*a<<endl;
	}
};



class Tetrahedron:ThreeDimensionalShape{
	protected:
	int a;

public:
	void geta(int aa){
		a=aa;
	}

	void getArea(){
		cout<<sqrt(3)*a*a<<endl;
	}

	void getValume(){
		cout<<a*a*a/(6*sqrt(2))<<endl;
	}
};

int main(){

	Circle  c;
	c.geta(4);
	c.getArea();
}
