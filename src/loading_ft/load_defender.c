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
	Ship_fs * file = malloc(sizeof(Ship_fs));

	strcat(PATH,MOD_PATH);
	strcat(PATH,modename);
	strcat(PATH,"/");
	strcat(PATH,DEF_PATH);
	strcat(PATH,"1");

	if((fd = open(PATH,O_RDONLY))==-1) perror("ERROR:open");

	int nread;


	char buffer[BUFFSIZE];
	nread = read(fd,buffer,BUFFSIZE);
	int line = 0;
	int i = 0;
	while(i<nread && line < 9){

		char * tab[200];
		parse_line(get_line(buffer,&i),tab);
		
		if(line == 0){
			file->ship_height = atoi(tab[0]);
			file->ship_width = atoi(tab[1]);
		}

		if(line == 1){
			file->path_size = atoi(tab[0]);
		}	
		if(line == 2){
			file->path_h = malloc(file->path_size*sizeof(int));
			for (int l = 0; l < file->path_size; l++){
					file->path_h[l] = atoi(tab[l]);
			}
		}
		if(line == 3){
			file->path_v = malloc(file->path_size*sizeof(int));
			for (int l = 0; l < file->path_size; l++){
					file->path_v[l] = atoi(tab[l]);
			}
		}
		if(line == 4){  //*- problem -*
			file->ship_health = atoi(tab[0]);
		}
		if(line == 5){
			file->shot_freq = atof(tab[0]);
		}
		if(line == 6){
			file->shot_speed = atoi(tab[0]);
		}
		if(line == 7){
			file->shot_power = atoi(tab[0]);
		}
		if(line == 8){
			file->shot = tab[0][0];
		}

		line++;
	}
	while(i<nread){	
		printf("%s\n",get_line(buffer,&i));
		//i++;
	}

	if(close(fd)==-1) perror("ERROR:close");

}


char * get_line(char * buffer,int * i){
	
	char * line = malloc(1024*sizeof(char));
	int j = 0;

	while(buffer[*i] != '\n'){
		line[j] = buffer[*i];
		(*i)++; j++;
	}
	
	buffer[j] = '\0';
	(*i)++;

	return line;
}

void parse_line(char * line,char ** buff){
	
	buff[0] = malloc(sizeof(char*));
	int i = 0, j = 0, k = 0;

	while(line[i] != '\0'){
		while(line[i] == ' '){
			buff[j][k]='\0';
			k=0;
			j++;
			buff[j] = malloc(sizeof(char *));
			i++;	
		}
		buff[j][k] = line[i];
		k++;
		i++;
	}
	j++;
	buff[j] = NULL;
	free(line);
}