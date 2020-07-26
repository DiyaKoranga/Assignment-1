#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[10];
    int i, j,t, l = 0;
    cout <<"Input string ";
    cin>>str;


	for(l=0;str[l]!='\0';++l);

	for(i=0,j=l-1;i<l/2;++i,--j)
	{
		if(str[j]!=str[i])
			t=0;
	}

	if(t==1)
        {cout <<"The string is not a palindrome";}
    else
        {cout <<"The string is a palindrome";}
    return 0;
}
