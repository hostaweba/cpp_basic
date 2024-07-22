#include<iostream>
#include<math.h>
using namespace std;
int main()
{
        long int octnum, decinum=0;
        int i=0;
        cout<<"\n Enter Octal Number : ";
        cin>>octnum;
        while(octnum!=0)
        {
                decinum = decinum + (octnum%10) * pow(8, i);
                i++;
                octnum=octnum/10;
        }
        cout<<"\n Conversion of Octal Number to Decimal Number : "<<decinum;
        return 0;
}
