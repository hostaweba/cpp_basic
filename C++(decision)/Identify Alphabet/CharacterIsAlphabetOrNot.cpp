#include<iostream>
using namespace std;
int main()
{
	int pause;
        char ch;
        cout<<"Enter a Character: \n ";
        cin>>ch;
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
                cout<<ch<<" is an Alphabet";
        }
        else
        {
                cout<<ch<<" is Not an Alphabet";
        }
        cin>>pause;
        return 0;
}
