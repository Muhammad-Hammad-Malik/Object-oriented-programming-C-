#include <iostream>
using namespace std;
class tyre
{
private:
	int *width;
	int *aspect_ratio;
	int *diameter;
public:
	tyre(int w,int r, int d)
	{
		width=new int(w);
		aspect_ratio=new int (r);
		diameter=new int (d);
	}
	int widthgetter()
	{
		return *width;
	}
	int aspectgetter()
	{
		return *aspect_ratio;
	}
	int diametergetter()
	{
		return *diameter;
	}
	~tyre()
	{
		delete width;
		delete aspect_ratio;
		delete diameter;
		cout<<endl<<"destructor called for tyre"<<endl;
	}
	
};
class car
{
private:
	int *model;
	char *company;
	tyre *t1;
public:
	car(int m,string chararray, tyre & t11)
	{
		model=new int(m);
		t1=new tyre(t11);
		int size;
		size = sizeof(chararray);
		company=new char[size];
		int i=0;
		while(chararray[i]!='\0')
		{
			company[i]=chararray[i];
			i++;
		}
	}
	void disp()
	{
		cout<<"the model of car is :: "<<*model<<endl;
		cout<<"the name of the company is "<<company<<endl;
		int a,b,c;
		b=t1->diametergetter();
		a=t1->widthgetter();
		c=t1->aspectgetter();
		cout<<"the width of tyre is :: "<<a<<endl;
		cout<<"the diameter of tyre is :: "<<b<<endl;
		cout<<"the aspect ratio of tyre is :: "<<c<<endl;
		
	}
	~car()
	{
		cout<<"destructor called for car class" << endl;
	}
};
int main()
{
	tyre t1(10,22,5);
	car cnew(15,"honda",t1);
	cnew.disp();
}
