
#include<iostream>
using namespace std;
int main()
{
	int pause;

        int num, i, count=0;

        cout<<"\n Enter Number : ";
        cin>>num;

        for(i=2;i<num;i++)
        {
                if(num%i==0)
                {
                        count++;
                        break;
                }
        }
        if(count==0)
        {
                cout<<"\n Prime Number";
        }
        else
        {
                cout<<" \n Not a Prime Number";
        }        
        cin>>pause;
        return 0;
}
