#include <stdio.h>
int main (void)
{
    int total_items;
    float GST = 0.06;
    float itemprice;
    float price_for_item = 0.0;
    
    
    
    printf("Price of item ? ");
    scanf("%f", &itemprice);
    printf("Total items ? ");
    scanf("%d", &total_items);
    printf("Price of items after GST is %f", price_for_item);

    
    price_for_item = (itemprice * total_items) + GST;
}

