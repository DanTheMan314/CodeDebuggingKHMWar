#include <iostream> //Added .h
#include <cstring> //Fixed spelling,changed string to cstring
using namespace std;// Added namespace
int getLIndex(char*,char);
int getFIndex(char*,char); //Added declarations for getLindex and getFindex
int main()
{
	char str[100];
	char ch;
	int Lindex,Findex;
	cin>>str; //Added semicolon
	cin>>ch;
	Lindex = getLIndex(str,ch);
	Findex = getFIndex(str,ch);
	if(Lindex!=-1)
		cout<<Lindex<<endl<<Findex; //Changed order of Lindex and Findex
	else
		cout<<"NOT FOUND"<<endl;
	return 0;
}
int getLIndex(char* string,char  c) //Added * symbol
{
	int size = strlen(string),i=0;//Changed len to strlen
	while(i<size)
	{

		if(string[i]==c){ //Added = symbol
		    return i;

		}
		i++;
	}

}
int getFIndex(char* string,char c) //Added datatypes to arguments, changed spelling
{
	int size = strlen(string);//Changed len to strlen
	int i=size;
	while( i>=0)
{
		if(string[i]==c){
		    return i;

		}
	i--;
}

}
/*SAMPLE INPUT-1
	Kerala
a
SAMPLE OUTPUT:1
3
5
SAMPLE INPUT-2
MALAYALaM
A

SAMPLE OUTPUT:2
1
5  */
