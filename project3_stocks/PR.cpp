/*
* PR.cpp
* generate the insider
*
*/


#include "queue.h"
#include <iostream>
#include <random>
#include "PR.h"

using namespace std;

order_queue OrderQueue;
TraderList *Pr_Trader_List;

void pr_generating()
{
   
   unsigned int RANDOM_SEED;
   int NUMBER_OF_ORDERS=20;
   unsigned int GENERATOR_TIMESTAMP=0;
   float ARRIVAL_RATE=1.8;
   char LAST_CLIENT='z';
   char LAST_EQUITY='Z';
   mt19937 gen(RANDOM_SEED);
   uniform_int_distribution<char> clients('a',LAST_CLIENT);
   uniform_int_distribution<char> equities('a',LAST_EQUITY);
   exponential_distribution<float> arrivals(ARRIVAL_RATE);
   bernoulli_distribution buy_or_sell;
   uniform_int_distribution<>price(2,11);
   uniform_int_distribution<>quantity(1,30);
   while(NUMBER_OF_ORDERS!=0)
   {
   Pr_Trader_List->TIMESTAMP=GENERATOR_TIMESTAMP;
   GENERATOR_TIMESTAMP=GENERATOR_TIMESTAMP+floor(arrivals(gen)+.5);
   Pr_Trader_List->Client_Name=string("C_")+clients(gen);
   if(buy_or_sell(gen))
   {
   Pr_Trader_List->Buy_or_Sell="Buy";
    }
    else
    {
    	Pr_Trader_List->Buy_or_Sell="Sell";
    }
   Pr_Trader_List->Equity_Symbol=string("E_")+equities(gen);
   Pr_Trader_List->Price=5*price(gen);
   Pr_Trader_List->Quantity=quantity(gen);
   OrderQueue.push_order(Pr_Trader_List);
   NUMBER_OF_ORDERS--;
    }

}


/*void check_input()
{
   if(Pr_Trader_List->TIMESTAMP)



}*/



