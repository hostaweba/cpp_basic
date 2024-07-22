#include<iostream>
using namespace std;
int main()
{
        long int decinum, quot;
        int i=1, j, octnum[100];
        cout<<"\n Enter Decimal Number : ";
        cin>>decinum;
        quot=decinum;
        while(quot!=0)
        {
                octnum[i++]=quot%8;
                quot=quot/8;
        }
        cout<<"\n Conversion of Decimal Number to Octal Number : ";
        for(j=i-1; j>0; j--)
        {
                cout<<octnum[j];
        }
        return 0;
}
