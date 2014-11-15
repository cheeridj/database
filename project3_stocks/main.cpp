#include <iostream>
#include "PR.h"
#include "TraderList.h"

using namespace std;

int main(){
     
   TraderList *trader;
   pr_generating(trader);
   cout<<trader->Price<<'\n';

   return 1;


}