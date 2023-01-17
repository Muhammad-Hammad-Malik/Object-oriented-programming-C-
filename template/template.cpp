#include <iostream>
using namespace std;
template <typename T>
T AVG(T *arr, int size)
{
	T sum=0 ;
	for(int a=0;a<size;a++)
	{
		sum=sum+arr[a];	
	} 
	sum=sum/size;
	return sum;
}
int main()
{
	int arr[4]={3,5,6,7};
	int avg=AVG<int>(arr,4);
	cout<<avg<<endl;
	float arr1[4]={2.1,3.5,6.4,4.3};
	float avg1=AVG<float>(arr1,4);
	cout<<avg1<<endl;
	double arr2[4]={2.1,3.5,6.4,4.3};
	double avg2=AVG<double>(arr2,4);
	cout<<avg2<<endl;
	long arr3[4]={20000,333333,444342442,3244};
	long avg3=AVG<long>(arr3,4);
	cout<<avg3<<endl;
	char arr4[4]={'a','b','c','d'};
	cout<<AVG<char>(arr4,4);
	system("pause");
	
	
}