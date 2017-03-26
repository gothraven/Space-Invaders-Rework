/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    file_lines.c                                #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/27/03 00:57:32 by Z.Safiy                                  #
*    Updated: 2017/27/03 00:57:32 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/

#include "load.h"

char * get_line(char * buffer,int * i){
	
	char * line = malloc(1024*sizeof(char));
	int j = 0;

	while(buffer[*i] != '\n'){
		line[j] = buffer[*i];
		(*i)++; j++;
	}
	
	line[j] = '\0';
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
