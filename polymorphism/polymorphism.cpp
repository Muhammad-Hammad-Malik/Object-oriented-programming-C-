#include <iostream>
using namespace std;

class shape
{
protected:
public:

virtual void area()
{
	cout<<"THIS WONT BE CALLED AS IT IS A VIRTUAL FUNCTION"<<endl;
}

virtual void print()
{
	cout<<"THIS WONT BE CALLED AS IT IS A VIRTUAL FUNCTION"<<endl;	
}	
};


class circle : public shape
{
protected:
	int *radius;
	int *a;
public:
	circle(int &r):radius(&r)	
	{
		radius=&r;
	}
	
	void area()
	{
		int b=*radius;
		int xa=3.14*b*b;
		a=&xa;
		
	}
	void print()
	{
		cout<<*a;
	}
};

class square : public shape
{
protected:
	int *length;
	int *a;
public:
	square(int &r):length(&r)	
	{
		length=&r;
	}
	void area()
	{
		int b=*length;
		int xa=b*b;
		a=&xa;
		
	}
	void print()
	{
		cout<<*a;
	}
};

class rectangle : public shape
{
protected:
	int *length;
	int *width;
	int *a;
public:
	rectangle(int &r,int &w):length(&r)
	{
		length=&r;
		width=&w;
	}
	void area()
	{
		int b=*length;
		int h=*width;
		cout<<"";
		int xa=b*h;
		a=&xa;
		
	}
	void print()
	{
		cout<<*a;
	}
};

class triangle : public shape
{
protected:
	int *length;
	int *width;
	int *a;
public:
	triangle(int &r,int &w):length(&r)
	{
		length=&r;
		width=&w;
	}
	void area()
	{
		int b=*length;
		int h=*width;
		cout<<"";
		int xa=b*h;
		xa=xa/2;
		a=&xa;
		
	}
	void print()
	{
		cout<<*a;
	}
};

int main()
{
	shape *obj;
	
	int x1=10;
	circle d1(x1);
	obj=&d1;
	obj->area();
	obj->print();
	
	cout<<endl<<endl;
	
	int x2=6;
	square d2(x2);
	obj=&d2;
	obj->area();
	obj->print();
	cout<<endl<<endl;
	
	int x3=6;
	int x4=8;
	rectangle d3(x3,x4);
	obj=&d3;
	obj->area();
	obj->print();
	
	cout<<endl<<endl;
	int x5=7;
	int x6=9;
	triangle d4(x5,x6);
	obj=&d4;
	obj->area();
	obj->print();
	
}
