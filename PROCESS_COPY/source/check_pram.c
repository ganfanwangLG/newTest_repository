#include "../include/process_copy.h"


int check_pram(int argc,const char* src,int pronum){
	if(argc<3){
		perror("参数数量错误\n");
		return 1;
	}
	int fd=open(src,O_RDONLY);
	if(fd==-1){
		perror("该文件错误或者不存在\n");
		return 1;
	}
	if(pronum<1){
		printf("用户设置的进程数量过少\n");
		return 1;
	}
	if(pronum>10){
		printf("用户设置的进程数量过多\n");
		return 1;
	}

}
