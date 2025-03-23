#ifndef UTILIDADES_H
#define UTILIDADES_H

#include "structurapedido.h"


//Leer archivo CSV y almacenar datos en estructura Pedido
int read_csv(const char *filename, Pedido *orders);


// Liberar memoria de los pedidos
void free_orders(Pedido *orders); 

#endif
