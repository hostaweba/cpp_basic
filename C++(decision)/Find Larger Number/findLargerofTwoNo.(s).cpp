#include<iostream>
using namespace std;
int main()
{
	int pause;
        int num1, num2, large;
        cout<<"\n Enter Two Numbers : \n";
        cout<<" ";
        cin>>num1;
        cout<<" ";
        cin>>num2;
        if(num1>num2)
        {
                large=num1;
        }
        else
        {
                large=num2;
        }
        cout<<"\n Larger Number is : "<<large;
        cin>>pause;
        return 0;
}
