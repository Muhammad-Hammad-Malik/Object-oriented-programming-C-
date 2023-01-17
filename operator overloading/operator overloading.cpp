#include <iostream>
using namespace std;
class quadratic
{
private:
	int a;
	int b;
	int c;
public:
	quadratic()
	{
		a=0,b=0,c=0;
	}
	
	quadratic operator +(const quadratic &n)
	{
		quadratic s2;
		s2.a=a+n.a;
		s2.b=b+n.b;
		s2.c=c+n.c;
		return s2;
	}
	quadratic operator-(const quadratic &n)
	{
		quadratic s2;
		s2.a=a-n.a;
		s2.b=b-n.b;
		s2.c=c-n.c;
		return s2;
	}
const	quadratic operator=(const quadratic &n)
	{
		
		if(this!=&n)
		{
		
		a=n.a;
		b=n.b;
		c=n.c;
	   }
		return *this;
	}
	quadratic operator*(const quadratic &x)
	{
		int n;
		cout<<endl<<"enter constant for multiplication";
		cin>>n;
		quadratic s2;
		s2.a=a*n;
		s2.b=b*n;
		s2.c=c*n;
		return s2;
	}
	bool operator==(const quadratic &x)
	{
		if((a==x.a)&&(b==x.b)&&(c==x.c))
			return true;
		else
			return false;
	}
	bool operator!=(const quadratic &x)
	{
		if((a==x.a)&&(b==x.b)&&(c==x.c))
			return false;
		else
			return true;
	}
	friend void adder(quadratic &a1,quadratic &b1);
	friend void sub(quadratic &a1,quadratic &b1);
	
	void input()
	{
		cout<<"enter the 2nd order variable";
		cin>>a;
		cout<<"enter the 1st order variable";
		cin>>b;
		cout<<"enter the constant";
		cin>>c;
	}
	void output()
	{
		if(b>0 && c<0)
		{
			cout<<endl<<a<<"X^2"<<"+"<<b<<"X"<<c;
		}
		if(b<0 && c>0)
		{
			cout<<endl<<a<<"X^2"<<b<<"X"<<"+"<<c;
		}
		if(b<0 && c<0)
		{
			cout<<endl<<a<<"X^2"<<b<<"X"<<c;
		}
			else
			cout<<endl<<a<<"X^2"<<"+"<<b<<"X"<<"+"<<c;
	}
	friend istream& operator>>(istream& input, quadratic &obj);
	friend ostream& operator<<(ostream& input, quadratic &obj);
	
};
void adder(quadratic &a1,quadratic &b1)
{
	int x=a1.a+b1.a;
	int y=a1.b+b1.b;
	int z=a1.c+b1.c;

		if(y>0 && z<0)
		{
			cout<<endl<<x<<"X^2"<<"+"<<y<<"X"<<z;
		}
		if(y<0 && z>0)
		{
			cout<<endl<<x<<"X^2"<<y<<"X"<<"+"<<z;
		}
		if(y<0 && z<0)
		{
			cout<<endl<<x<<"X^2"<<y<<"X"<<z;
		}
		else
			cout<<endl<<x<<"X^2"<<"+"<<y<<"X"<<"+"<<z;
			
}
void sub(quadratic &a1,quadratic &b1)
{
	int x=a1.a-b1.a;
	int y=a1.b-b1.b;
	int z=a1.c-b1.c;
	
		if(y>0 && z<0)
		{
			cout<<endl<<x<<"X^2"<<"+"<<y<<"X"<<z;
		}
		if(y<0 && z>0)
		{
			cout<<endl<<x<<"X^2"<<y<<"X"<<"+"<<z;
		}
		if(y<0 && z<0)
		{
			cout<<endl<<x<<"X^2"<<y<<"X"<<z;
		}
			else
			cout<<endl<<x<<"X^2"<<"+"<<y<<"X"<<"+"<<z;
}
istream& operator>>(istream& input, quadratic &obj)
{
	cout<<"enter 2nd order var";
	input>>obj.a;
	cout<<"enter 1st order var";
	input>>obj.b;
	cout<<"enter constant";
	input>>obj.c;
	return input;
}
ostream& operator <<(ostream& output,quadratic &obj)
{
	output<<obj.a<<"X^2"<<"+";
	output<<obj.b<<"X"<<"+";
	output<<obj.c;
}
int main()
{
	quadratic X;
	quadratic Y;
	X.input();
	Y.input();
	quadratic Z;
	cout<<"this part is sum using operator"<<endl;
	Z=X+Y;
	Z.output();
	cout<<endl<<"this part is subtract using operator"<<endl;
	quadratic U=X-Y;
	U.output();
	cout<<endl<<"this part is add using friend function"<<endl;
	adder(X,Y);
	cout<<endl<<"this part is sunbtract using friend function"<<endl;
	sub(X,Y);
	cout<<endl<<"this part is multiplier with constant"<<endl;
	Z=X*Y;
	cout<<endl;
	Z.output();
	cout<<endl<<"this is the object input using istream"<<endl;
	cin>>X;
	cout<<endl<<"this part is the object output using ostream"<<endl;
	cout<<X;
	
	cout<<endl<<"comparison part is called"<<endl;
	X.input();
	Y.input();
	if(X==Y)
		cout<<"these objects are equal"<<endl;
	if(X!=Y)
		cout<<"these objects are not equal"<<endl;
		cout<<endl<<"the assignment operator is called"<<endl;
		Z=X;
	X.input();
	Z.output();
	return 0;
}
