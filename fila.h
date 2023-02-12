/*
 * fila.h
 * Header de definição da ED Fila Clássica.
 * Author: Thiago Leite
 */

#pragma once

typedef struct elemento {
 char valor;
 struct elemento *proximo;
} Elemento;

typedef struct fila {
 Elemento *cabeca;
 Elemento *fim;
 int tamanho;
} Fila;

Fila* iniciar();
void enqueue(Fila *f, char caractere);
char dequeue(Fila *f);
int size(Fila *f);
char head(Fila *f);
int empty(Fila *f);
void exibir(Fila *f);
