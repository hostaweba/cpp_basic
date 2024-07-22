#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
unsigned long convtodecinum(char hex[]);

int main()
{
        unsigned long decinum;
        char hexa[9];  //8 characters for 32-bit Hexadecimal Number and one for ' '

        cout<<"\n Enter Hexadecimal Number : ";
        cin>>hexa;

        decinum = convtodecinum(hexa);
        cout<<"\n Decimal Number is : "<<decinum<<"\n";

        return 0;
}

unsigned long convtodecinum(char hexa[])
{
        char *hexastr;
        int length = 0;
        const int base = 16;     // Base of Hexadecimal Number
        unsigned long decinum = 0;
        int i;
    
        for (hexastr = hexa; *hexastr != '\0'; hexastr++)  // Finds the length of Hexadecimal Number
        {
                length++;
        }

        hexastr = hexa;  // Now Find Hexadecimal Number
        for (i = 0; *hexastr != '\0' && i < length; i++, hexastr++)
        {
                // Compares *hexastr with ASCII values
                if (*hexastr >= 48 && *hexastr <= 57)   //*hexastr Between 0-9
                {
                        decinum += (((int)(*hexastr)) - 48) * pow(base, length - i - 1);
                }
                else if ((*hexastr >= 65 && *hexastr <= 70))   //*hexastr Between A-F
                {
                        decinum += (((int)(*hexastr)) - 55) * pow(base, length - i - 1);
                }
                else if (*hexastr >= 97 && *hexastr <= 102)   //*hexastr Between a-f
                {
                        decinum += (((int)(*hexastr)) - 87) * pow(base, length - i - 1);
                }
                else
                {
                        cout<<"\n Invalid Hexadecimal Number...";
                }
        }
        return decinum;
}
