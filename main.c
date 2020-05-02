#include <stdio.h>
#include <string.h>

int main(void){

		char entry[50];
		char *com;
		
		
		while(1){
				printf("Promp command or exit to quit: ");
				scanf("%s",entry);
				
				com =strtok(entry," ");
				
				printf("La commande taper est: ");
				printf(com);
				printf("\n");
				
				if(strcmp("exit",com) == 0){
					printf("sortie \n");
				}
				else{
					printf("La suite de la commande est ");
					printf(entry);
					printf("\n");
				}
				
				
		}
}
