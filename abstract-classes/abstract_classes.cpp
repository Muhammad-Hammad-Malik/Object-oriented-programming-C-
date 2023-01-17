#include <iostream>
#include <cmath>
using namespace std;
class shape
{
 protected:
 	float area;
 	float volume;
 public:
 	virtual void print()=0;
 	void setV(float a)
 	{
	volume=a;
	}
	void setA(float a)
	{
		area=a;
	}
	float getA()
	{
		return area;
	}
	float getV()
	{
		return volume;
	}
		
};
class point : public shape
{
 private:
 	int X;
 	int Y;
 public:
 	point()
 	{
 		X=0;
		Y=0;	
	}
	point(int a, int b)
	{
		X=a;
		Y=b;
	}
	void print()
	{
		cout<<"the X cordinate is "<<X;
		cout<<endl<<"the Y cordinate is "<<Y<<endl;
		cout<<"the area is"<<getA()<<"metres square "<<endl;
		cout<<"the volume is "<<getV()<<"metres cube "<<endl;
	}
	void setX(int a)
	{
		X=a;
	}
	void setY(int b)
	{
		Y=b;
	}
	int getX()
	{
		return X;
	}
	int getY()
	{
		return Y;
	}
	void areafn(float a)
	{
		float ar=3.14*a*a;
		setA(ar);
	}
	void volfn(float h,float r)
	{
		float vr=3.14*r*r*r*h;
		setV(vr);
	}
};

class circle : public point
{
	private:
	float radius;
	public:
	circle()
	{
		radius=0;
		setX(0);
		setY(0);
	}
	circle(float r,int a,int b)
	{
		radius=r;
		setX(a);
		setY(b);
	}
	void print1()
	{
		rgetter();
		cout<<"the radius is "<<radius<<endl;
		print();
	}
	float rgetter()
	{
		radius=sqrt((getX()*getX())+(getY()*getY()))/2;
		 areafn(radius);
		return radius;	
	}
	rsetter(float a)
	{
		radius=a;
	}
};
class cylinder : public circle
{
	private:
		float height;
	public:
	cylinder()
	{
		
	}
	cylinder (float h,float r,int a,int b)
	{
		setX(a);
		setY(b);
		rsetter(r);
		height=h;
	}
	void print2()
	{
		volfn(height,rgetter());
		cout<<"the height is "<<height<<endl;
		print1();
		
	}
};
int main()
{
	cylinder obj(10,5.0,2,2);
	obj.print2();
	system("pause");
}
