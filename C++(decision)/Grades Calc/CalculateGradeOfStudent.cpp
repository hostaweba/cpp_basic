#include<iostream>
using namespace std;
int main()
{
	int pause;
        int marks;
        cout<<"\n Enter Marks : ";
        cin>>marks;
        if (marks>=70)
        {
                cout<<"\n Distinction";
        }
        else
        {
                if(marks>=60)
                {
                        cout<<"\n First Class";
                }
                else
                {
                        if(marks>=50)
                        {
                                cout<<"\n Second Class";
                        }
                        else
                        {
                                cout<<"\n Fail";
                        }
                }
        }
        cin>>pause;
        return 0;
}
