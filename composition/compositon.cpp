#include <iostream>
using namespace std;
class point
{
private:
	int *x;
	int *y;
public:
point(int a,int b)
{
	x=new int(a);
	y=new int(b);
}
int xgetter()
{
	return *x;
}
int ygetter()
{
	return *y;
}
~point()
{
	cout<<endl<<"destructor for point called"<<endl;
}
};
class circle
{
	private:
		float *radius;
		point *coordinate;
	public:
		circle(float r, int x, int y)
		{
			radius=new float(r);
			coordinate = new point(x,y);
		}
		bool checkcircle(point &p1)
		{
 	 		int A= ((p1.xgetter())-(coordinate->xgetter()))*((p1.xgetter())-(coordinate->xgetter()));
   			int B= ((p1.ygetter())-(coordinate->ygetter()))*((p1.ygetter())-(coordinate->ygetter()));
   			if((A+B)<=(*radius)*(*radius))
       			{return 1;}
   			else
       			{return 0;}

		}
		~circle()
		{
			cout<<endl<<"the circle destroyer is called"<<endl;
		}
};
class cylinder 
{
	private:
		int height;
		circle *top;
		circle *bottom;
	public:
		cylinder(int h,float r1,int x1,int y1,float r2,int x2,int y2)
		{
			height = h;
			top = new circle(r1,x1,y1);
			bottom = new circle(r2,x2,y2);
		}
		bool iscylinder(point &obj1)
		{
			bool f1;
			bool f2;
			f1=top->checkcircle(obj1);
			f2=bottom->checkcircle(obj1);
			if(f1||f2)
			return 1;
			else
			return 0;
		}
		~cylinder()
		{
			cout<<endl<<"the destructor for cylinder is called"<<endl;
		}
};
int main()
{
	point p1(4,4);
	circle c1(40,4,4);
	bool d;
	d=c1.checkcircle(p1);
	if(d==1)
	cout<<endl<<"the point lies in circle";
	else
	cout<<"the point does not lie inside circle";
	cylinder c3(10,4,5,6,7,8,9);
	bool d2;
	d2=c3.iscylinder(p1);
	if(d2==1)
	cout<<endl<<"it is part of cylinder"<<endl;
	else
	cout<<"it is not part of cylinder"<<endl;
}
