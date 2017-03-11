#include <stdio.h>
#include <fcntl.h>
/*
	Ceci est un programme bien degueu
*/
#define FILE() "Grace_kid.c"
#define THIRD() FILE()
#define FT_GRACE(file) int main(){ char *c="#include <stdio.h>%c#include <fcntl.h>%c/*%c%cCeci est un programme bien degueu%c*/%c#define FILE() %c%s%c%c#define THIRD() FILE()%c#define FT_GRACE(file) int main(){ char *c=%c%s%c;int fd = open(file, O_WRONLY | O_CREAT);dprintf(fd,c,10,10,10,9,10,10,34,FILE(),34,10,10,34,c,34,10,10);}%cFT_GRACE(FILE())%c";int fd = open(file, O_WRONLY | O_CREAT);dprintf(fd,c,10,10,10,9,10,10,34,FILE(),34,10,10,34,c,34,10,10);}
FT_GRACE(FILE())
