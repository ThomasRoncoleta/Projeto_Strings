#include <stdio.h>
#include <locale.h>
#include <string.h>


int main ()
{
	setlocale(LC_ALL,"");
	
	int i = 0; //vari�vel contadora
	char NomeTeste [] = {"David"}; //vari�vel char com valor j� atribuido 
	char faculdade [80]; //vari�vel char com limite de caracteres (valor j� estipulado para uso na mem�ria)
	char curso [80]; //vari�vel char com limite de caracteres (valor j� estipulado para uso na mem�ria)
	int tam; // para a string que conta o tamanho da string
	char nome[100]; //para a string que substitui uma palavra por outra
	char destino[100]="Seja bem vindo ", nomes[80]; //para a string que substitui uma palavra por outra
	char resposta[]="ADA LOVELACE", tentativa[80]; //para a string que compara se as 2 strings s�o iguais
	char origem[]="Voc� � Incr�vel !"; //para a string que substitui a partir de certo ponto da string
	char destino2[20];//para a string que substitui a partir de certo ponto da string


	//exibi��o usando printf
	printf ("exibindo uma string usando 'printf': \n");
	printf ("O seu nome � : %s \n\n", NomeTeste);
	
	system("color A");
	
	//exibi��o usando puts
	printf ("exibindo uma string usando 'puts': \n");
	puts (NomeTeste);
	printf ("\n");
	
	// exibi��o caractere a caractere
	// quebrando linha a cada caractere
	printf ("exibindo uma string letra por letra: \n");
	while (NomeTeste[i] != '\0')
	{
		printf("%c\n", NomeTeste[i]);
		i++;
	}
	printf ("\n");
	
	/* Caso voc� use "scanf" ele atribuira '\0' no final do seu texto, inviabilizando seu uso para leitura de textos mais 
	complexos.
	Sendo mais conveniente, podemos usar a fun��o gets, passando a vari�vel string desejada. Esta fun��o l� uma string
	at� que seja pressionado o <ENTER> e coloca o caractere NULL no final do texto obtido*/
	 
	 
	//usando "gets"
	printf ("Usando 'gets' no lugar de 'scanf' para strings: \n");
	printf ("Informe o nome da sua faculdade : ");
	gets(faculdade);

	system("color B");

	//usando "scanf" ficaria: scanf("%s", curso);
	printf ("Informe o nome do curso que est� fazendo : ");
	gets(curso);
	
	system("color C");
	
	printf ("\n");
	
	puts(faculdade);
	puts(curso);
	
	printf ("\n");
	
	//strlen(string) - Retorna o comprimento da string fornecida. O caractere NULL n�o � contado.
	printf("Retorna o comprimento da string fornecida: \n");
	printf("Digite seu nome: ");
	gets(nome);	
	system("color D");
	tam = strlen(nome);
	printf ("Seu nome tem %d caracteres.\n\n", tam);


	/*strcat (string_destino, string_origem) � Concatena (junta) as duas strings, 
	acrescentando o texto da string de origem no final da string de destino. */
	printf ("Concatena (junta) as duas strings: \n");
	printf ("Entre com seu nome: ");
	gets(nomes);
	system("color E");
	// destino conter� o texto 
	// "Seja bem vindo" + o nome digitado
	strcat (destino, nomes);
	printf ("%s\n\n", destino);
	
	
	/* strcmp(string1, string2) � Compara as duas strings. Se forem iguais, retorna zero.
	Se a string1 for maior que a string2, retorna um n�mero maior que zero. Se a string2
	for maior que a string1, retorna um n�mero menor que zero. Nesta fun��o, �maior que� 
	e �menor que� referem-se � ordem alfab�tica.*/
	printf ("Compara se duas strings s�o iguis ou n�o: \n");
	do
   {
      printf("Quem foi a primeira programadora? (resposta: ADA LOVELACE) : ");
      gets(tentativa);
      system("color 1");
      if (strcmp(resposta, tentativa) == 0)
         break; // se igual, usa o break
      else // d� mensagem e retorna para o in�cio
         printf("\nResposta errada! Tente novamente.\n");
   } while(1); // condi��o de la�o infinito
   printf ("\n\nParabens! Resposta correta!\n\n");
	

	/*strcpy(string_destino, string_origem) � Copia a string de origem sobre a string de destino. */
	
	// o conte�do de origem � colocado em destino
	printf ("o conte�do de origem � colocado em destino:");
	strcpy (destino, origem);
	printf("%s\n\n", destino2);
	// O endere�o de destino � somado de 11, 
    // portanto, a partir do 12o. caractere o texto
	// "CESAR" � copiado.
	strcpy(destino+7, "Incr�vel !!!");
	printf("%s\n\n", destino);
	
	system("color 2");

	return 0;
}
