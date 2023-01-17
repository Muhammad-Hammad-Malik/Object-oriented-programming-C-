#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	ComplexNumber n1,n2,n3;
	n1.Input();
	cout<<"simply output"<<endl;
	n1.Output();
	cout<<endl;
	n2.Input();
	cout<<"checking if they are equal"<<endl;
	bool check1,check2,check3,check4;
	check1=n1.IsEqual(n2);
	if(check1)
		cout<<"they are equal"<<endl;
	else
		cout<<"they are not equal"<<endl;
	cout<<"the addition fn is called"<<endl;
	cout<<"the sum is= ";
	n3=n1+n2;
	n3.Output();
	cout<<endl;
	cout<<"the subtraction fn is called"<<endl;
	cout<<"the subtracted form is= ";
	n3=n1-n2;
	n3.Output();
	cout<<endl;
	cout<<"the multiplication fn is called"<<endl;
	n3=n1*n2;
	n3.Output();
	cout<<endl;
	cout<<"the conjugate fn is called"<<endl;
	n1=n1.Conjugate();
	n1.Output();
	cout<<endl;
	cout<<"The pre increment function is called"<<endl;
	n1++;
	n1.Output();
	cout<<endl;
	cout<<"the pre decrement is called"<<endl;
	n1--;
	n1.Output();
	cout<<endl;
	cout<<"the post increment is called"<<endl;
	++n1;
	n1.Output();
	cout<<endl;
	cout<<"yhe post decrement is called"<<endl;
	--n1;
	n1.Output();
	cout<<endl;
	
	cout<<"the comparison part is called"<<endl;
	n1.Input();
	n2.Input();
	if(n1<=n2)
		cout<<"is greater or equal to "<<endl;
	cout<<endl;
	if(n1>=n2)
		cout<<"is lesser or equal to "<<endl;
	cout<<endl;
	if(n1!=n2)
		cout<<"is not equal to "<<endl;
	cout<<endl;
	

	system("pause");
	return 0;

}
