#include<iostream>
using namespace std;
int main()
{
	int pause;
        int num1, num2, swap;

        cout<<"\n Enter Two Numbers : \n";
        cin>>num1>>num2;
        cout<<"\n The Values Before Swapping : \n"<<num1<<"\n"<<num2;

        swap=num1;
        num1=num2;
        num2=swap;

        cout<<"\n\n The Values After Swapping : \n"<<num1<<"\n"<<num2;
        cin>>pause;
        return 0;
}
