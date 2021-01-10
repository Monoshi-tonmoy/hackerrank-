#include <stdio.h>

int main()
{

char c;
while(scanf("%c",&c))
{
 if(c ==32)
continue;
if(c>='a' && c<='z') printf("Lower case letter");
else if(c>='A' && c<='Z') printf("Upper case");
else if(c>='0'&&c<='9') printf("Number");
else printf("Symbol");
}

}
