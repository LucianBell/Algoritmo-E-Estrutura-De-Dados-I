#include <stdio.h>

int main()
{
    int inicioHora, inicioMinuto, fimHora, fimMinuto;

    printf("Enter the beginning hour of the game: ");
    scanf("%d", &inicioHora);

    printf("Now enter the beginning minute of the game: ");
    scanf("%d", &inicioMinuto);

    printf("Enter the finishing hour of the game: ");
    scanf("%d", &fimHora);

    printf("Now enter the finishing minute of the game: ");
    scanf("%d", &fimMinuto);

		if (inicioHora < fimHora && inicioMinuto < fimMinuto) {
			printf("The game duration is %d hours and %d minutes", (fimHora - inicioHora), (fimMinuto - inicioMinuto));	
		} else if (inicioHora > fimHora && inicioMinuto > fimMinuto) {			  
				printf("The game duration is %d hours and %d minutes", (24 + (fimHora - inicioHora)), (60 + (fimMinuto - inicioMinuto)));	
				} else if (inicioHora < fimHora && inicioMinuto > fimMinuto) {
					printf("The game duration is 0 hours and %d minutes", (60 + (fimMinuto - inicioMinuto)));
					} else if (inicioHora > fimHora && inicioMinuto < fimMinuto) {
						printf("The game duration is %d hours and %d minutes", (24 + (fimHora - inicioHora)),  (fimMinuto - inicioMinuto));
						} else if (inicioHora == fimHora && inicioMinuto > fimMinuto) {
								printf("The game duration is 23 hours and %d minutes", (60 + (fimMinuto - inicioMinuto)));
							} else if (inicioHora < fimHora && inicioMinuto == fimMinuto) {
									printf("The game duration is %d hours", (fimHora - inicioHora));
									} else if (inicioHora > fimHora && inicioMinuto == fimMinuto) {
										printf("The game duration is %d hours", (24 + (fimHora - inicioHora)));
										} else {
											printf("The duration of the game is 24 hours");
										}
}