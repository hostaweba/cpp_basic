#include<iostream>
using namespace std;
int main()
{
        long int decinum, quot;
        int binnum[100], i=1, j;
        cout<<"\n Enter Decimal Number : ";
        cin>>decinum;
        quot=decinum;
        while(quot!=0)
        {
                binnum[i++]=quot%2;
                quot=quot/2;
        }
        cout<<"\n Conversion of Decimal Number to Binary Number : \n";
        for(j=i-1; j>0; j--)
        {
                cout<<binnum[j];
        }
        return 0;
}


