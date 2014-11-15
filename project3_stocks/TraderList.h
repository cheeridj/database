#ifndef _TraderList_H_
#define _TraderList_H_
#include <string>
using namespace std;

typedef struct{
  
    unsigned int TIMESTAMP;
  string Client_Name;
  string Buy_or_Sell;
  string Equity_Symbol;
  
  string Price;
  string Quantity;
} TraderList;


/*typedef struct{

    int order_id;
    TraderList *traderorder;

} Order;*/
/*
class LessTimeStamp {
 
 public:
 	bool operator()(TraderList&t1,TraderList&t2)
 	{
       if (t1.TIMESTAMP<t2.TIMESTAMP)
       	return true;
       if (t1.TIMESTAMP==t2.TIMESTAMP)
         return true;
       else 
       	return false;


 	}

};
*/














#endif /* _TraderList_H_ */
