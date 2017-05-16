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

/*! \fn char * get_line(char * buffer,int * i)
 *  \brief parcour all the line to get the one we choose
 *  \param buffer is a char table where we stock anything
 *  \param i is pointer 
 *  
 *  La fonction parcours toutes les lignes et nous renvoi sur celle que l'on demande
 *
 *  \return the line read by the buffer
 */

char * get_line(char * buffer,int * i)
{
	
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

/*! \fn void parse_line(char * line,char ** buff)
 *  \brief parcour all the line to get something different of the " "
 *  \param line is the line we choose
 *  \param buff is a char table where we stock anything 
 *  
 *  La fonction parcourt toutes les lignes et s'arrête lorsqu'elle rencontre 
 *  quelque chose différent de " "
 *
 *  \return the line read by the buffer
 */

void parse_line(char * line,char ** buff)
{
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
