/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    load_defender.c                             #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/13/03 10:52:32 by Z.Safiy                                  #
*    Updated: 2017/13/03 10:52:32 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/

//#include "game.h"
#include "load.h"

void load_defender(/*player_t * defender,*/char const * modename){
	char PATH[100]="";
	int fd;

	strcat(PATH,MOD_PATH);
	strcat(PATH,modename);
	strcat(PATH,"/");
	strcat(PATH,DEF_PATH);
	strcat(PATH,"1");

	if((fd = open(PATH,O_RDONLY))==-1) perror("ERROR:open");
	
	printf("(%s)\n",PATH);

	read_all(fd);
	
	if(close(fd)==-1) perror("ERROR:close");

}

void read_all(int fd){
	char buffer[1024];
	int nread;
	while((nread=read(fd,buffer,1024))>0){
		write(2,buffer,nread);
	}
}