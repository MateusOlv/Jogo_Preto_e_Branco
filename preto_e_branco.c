#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese_brazil");
	
	int i, j, l, c, P, lP, cP,contB;
	
	printf("\t\t\t\t\t\t---- JOGO PRETO E BRANCO ----\n\n");
	printf("Quantas linhas ter� o tabuleiro? ");
	scanf("%d", &l);
	printf("Quantas colunas ter� o tabuleiro? ");
	scanf("%d", &c);
	
	char PeB [l][c];
	
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			PeB[i][j] = ' ';
		}
	}
	
	system("cls");
	
	printf("\t\t\t\t\t\t---- JOGO PRETO E BRANCO ----\n\n");
	printf("Quantas pe�as pretas voc� quer jogar? ");
	scanf("%d", &P);
	
	while(P > l * c){
		system("cls");
		printf("\t\t\t\t\t\t---- JOGO PRETO E BRANCO ----\n\n");
		printf("O n�mero de pe�as pretas excede o n�mero de casas do tabuleiro! Por favor, tente novamente!\n\n");
		printf("Quantas pe�as pretas voc� quer jogar? ");
		scanf("%d", &P);
	}
	
	system("cls");
	
	for(i = 0; i < P; i++){
		printf("\t\t\t\t\t\t---- JOGO PRETO E BRANCO ----\n\n");
		printf("Selecione a linha em que voc� quer jogar? ");
		scanf("%d", &lP);
		
		printf("Selecione a coluna em que voc� quer jogar? ");
		scanf("%d", &cP);
		
		system("cls");
		
		while(lP < 1 || cP < 1 || lP > l || cP > c){
			printf("\t\t\t\t\t\t---- JOGO PRETO E BRANCO ----\n\n");
			printf("O n�mero digitado n�o � v�lido! Por favor, tente novamente!\n\n");
			
			printf("Qual a linha? ");
			scanf("%d", &lP);
			
			printf("Qual a coluna? ");
			scanf("%d", &cP);
			
			system("cls");
		}
		
		while(PeB[lP - 1][cP - 1] != ' '){
			printf("\t\t\t\t\t\t---- JOGO PRETO E BRANCO ----\n\n");
			printf("Est� casa j� est� ocupada! Por favor, tente novamente!\n\n");
			
			printf("Qual a linha? ");
			scanf("%d", &lP);
		
			printf("Qual a coluna? ");
			scanf("%d", &cP);
		
			system("cls");
		}
		
		PeB[lP - 1][cP - 1] = 'P';
	}
	
	contB = 0;
	
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			if(PeB[i][j] == ' '){
				if(PeB[i][j - 1] == 'P' || PeB[i][j + 1] == 'P' || PeB[i - 1][j] == 'P' || PeB[i + 1][j] == 'P'){
					if(PeB[i][j - 1] != 'B' && PeB[i][j + 1] != 'B' && PeB[i - 1][j] != 'B' && PeB[i + 1][j] != 'B'){
						PeB[i][j] = 'B';
						contB++;
					}	
				} 		
			}
		}
	}
	
	printf("\t\t\t\t\t\t---- JOGO PRETO E BRANCO ----\n\n");
	
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			printf(" |%c| ", PeB[i][j]);
		}
		printf("\n");
	}
	
	printf("\nO total de pe�as brancas foi de: %d", contB);
}
	
	
	 
	

