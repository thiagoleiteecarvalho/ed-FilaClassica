/*
 * main.c
 * Classe de implemantação da ED Fila Clássica.
 * Author: Thiago Leite
 */

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila* iniciar() {

	Fila *f = malloc(sizeof(Fila));
	f->cabeca = NULL;
	f->fim = NULL;
	f->tamanho = 0;

	return f;
}

void enqueue(Fila *f, char caractere) {

	Elemento *e = malloc(sizeof(Elemento));
	e->valor = caractere;
	e->proximo = NULL;

	if (f->fim != NULL) {
		f->fim->proximo = e;
	} else {
		f->cabeca = e;
	}

	f->fim = e;

	f->tamanho = f->tamanho + 1;
}

char dequeue(Fila *f) {

	Elemento *e;
	char caracter;

	if (!empty(f)) {

		e = f->cabeca;
		caracter = e->valor;

		f->cabeca = e->proximo;
		if (empty(f)) {
			f->fim = NULL;
		}

		f->tamanho = f->tamanho - 1;
		free(e);

		return caracter;
	} else {
		printf("Fila vazia.\n");
		return '\0';
	}
}

int size(Fila *f) {
	return f->tamanho;
}

char head(Fila *f) {
	return f->cabeca->valor;
}

int empty(Fila *f) {
	return f->tamanho == 0;
}

void exibir(Fila *f) {

	if (empty(f)) {

		printf("Fila vazia!\n");
		return;
	}

	Elemento *e;
	e = f->cabeca;
	printf("Fila:\n");

	while (e != NULL) {

		printf(" %c", e->valor);
		e = e->proximo;
	}

	printf("\n");
}

