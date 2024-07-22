#include<iostream>
using namespace std;
int main()
{
	int pause;
        int num, rem=0, sum=0;
        cout<<"\n Enter Number : ";
        cin>>num;
        int temp=num;
        while(num>0)
        {
                rem=num%10;
                sum=sum+rem;
                num=num/10;
        }
        cout<<"\n Sum of the Digits : "<<sum;
        cin>>pause;
        return 0;
}
