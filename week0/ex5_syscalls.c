#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
 
int main(int argc, char *argv[]) {
	char buf;
	FILE *src, *dst;
	int src_fd, dst_fd;
 	ssize_t size_r, size_w;

	src_fd = open(argv[1], O_RDONLY);
	dst_fd = open(argv[2], O_WRONLY | O_CREAT, 0644);

    while((size_r = read (src_fd, &buf, sizeof (unsigned long))) > 0){
            size_w = write (dst_fd, &buf, (ssize_t) size_r);
	}

	close(src);
	close(dst);
return 0;
}
