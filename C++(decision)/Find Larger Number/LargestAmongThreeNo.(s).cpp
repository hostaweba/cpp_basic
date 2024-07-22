#include<iostream>
using namespace std;
int main()
{
	int pause;
        int num1, num2, num3, large;

        cout<<"\n Enter Three Numbers : \n";
        cin>>num1>>num2>>num3;

        large=num1;   //Assume num1 is largest number

        if(large<num2)
        {
                if(num2>num3)
                {
                        large=num2;
                }
                else
                {
                        large=num3;
                }
        }
        else if(large<num3)
        {
                if(num3>num2)
                {
                        large=num3;
                }
                else
                {
                        large=num2;
                }
        }
        else
        {
                large=num1;
        }
        cout<<"\n Largest Number is : "<<large;
        cin>>pause;
        return 0;
}
