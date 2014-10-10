#include<stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[]) {

	char src, dst;

	if(rename(argv[1], argv[2]))
			{
				printf("file is renamed\n");
			}
	return 0;
}
