#ifndef STRUCTURAPEDIDO_H
#define STRUCTURAPEDIDO_H

typedef struct {
    int pizza_id;
    int order_id;
    char pizza_name_id[75];
    int quantity;
    char order_date[75];
    char order_time[75];
    float unit_price;
    float total_price;
    char pizza_size[4];
    char pizza_category[75];
    char pizza_ingredients[275];
    char pizza_name[75];
} Pedido;

#endif 

