#include <stdio.h>

/*
 Ceci est une fonction inutile
*/
void une_fonction()
{
	return ;
}

int main()
{
	/*
	 Ceci est la fonction main
	*/
	char *c="#include <stdio.h>%c%c/*%c Ceci est une fonction inutile%c*/%cvoid une_fonction()%c{%c%creturn ;%c}%c%c";
	char *d="int main()%c{%c%c/*%c%c Ceci est la fonction main%c%c*/%c%cchar *c=%c%s%c;%c%cchar *d=%c%s%c;%c%cprintf(c,10,10,10,10,10,10,10,9,10,10,10);%c%cprintf(d,10,10,9,10,9,10,9,10,9,34,c,34,10,9,34,d,34,10,9,10,9,10,10);%c}%c";
	printf(c,10,10,10,10,10,10,10,9,10,10,10);
	printf(d,10,10,9,10,9,10,9,10,9,34,c,34,10,9,34,d,34,10,9,10,9,10,10);
}
