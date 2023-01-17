#include "Header1.h"
void employee :: putdata()
{
	cout<<"enter name";
	cin>>name;
	cout<<"enter id ";
	cin>>number;
}
void employee :: getdata()
{
	cout<<"the name of employee is "<<name<<endl;
	cout<<"the emplyee id is "<<number<<endl;;
}
void employee1 :: putdata1()
{
	putdata();
	cout<<"enter the payment duration weekly monthly or quarterly";
	cin>>time;
	cout<<"enter the compensation";
	cin>>salary;
}
void employee1 :: getdata1()
{
	getdata();
	cout<<"the payment is done "<<time;
	cout<<"the salary payable is "<<salary;
}
void manager :: input1()
{
	putdata1();
}
void manager :: output1()
{
	getdata1();
}
void scientist :: input2()
{
	putdata1();
}
void scientist :: output2()
{
	getdata1();
}
void labour :: input3()
{
	putdata1();
}
void labour :: output3()
{
	getdata1();
}
