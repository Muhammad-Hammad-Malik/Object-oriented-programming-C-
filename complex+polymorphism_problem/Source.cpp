#include "Header.h"
account :: account()
{
	accountnumber=1111;
	balance=10000;
}
void account :: setter()
{
	cout<<"enter account number "<<endl;
	cin>>accountnumber;
	cout<<"enter account balance "<<endl;
	cin>>balance;
}
int account :: accgetter()
{
	return accountnumber;
}
float account :: balgetter()
{
	return balance;
}
void account :: print()
{
	cout<<"account number is = "<<accountnumber<<endl;
	cout<<"account balance is ="<<balance<<endl;
}
void account :: debit(float amount)
{
	
}
void account :: credit(float amount)
{
	
}
 currentaccount :: currentaccount()
{
	minbalance=500;
	servicecharge=17;
}
 void currentaccount :: debit(float amount )
 {
	 if(amount > balgetter())
		 cout<<"insufficent funds "<<endl;
	 else
		 balance=balance-amount;
 }
 void currentaccount :: credit(float amount)
 {
	 if(amount<minbalance)
		 balance=balance+amount-servicecharge;
	 else
		 balance=balance+amount;

 }
 void currentaccount :: print()
{
	cout<<"the service charges are "<<servicecharge;
	cout<<"account number is = "<<accountnumber<<endl;
	cout<<"account balance is ="<<balance<<endl;
}
 savingaccount :: savingaccount()
 {
	 interest=8;
 }
  void savingaccount :: debit(float amount )
 {
	 if(amount > balgetter())
		 cout<<"insufficent funds "<<endl;
	 else
		 balance=balance-amount;
 }
 void savingaccount :: credit(float amount)
 {
	 
	 interest=balance*0.8;
	 balance=balance+interest+amount;
 }
 void savingaccount :: print()
{
	cout<<"the interest charges are "<<interest;
	cout<<"account number is = "<<accountnumber<<endl;
	cout<<"account balance is ="<<balance<<endl;
}