#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h,i,j;
	int sum,sub,multi,division;
	cout<<"enter two number for addition:";
	cin>>a>>b;
	sum=a+b;
	cout<<"result for addition"<<sum<<endl;
	cout<<"enter two number for subtraction:";
	cin>>c>>d;
	sub=c-d;
	cout<<"result for subtraction"<<sub<<endl;
	cout<<"enter two number for multi:";
	cin>>e>>f;
	multi=e*f;
	cout<<"result for multiplication"<<multi<<endl;
	cout<<"enter two number for division:";
	cin>>g>>h;
         if (h == 0) {
        cout << "Error: Division by zero is not allowed!" << endl;
    } else {
        division = (float)g / (float)h;
        cout << "Result of division: " << division << endl;
    }

	return 0;
}