#include "../include/process_copy.h"
#include<sys/types.h>
int blocksize_cur(const char* src,int pronum){
	int fd=open(src,O_RDONLY);
	int fdsize=lseek(fd,0,SEEK_END);
	if(fdsize%pronum==0)
		return fdsize/pronum;
	else
		return fdsize/pronum+1;
}
