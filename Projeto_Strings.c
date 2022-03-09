#include <stdio.h>
#include <locale.h>
#include <string.h>


int main ()
{
	setlocale(LC_ALL,"");
	
	int i = 0; //variável contadora
	char NomeTeste [] = {"David"}; //variável char com valor já atribuido 
	char faculdade [80]; //variável char com limite de caracteres (valor já estipulado para uso na memória)
	char curso [80]; //variável char com limite de caracteres (valor já estipulado para uso na memória)
	int tam; // para a string que conta o tamanho da string
	char nome[100]; //para a string que substitui uma palavra por outra
	char destino[100]="Seja bem vindo ", nomes[80]; //para a string que substitui uma palavra por outra
	char resposta[]="ADA LOVELACE", tentativa[80]; //para a string que compara se as 2 strings são iguais
	char origem[]="Você é Incrível !"; //para a string que substitui a partir de certo ponto da string
	char destino2[20];//para a string que substitui a partir de certo ponto da string


	//exibição usando printf
	printf ("exibindo uma string usando 'printf': \n");
	printf ("O seu nome é : %s \n\n", NomeTeste);
	
	system("color A");
	
	//exibição usando puts
	printf ("exibindo uma string usando 'puts': \n");
	puts (NomeTeste);
	printf ("\n");
	
	// exibição caractere a caractere
	// quebrando linha a cada caractere
	printf ("exibindo uma string letra por letra: \n");
	while (NomeTeste[i] != '\0')
	{
		printf("%c\n", NomeTeste[i]);
		i++;
	}
	printf ("\n");
	
	/* Caso você use "scanf" ele atribuira '\0' no final do seu texto, inviabilizando seu uso para leitura de textos mais 
	complexos.
	Sendo mais conveniente, podemos usar a função gets, passando a variável string desejada. Esta função lê uma string
	até que seja pressionado o <ENTER> e coloca o caractere NULL no final do texto obtido*/
	 
	 
	//usando "gets"
	printf ("Usando 'gets' no lugar de 'scanf' para strings: \n");
	printf ("Informe o nome da sua faculdade : ");
	gets(faculdade);

	system("color B");

	//usando "scanf" ficaria: scanf("%s", curso);
	printf ("Informe o nome do curso que está fazendo : ");
	gets(curso);
	
	system("color C");
	
	printf ("\n");
	
	puts(faculdade);
	puts(curso);
	
	printf ("\n");
	
	//strlen(string) - Retorna o comprimento da string fornecida. O caractere NULL não é contado.
	printf("Retorna o comprimento da string fornecida: \n");
	printf("Digite seu nome: ");
	gets(nome);	
	system("color D");
	tam = strlen(nome);
	printf ("Seu nome tem %d caracteres.\n\n", tam);


	/*strcat (string_destino, string_origem) – Concatena (junta) as duas strings, 
	acrescentando o texto da string de origem no final da string de destino. */
	printf ("Concatena (junta) as duas strings: \n");
	printf ("Entre com seu nome: ");
	gets(nomes);
	system("color E");
	// destino conterá o texto 
	// "Seja bem vindo" + o nome digitado
	strcat (destino, nomes);
	printf ("%s\n\n", destino);
	
	
	/* strcmp(string1, string2) – Compara as duas strings. Se forem iguais, retorna zero.
	Se a string1 for maior que a string2, retorna um número maior que zero. Se a string2
	for maior que a string1, retorna um número menor que zero. Nesta função, “maior que” 
	e “menor que” referem-se à ordem alfabética.*/
	printf ("Compara se duas strings são iguis ou não: \n");
	do
   {
      printf("Quem foi a primeira programadora? (resposta: ADA LOVELACE) : ");
      gets(tentativa);
      system("color 1");
      if (strcmp(resposta, tentativa) == 0)
         break; // se igual, usa o break
      else // dá mensagem e retorna para o início
         printf("\nResposta errada! Tente novamente.\n");
   } while(1); // condição de laço infinito
   printf ("\n\nParabens! Resposta correta!\n\n");
	

	/*strcpy(string_destino, string_origem) – Copia a string de origem sobre a string de destino. */
	
	// o conteúdo de origem é colocado em destino
	printf ("o conteúdo de origem é colocado em destino:");
	strcpy (destino, origem);
	printf("%s\n\n", destino2);
	// O endereço de destino é somado de 11, 
    // portanto, a partir do 12o. caractere o texto
	// "CESAR" é copiado.
	strcpy(destino+7, "Incrível !!!");
	printf("%s\n\n", destino);
	
	system("color 2");

	return 0;
}
