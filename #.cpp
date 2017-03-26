#include<iostream>
//#include<string.h>
#include<iomanip>


using namespace std;
ostream & currency(ostream & output)
{
         output<<"Rs";
         return output;
}
ostream & form(ostream & output)
{
         output.setf(ios::internal);
         output.setf(ios::showpos);
         output.setf(ios::showpoint);
         output.fill('*');
         output.precision(2);
         output<<setiosflags(ios::fixed)<<setw(10);
         return output;
}
int main()
{
         /*char * string1="c++ ";
         char * string2="programming";
         int m=strlen(string1);
         int n=strlen(string2);

         for(int i=0;i<n;i++)
         {
                  cout.write(string2,i);
                  cout<<"\n";
         }
         cout.write(string1,m).write(string2,n);
         cout<<"\n";
        cout.write(string1,m);
        cout.write(string2,n);
        cout.precision(2);
        cout<<1.4444;
        cout.width(8);
        cout<<sqrt(2);*/
        cout<<currency<<form<<7864.5;
        return 0;

}

