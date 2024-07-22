#include<iostream>
using namespace std;
int main()
{
	int pause;
        int num, rem, orig, rev=0;

        cout<<"\n Enter Number : ";
        cin>>num;

        orig=num;
        while(num!=0)
        {
                rem=num%10;
                rev=rev*10 + rem;
                num=num/10;
        }

        if(rev==orig)  // check if original number is equal to its reverse
        {
                cout<<"\n Number is Palindrome";
        }
        else
        {
                cout<<"\n Number is Not Palindrome";
        }
        cin>>pause;
        return 0;
}


