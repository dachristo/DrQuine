#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
	int i = 6;
	char fn[10] = "Sully_x.c";
	char cmd[40] = "clang ./Sully_x.c -o Sully_x; ./Sully_x";
	
	if (i > 0)
	{
		char *s = "#include <stdio.h>%c#include <fcntl.h>%c#include <stdlib.h>%c%cint main()%c{%c%cint i = %c;%c%cchar fn[10] = %c%s%c;%c%cchar cmd[40] = %c%s%c;%c%c%cif (i > 0)%c%c{%c%c%cchar *s = %c%s%c;%c%c%cfn[6] = i + 47;%c%c%cint fd = open(fn, O_WRONLY | O_CREAT, 0777);%c%c%cfn[6] = 'x';%c%c%cdprintf(fd,s,10,10,10,10,10,10,9,i+47,10,9,34,fn,34,10,9,34,cmd,34,10,10,9,10,9,10,9,9,34,s,34,10,9,9,10,9,9,10,9,9,10,9,9,10,9,9,10,9,9,10,9,9,10,9,9,10,9,10,10);%c%c%ccmd[14] = i + 47;%c%c%ccmd[27] = i + 47;%c%c%ccmd[38] = i + 47;%c%c%csystem(cmd);%c%c}%c}%c";
		fn[6] = i + 47;
		int fd = open(fn, O_WRONLY | O_CREAT, 0777);
		fn[6] = 'x';
		dprintf(fd,s,10,10,10,10,10,10,9,i+47,10,9,34,fn,34,10,9,34,cmd,34,10,10,9,10,9,10,9,9,34,s,34,10,9,9,10,9,9,10,9,9,10,9,9,10,9,9,10,9,9,10,9,9,10,9,9,10,9,10,10);
		cmd[14] = i + 47;
		cmd[27] = i + 47;
		cmd[38] = i + 47;
		system(cmd);
	}
}
