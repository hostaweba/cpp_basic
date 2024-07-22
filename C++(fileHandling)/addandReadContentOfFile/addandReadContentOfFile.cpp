#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstdlib>
using namespace std;

struct Employee
{
     int empno ;
     char empname[20];
};
int main()
{
     struct Employee e;
     FILE *fp;
     int eno;
     char ename[20],c;
     int ch;
     while(1)
     {
          cout<<"\n\n 1. Add Records in the File";
          cout<<"\n 2. Search Record by Employee No.";
          cout<<"\n 3. Search Employee whose Name is 'XYZ'";
          cout<<"\n 4. Display All Records";
          cout<<"\n 5. Search Record by Employee Name";
          cout<<"\n 6. Exit";
          cout<<"\n\n Enter Your Choice : ";
          cin>>ch;
          switch(ch)
          {
               case 1:
                    fp=fopen("employee.txt","ab");
                    while (1)
                    {
                         cout<<"\n Enter Employee Number :  ";
                         cin>>e.empno;
                         fflush(stdin);
                         cout<<"\n Enter Employee Name   :  ";
                         cin>>e.empname;
                         fflush(stdin);
                     
                         fwrite(&e,sizeof(e),1,fp);
                         fflush(stdin);
                         cout<<"\n\n Do You Want to Continue?(Y/N) : ";
                         cin>>c;
                         if(c=='n' || c=='N')
                              break;
                         }
                         fclose(fp);
                    break;
                    
               case 2:
                    fp=fopen("employee.txt","rb");
                    cout<<"\n Enter Employee No.  : ";
                    cin>>eno;
                   
                    while(fread(&e,sizeof(e),1,fp))
                    {
                         if(eno == e.empno)
                         {
                              cout<<"\n\t"<<e.empno<<" : "<<e.empname;                            
                              break;
                         }
                    }
                    fclose(fp);
                    break;
               case 3:
                    fp=fopen("employee.txt","rb");
                    while(fread(&e,sizeof(e),1,fp))
                    {
                         if(strcmp(e.empname, "XYZ")==0)
                         {
                              while(1)
                              {
                                   cout<<"\n\t"<<e.empno<<" : "<<e.empname;
                                   break;
                              }
                         }
                    }
                    fclose(fp);
                    break;
               case 4:
                    fp=fopen("employee.txt","rb");
                    while (fread(&e,sizeof(e),1,fp))
                    {
                         while(1)
                         {
                              cout<<"\n\t"<<e.empno<<" : "<<e.empname<<endl;
                              break;
                         }
                    }
                    fclose(fp);
                    break;
               case 5:
                    fp=fopen("employee.txt","rb");
                    cout<<"\n Enter Employee Name  : ";
                    cin>>ename;
                    while(fread(&e,sizeof(e),1,fp))
                    {
                         if(strcmp(ename,e.empname)==0)
                         {
                              while(1)
                              {
                                   cout<<"\n\t"<<e.empno<<" : "<<e.empname;
                                   break;
                              }
                         }
                    }
                    fclose(fp);
                    break;
               case 6:
                    exit(0);
                    
               default:
                    cout<<"\n Invalid Choice";
          }
     }
     return 0;
}
