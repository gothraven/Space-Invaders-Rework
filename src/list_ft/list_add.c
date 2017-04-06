/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    game.h                                      #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/06/04 12:02:21 by Z.Safiy                                  #
#    Updated: 2017/06/04 15:02:21 by Z.Safiy                                  #
#                                                                             #
#*****************************************************************************/

#include "game.h"
#include "list.h"

Path_t * list_add(Path_t * path,int h,int v){
	Path_t * head = path;
	if(head == NULL){
		head = malloc(sizeof(Path_t));
		head->h = h;
		head->v = v;
		return head;
	}

	while(head->next != NULL){
		head = head->next;
	}

	head->next = malloc(sizeof(Path_t));
	head->next->h = h;
	head->next->v = v;

	printf("%p %p\n",head,path);
	return path;
}

Path_t * list_close(Path_t * path){
	Path_t * head = path;
	while(path->next != NULL){
		path = path->next; //look for the end of the list
	}
	path->next = head; //stick the head to the tail
	return head;
}

int isEmpty(Path_t * path){
	if(path != NULL) return 0;
	else return 1;
}

void list_show(Path_t * path){
	Path_t * head = path;
	printf("{|");
	do{
		printf("%d,%d|",head->h,head->v);
		head = head->next;
	}while(head != path);
	printf("}\n");
}
