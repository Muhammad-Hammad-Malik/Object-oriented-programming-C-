
#include "Header.h"

localphone :: localphone()
	{
		for(int a=0;a<7;a++)
		{
			larr[a]=0;
		}
	}

	void localphone ::  input1()
	{
		for(int a=0;a<7;a++)
		{
			cout<<"enter a digit of your local number";
			cin>>larr[a];
			while(larr[a]>9||larr[a]<0)
			{
				cout<<"wrong input enter again";
				cin>>larr[a];
			}
		}
	}
	void localphone ::  print1()
	{
		for(int a=0;a<7;a++)
		{
			cout<<larr[a];
		}
	}


	nationalphone :: nationalphone()
	{
	for(int a=0;a<3;a++)
	{
		narr[a]=0;
	}
	}

	void nationalphone :: input2()
	{
		for(int a=0;a<3;a++)
		{
			cout<<"enter a digit of your national number";
			cin>>narr[a];
			while(narr[a]>9||narr[a]<0)
			{
				cout<<"wrong input enter again";
				cin>>narr[a];
			}
		}
		input1();
	}
	void nationalphone :: print2()
	{
		for(int a=0;a<3;a++)
		{
			cout<<narr[a];
		}
		cout<<"-";
		print1();
	}
	




	intphone :: intphone()
	{
		for(int a=0;a<3;a++)
		{
			iarr[a]=0;
		}
	}
	void intphone ::  input3()
	{
		for(int a=0;a<3;a++)
		{
			cout<<"enter a digit of your international number";
			cin>>iarr[a];
			while(iarr[a]>9||iarr[a]<0)
			{
				cout<<"wrong input enter again";
				cin>>iarr[a];
			}
		}
		input2();
	}
	void intphone ::print3()
	{
		for(int a=0;a<3;a++)
		{
			cout<<iarr[a];
		}
		cout<<"-";
		print2();
	}

