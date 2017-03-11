#include <stdio.h>
#include <fcntl.h>
int main()
{
	int i = 5;
	char fn[10] = "Sully_x.c\0";
	char cmd[42] = "clang ./Sully_x.c -o Sully_x; ./Sully_x\0";
	
	if (i > 0)
	{
		fn[6] = i + 47;
		cmd[14] = i + 47;
		cmd[27] = i + 47;
		cmd[38] = i + 47;
		int fd = open(fn, O_WRONLY | O_CREAT);
		char *s = "#include<stdio.h>\n\nint main()\n{\t\t int i = %c;\n\tchar fn[10] = %c%s%c;\n\tchar cmd = %c%s%c;\n\n\tif (i > 0)\n\t{\n\t\tfn[6] = i + 47;\n\t\tint fd = open(fn);char *s =%c%s%c\n\t\tdprintf(fd,s,i+47,34,fn,34)\n\t\tsystem(cmd)\n\t}\n}\n";
		dprintf(fd,s,i+47,34,fn,34,34,cmd,34,34,s,34);
		system(cmd);
	}	
}
