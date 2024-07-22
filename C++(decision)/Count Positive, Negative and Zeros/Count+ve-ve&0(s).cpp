#include<iostream>
using namespace std;
int main()
{
	int pause;
        int cntp=0, cntn=0, cntz=0, arr[10], i;
        cout<<"\n Enter 10 numbers : \n";
        for(i=0; i<10; i++)
        {
                cin>>arr[i];
        }
        for(i=0; i<10; i++)
        {
                if(arr[i]<0)
                {
                        cntn++;
                }
                else if(arr[i]==0)
                {
                        cntz++;
                }
                else
                {
                        cntp++;
                }
        }
        cout<<"\n Positive Numbers : "<<cntp<<"\n";
        cout<<"\n Negative Numbers : "<<cntn<<"\n";
        cout<<"\n Zero : "<<cntz<<"\n";
cin>>pause;
        return 0;
}
