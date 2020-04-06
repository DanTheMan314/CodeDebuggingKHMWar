#include<iostream>
#include<cmath>
using namespace std;
int main(){
int num,d=0,n,r,p=0,a=1;
char choice;
cin>>num; //Changed the operator to >>
cin>>choice; //Changed the operator to >>
switch(choice) //Corrected the spelling
{
case 'a': //Added '' marks and : symbol
n=num;
while(n!=0) //Changed = to !
{
n=n/10;
d++;
}
n=num;
while(n!=0)
{
r=n%10;
a=a+pow(r,d); //Removed = symbol,changed sqr to pow,* to +
n=n/10;
}
cout<<a<<"\n"; break; //Added break statement
case 'p': //Added '' marks and : symbol
n=num;
while(n!=0)
{
r=n%10;
p=p*10+r; //Removed = symbol and changed + to *
n=n/10;
}
cout<<p<<"\n";
}
}
/*
Sample input-1
152
p

Sample output-1
251
Sample input-2
534
Sample output-2

a
216 */
