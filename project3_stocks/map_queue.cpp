#include "map_queue.h"



int map_queue::queue_size()
{
   return order_map.size();
}

void map_queue::pop_order(int order_id_nr)
{
  it=order_map.find(order_id_nr);
  order_map.erase(it);   
}

TraderList* map_queue::get_order(int order_id_nr)
{
   it=order_map.find(order_id_nr);
   return (TraderList*) it->second;
}

void map::queue::push_order(TraderList* order,int order_id_nr)
{
    order_map.insert(pair<int,TraderList*>(order_id_nr,order));
    
}

