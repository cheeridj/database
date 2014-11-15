#ifndef MAP_QUEUE_H
#define MAP_QUEUE_H

#include <queue>
#include <iostream>
#include <fstream>
#include <map>
#include "TraderList.h"
#include <assert.h>


using namespace std;

class map_queue
{
    public:
    	int queue_size();
    	void pop_order(int order_id_nr);
    	TraderList* get_order(int order_id_nr);
    	void push_order(TraderList* order);

    private:
    	map<int,TraderList*>order_map;
        map<int,TraderList*>::iterator it;




};





#endif
