#include <iostream>
using namespace std;
class big__int;
class bigint
{
	public:
		int *big_int;
		int length;
	public:
		bigint()
		{
			big_int=NULL;
			length=0;
		}
		bigint(int l1)
		{
			length=l1;
			big_int=new int[length];
			for(int a=0;a<l1;a++)
			{
				big_int[a]=0;
			}
		}
		bigint(const bigint& biggerint)
		{
			length=biggerint.length;
			big_int=new int[length];
			for(int a=0;a<length;a++)
			{
				big_int[a]=biggerint.big_int[a];
			}
		}
		const void operator=(const bigint &biggerint)
		{
			length=biggerint.length;
			big_int=new int[length];
			for(int a=0;a<length;a++)
			{
				big_int[a]=biggerint.big_int[a];
			}
			
		}
		void display()
		{
			cout<<endl;
			for(int i=0;i<length;i++)
			{
				cout<<big_int[i]<<" ";
			}
		}
		int  lengetter()
		{
			int L=length;
			return L;
		}
		int *arrgetter()
		{
			int *ptr = big_int;
			return ptr;
		}
		void lensetter(int l)
		{
			length=l;
		}
		void arrsetter(int *ptr,int length)
		{
			big_int=new int[length];
			for(int x=0;x<length;x++)
			{
				big_int[x]=ptr[x];
			}
		}
		int &operator [](int i)
		{
			if(i<length)
				return big_int[i]; 
		}
		void operator++()
		{
			for(int a=0;a<length;a++)
			{
				++big_int[a];
			}
			
		}
		void operator++(int)
		{
			for(int a=0;a<length;a++)
			 {
				big_int[a]++;
			 }
		}
		void operator--()
		{
			for(int a=0;a<length;a++)
			{
				--big_int[a];
			}
			
		}
		void operator--(int)
		{
			for(int a=0;a<length;a++)
			 {
				big_int[a]--;
			 }
		}
		friend class big__int ;
		
};
		class big__int
		{
			public:
			void output1(bigint &n)
			{
				cout<<endl;
				for(int a=0;a<n.length;a++)
				{
					cout<<n.big_int[a];
				}
			}
		};
int main()
{
	bigint s1;
	bigint s2(5);
	cout<<"to check the output of default constructor"<<endl;
	s2.display();
	int size;
	cout<<endl<<"the input is entered in this part "<<endl;
	cout<<"enter size of array";
	cin>>size;
	int *ptr=new int[size];
	for(int a=0;a<size;a++)
	{
		cout<<"enter value of array"<<endl;
		cin>>ptr[a];
	}
	s2.lensetter(size);
	s2.arrsetter(ptr,size);
	s2.display();
	cout<<endl;
	cout<<endl<<"the copy constructor is called"<<endl;
	bigint s3(s2);
	s3.display();
	cout<<endl<<"the assignment operation is called"<<endl;
	s1=s2;
	s1.display();
	cout<<endl<<"the subscript overloading fn is called here ";
	int dec=0;
	cout<<endl<<"enter index ";
	cin >>dec;
	if(dec<size)
		cout<<endl<<s2[dec];
	else
		cout<<"out of bounds"<<endl;
		++s2;
	cout<<endl<<"the pre increment is fn is called"<<endl;
	big__int obj1;
	obj1.output1(s2);
	cout<<endl<<"the pre decrement is called"<<endl;
	--s2;
	obj1.output1(s2);
	cout<<endl<<"the post incremet is called"<<endl;
	s2++;
	obj1.output1(s2);
	cout<<endl<<"the post decrement is called"<<endl;
	s2--;
	obj1.output1(s2);
	
	return 0;
	
}
