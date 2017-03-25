/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    load_defender.c                             #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/24/03 10:52:32 by Z.Safiy                                  #
*    Updated: 2017/25/03 02:26:32 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/

//#include "game.h"
#include "load.h"
/*player_t * defender,*/
void load_defender(char * modename){
	char PATH[100]="";
	int fd;


	strcat(PATH,MOD_PATH);
	strcat(PATH,modename);
	strcat(PATH,"/");
	strcat(PATH,DEF_PATH);
	strcat(PATH,"1");

	if((fd = open(PATH,O_RDONLY))==-1) perror("ERROR:open");

	int nread;
	char buffer[BUFFSIZE];
	nread = read(fd,buffer,BUFFSIZE);
	int j=1;
	for(int i=0; i<nread ;i++){
		switch(buffer[i]){
			case '\n': printf("   %d line\n",j); j++; 
			case '\0': break;
			default: printf("%c",buffer[i]);
		}
	}

	//write(2,buffer,nread);

	if(close(fd)==-1) perror("ERROR:close");

}