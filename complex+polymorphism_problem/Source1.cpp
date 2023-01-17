#include "Header.h"
int main()
{
	account *obj=new account;
	currentaccount obj1;
	savingaccount obj2;
	cout<<"                            FOR CURRENT ACCOUNT"<<endl;
	obj=&obj1;
	float amount;
	cout<<"enter the ammount to debit";
	cin>>amount;
	obj->debit(amount);
	cout<<"enter amount to credit";
	cin>>amount;
	obj->credit(amount);
	obj->print();
	cout<<endl;
	cout<<"                           FOR SAVING ACCOUNT"<<endl;
	obj=&obj2;
	float amount1;
	cout<<"enter the ammount to debit";
	cin>>amount1;
	obj->debit(amount1);
	cout<<"enter amount to credit";
	cin>>amount1;
	obj->credit(amount1);
	obj->print();
	cout<<endl;
	system("pause");
	return 0;
}