#include <iostream>
using namespace std;
template <typename T>
T isequalto(T num1, T num2)
{
	if(num1==num2)
		return true;
	else
		return false;
}
int main()
{
	int a,b;
	cout<<"enter the integers"<<endl;
	cin>>a>>b;
	bool check=isequalto<int> (a , b);
	if(check)
		cout<<"equal"<<endl;
	else
		cout<<"not equal"<<endl;
	float c,d;
	cout<<"enter point numbers";
	cin>>c>>d;
	bool check1=isequalto<float> (c, d);
	if(check1)
		cout<<"equal"<<endl;
	else
		cout<<"not equal"<<endl;
	char e;
	char f;
	cout<<"enter two character";
	cin>>e;
	cin>>f;
	bool check3=isequalto<char>(e,f);
	if(check3)
		cout<<"equal";
	else
		cout<<"not equal";

	system("pause");
}