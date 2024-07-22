#include<iostream>
using namespace std;
int main()
{
	int pause;
        int n, nu, num=0, rem;

        cout<<"\n Enter any Positive Number : ";
        cin>>n;

        nu=n;
        while(nu!=0)
        {
                rem=nu%10;
                num=num + rem*rem*rem;
                nu=nu/10;
        }
        if(num==n)
        {
                cout<<"\n Number is Armstrong";
        }
        else
        {
                cout<<"\n Number is Not Armstrong";
        }
        cin>>pause;
        return 0;
}


