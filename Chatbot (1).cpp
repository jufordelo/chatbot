//Programa que simula um Chatbot de um restaurante guacamole

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include <string.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	char sNome[20], sAssunto[10], sAssunto2[10], sPessoa[10], sOpiniao[30];
	int nPerg2, nPerg3, nOpcao;
	
		P1:   // bandeira do goto
		printf("Bem vindo ao restaurante Guacamole, digite seu nome:\n");
		scanf("%s",&sNome);
		
		printf("Bom dia %s, voc� quer realizar: 1-Cr�tica, 2-Elogio, 3-Opini�o, 4-Encerrar atendimento\n",sNome);
		P2: // bandeira do goto
		scanf("%d",&nPerg2);
		
		if(nPerg2 == 1)
		{
			strcpy(sAssunto, "criticar");
			strcpy(sAssunto2, " a critica");
		}
		else	if(nPerg2 == 2)
		{
			strcpy(sAssunto, "elogiar");
			strcpy(sAssunto2, " o elogio");
		}
		else if(nPerg2 == 3)
		{
			strcpy(sAssunto, "opinar");
			strcpy(sAssunto2, " a opini�o");
		}
		else
		{
			printf("Ok %s, o restaurante Guacamole agradece sua contribui��o!!!\n",sNome);
			printf("Deseja inserir um novo cliente: 1-Sim, 0-N�o");
			scanf("%d",&nOpcao);
			if(nOpcao == 1)
			{
				goto P1;
			}
			else
			{
				goto P3;
			}
			
		}
		
		printf("Sobre qual assunto voc� gostaria de %s: 1-Atendimento, 2-Comida, 3-Outros\n",sAssunto);
		scanf("%d",&nPerg3);
		
		if (nPerg3 == 1)
		{
			strcpy(sPessoa, "Gar�om");
		}
		else if (nPerg3 == 2)
		{
			strcpy(sPessoa, "Cozinheiro");
		}
		else
		{
			strcpy(sPessoa, "Gerente");
		}
		
		printf("Digite %s e vamos repass�-la ao %s:\n",sAssunto2,sPessoa);
		scanf("\n%[^\n]s",&sOpiniao);
		
		if (nPerg3 == 1)
		{
			//email para pessoa espec�fica
			
			printf("%s: Segue %s - %s\n\n\n",sPessoa, sAssunto2, sOpiniao);
		}
		else if (nPerg3 == 2)
		{
			//email para pessoa espec�fica
			printf("%s: Segue %s - %s\n\n\n",sPessoa, sAssunto2, sOpiniao);
		}
		else
		{
			//email para pessoa espec�fica
			printf("%s: Segue %s - %s\n\n\n",sPessoa, sAssunto2, sOpiniao);
		}
		
		printf("Ok %s, deseja realizar uma nova : 1-Cr�tica, 2-Elogio, 3-Opini�o, 4-Encerrar atendimento\n",sNome);
		goto P2;
		
		P3:
	   printf("O programa ser� fechado!!");
		

}
