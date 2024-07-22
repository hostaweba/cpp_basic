#include<iostream>
using namespace std;
int main()
{
	int pause;
        long int binnum, decinum=0, i=1, rem;
        cout<<"\n Enter Binary Number : ";
        cin>>binnum;
        while(binnum!=0)
        {
                rem=binnum%10;
                decinum=decinum+rem*i;
                i=i*2;
                binnum=binnum/10;
        }
        cout<<"\n Conversion of Binary Number to Decimal Number : "<<decinum;
        cin>>pause;
        return 0;
}
