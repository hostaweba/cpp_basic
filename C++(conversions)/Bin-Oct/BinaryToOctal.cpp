#include<iostream>
#include<math.h>
using namespace std;

int convert(long long);
int main()
{
        long long binnum;
        cout<<"\n Enter Binary Number : ";
        cin>>binnum;
        cout<<"\n Binary Number to Octal Number : " <<convert(binnum);
        return 0;
}
int convert(long long binnum)
{
        int octnum = 0, decinum = 0, i = 0;
        while(binnum != 0)
        {
                decinum += (binnum % 10) * pow(2,i);
                ++i;
                binnum /= 10;
        }
        i = 1;
        while (decinum != 0)
        {
                octnum += (decinum % 8) * i;
                decinum /= 8;
                i *= 10;
        }
        return octnum;
}
