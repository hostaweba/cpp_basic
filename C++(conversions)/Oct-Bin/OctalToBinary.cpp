#include<iostream>
using namespace std;
int main()
{
        long int i=0;
        char octnum[1000];
        cout<<"\n Enter Octal Number : ";
        cin>>octnum;
        cout<<"\n Conversion of Octal Number to Binary Number : ";
        while(octnum[i])
        {
                switch(octnum[i])
                {
                        case '0' : cout<<"000";
                                break;
                        case '1' : cout<<"001";
                                break;
                        case '2' : cout<<"010";
                                break;
                        case '3' : cout<<"011";
                                break;
                        case '4' : cout<<"100";
                                break;
                        case '5' : cout<<"101";
                                break;
                        case '6' : cout<<"110";
                                break;
                        case '7' : cout<<"111";
                                break;
                        default : cout<<"\n Invalid Octal Digit "<<octnum[i];
                                break;
                }
                i++;
        }
        return 0;
}
