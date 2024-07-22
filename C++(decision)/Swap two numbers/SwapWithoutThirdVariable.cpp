#include<iostream>
using namespace std;
int main()
{
	int pause;
        int a,b;

        cout<<"\n Enter Two Numbers : \n";
        cin>>a>>b;

        cout<<"\n Before Swapping : \n";
        cout<<a<<"\n"<<b<<"\n";

        a=a+b;
        b=a-b;
        a=a-b;

        cout<<"\n After Swapping : \n";
        cout<<a<<"\n"<<b;
        cin>>pause;

        return 0;
}
