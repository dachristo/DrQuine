#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i = 5;
	int nb = 48;
	printf("%s\n", __FILE__);
	if (strcmp(__FILE__,"Sully.c") != 0)
		nb = 47;
	char fn[10] = "Sully_x.c";
	char cmd[40] = "clang ./Sully_x.c -o Sully_x; ./Sully_x";
	if (i > 0)
	{
		char *s = "#include <stdio.h>%c#include <fcntl.h>%c#include <stdlib.h>%c#include <string.h>%c%cint main(void)%c{%c%cint i = %c;%c%cint nb = 48;%c%cif (strcmp(__FILE__,%cSully.c%c) != 0)%c%c%cnb = 47;%c%cchar fn[10] = %c%s%c;%c%cchar cmd[40] = %c%s%c;%c%c%cif (i > 0)%c%c{%c%c%cchar *s = %c%s%c;%c%c%cfn[6] = i + nb;%c%c%cint fd = open(fn, O_WRONLY | O_CREAT, 0777);%c%c%cfn[6] = 'x';%c%c%cdprintf(fd,s,10,10,10,10,10,10,10,9,i+nb,10,9,10,9,34,34,10,9,9,10,9,34,fn,34,10,9,34,cmd,34,10,10,9,10,9,10,9,9,34,s,34,10,9,9,10,9,9,10,9,9,10,9,9,10,9,9,10,9,9,10,9,9,10,9,9,10,9,10,10);%c%c%ccmd[14] = i + nb;%c%c%ccmd[27] = i + nb;%c%c%ccmd[38] = i + nb;%c%c%csystem(cmd);%c%c}%c}%c";
		fn[6] = i + nb;
		int fd = open(fn, O_WRONLY | O_CREAT, 0777);
		fn[6] = 'x';
		dprintf(fd,s,10,10,10,10,10,10,10,9,i+nb,10,9,10,9,34,34,10,9,9,10,9,34,fn,34,10,9,34,cmd,34,10,10,9,10,9,10,9,9,34,s,34,10,9,9,10,9,9,10,9,9,10,9,9,10,9,9,10,9,9,10,9,9,10,9,9,10,9,10,10);
		cmd[14] = i + nb;
		cmd[27] = i + nb;
		cmd[38] = i + nb;
		system(cmd);
	}
}
