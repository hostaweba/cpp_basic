#include<iostream>
using namespace std;
int main()
{
	int pause;
        int year;

        cout<<"\n Enter Year : ";
        cin>>year;

        if((year%4==0) && (year%100!=0))
        {
                cout<<"\n This is a Leap Year";
        }
        else if(year%100==0)
        {
                cout<<"\n This is not a Leap Year";
        }
        else if(year%400==0)
        {
                cout<<"\n This is a Leap Year";
        }
        else
        {
                cout<<"\n This is not a Leap Year";
        }
        cin>>pause;
        return 0;
}
