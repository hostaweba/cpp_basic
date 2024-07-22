#include<iostream>
using namespace std;
int main()
{
	int pause;
        char ch;
        cout<<"Enter an Alphabet : ";
        cin>>ch;
        if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
        {
                cout<<"This is a Vowel";
        }
        else
        {
                cout<<"This is Not a Vowel";
        }
        cin>>pause;
        return 0;
}
