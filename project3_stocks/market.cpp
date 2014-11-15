
#include <fstream>
#include <iostream>
#include "map_queue.h"
#include "TraderList.h"
#include <string>

using namespace std;
int MAX_CHAR_PER_LINE=30;
char CURRENT_TIMES_STAMP='0';
int market_earn=0;
float commission_rate=0.01;
int buy_price;
int sell_price;
int order_id=0;
map_queue market_map;



void read_in()
{
  oftream TLfile;
  TLfile.open("medium_TL-in.txt");
  
  while(!TLfile.eof())
  {
    char buf[MAX_CHAR_PER_LINE];
    TLfile.getline(buf,MAX_CHAR_PER_LINE;
    
    
    TraderList* TL;
    TL->TIMESTAMP=buf[0];
    TL->Client_Name=buf[2]+buf[3]+buf[4];
    if(buf[5]='B')
    { 
    	TL->Buy_or_Sell=buf[5]+buf[6]+buf[7];
        TL->Equity_Symbol=buf[9]+buf[10]+buf[11];
        int i=14;
        while(buf[i]!='')
        	{ TL->Price.append<char>(1,buf[i]);
        	  i++;

        	}
        	i=i+3;
        while(buf[i]!='')
        {
             TL->Quantity.append<char>(1,buf[i]);
             i++;

        } 	
    }

    else
    {
         TL->Buy_or_Sell=buf[5]+buf[6]+buf[7]+buf[8];
         TL->Equity_Symbol=buf[10]+buf[11]+buf[12];
         int i=15;
         while(buf[i]!='')
        	{ TL->Price.append<char>(1,buf[i]);
        	  i++;

        	}
        	i=i+3;
         while(buf[i]!='')
         {
             TL->Quantity.append<char>(1,buf[i]);
             i++;

         } 	
    }
    market_map.push_order(TL,order_id);
    order_id++;


   }
  
   TLfile.close();



}

void output(int input_count,char** argv)
{
    for(int i=0;i<input_count;i++)
    {
    	if(argv[i]=='--summary')
    	{
            cout<<"the program should print a variety of summary information describing the
day’s trades"<<endl;
    	}

    	if(argv[i]=='--verbose')
    	{
           cout<<"should print additional output information while trades are
being executed"<<endl;
    	}

    	if(argv[i]=='')
    }
   

}



void market()
{
      
  

}

