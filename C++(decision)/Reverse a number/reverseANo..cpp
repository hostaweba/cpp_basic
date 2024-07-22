#include<iostream>
using namespace std;
int main()
{
	int pause;
        int num, rev=0, rem;
        cout<<"\n Enter Number : ";
        cin>>num;
        while(num!=0)
        {
                rem=num%10;
                rev=rev*10+rem;
                num=num/10;
        }
        cout<<"\n Reverse Number is : "<<rev;
        cin>>pause;
        return 0;
}
