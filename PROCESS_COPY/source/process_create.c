#include"../include/process_copy.h"

int process_create(const char*src,const char * dest,int pronum,int blocksize){
	
	for(int i=0;i<pronum;i++){
		pid_t pid=fork();
		if(pid==0) break;
		else{
			char buff[10240];
			int destfd = open(dest,O_WRONLY);
			int srcfd  = open(src,O_RDONLY);
			lseek(srcfd,i*blocksize,SEEK_SET);
			lseek(destfd,i*blocksize,SEEK_SET);
			ssize_t readsize=read(srcfd,buff,blocksize);
			write(destfd,buff,readsize);
		}
	}



}
