/*
 * main.c
 * Classe principal de execução da Fila Clássica.
 * Author: Thiago Leite
 */

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void) {

	Fila *f = iniciar();

	int opcao;
	char valor;
	int tamanho;

	do {

		printf("\n");
		printf("FILA CLÁSSICA\n");
		printf("Escolha a opcao\n");
		printf("0. Sair\n");
		printf("1. ENQUEUE\n");
		printf("2. HEAD\n");
		printf("3. DEQUEUE\n");
		printf("4. SIZE\n");
		printf("5. Exibir fila\n");
		printf("Digite uma opção:");
		scanf("%d", &opcao);

		switch (opcao) {
		case 0:
			exit(1);
			break;

		case 1:
			printf("Digite um valor a ser enfileirado:");
			scanf(" %c", &valor);
			enqueue(f, valor);
			break;

		case 2:
			valor = head(f);
			if (valor)
				printf("Cabeça da fila: %c\n\n", valor);
			break;

		case 3:
			valor = dequeue(f);
			if (valor)
				printf("Elemento desenfileirado: %c\n\n", valor);
			break;

		case 4:
			tamanho = size(f);
			printf("Quantidade de elementos da fila: %d\n\n", tamanho);
			break;

		case 5:
			exibir(f);
			break;

		default:
			printf("Comando invalido\n\n");
			break;
		}
	} while (opcao);

	return 0;
}

