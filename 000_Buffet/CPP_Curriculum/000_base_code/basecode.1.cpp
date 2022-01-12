// base code file
#include "./hfiles/poole.h"

//////////////////////////////
/////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
 char symbol;
 int len = 0;
 char draw;

 cout<<"Please enter the symbol: ";
 cin >> symbol;
 
 cout<<"Please enter line length: ";
 cin >> len;
 
 cout<<"Horizontal, Vertical or Diagonal: ";
 cin >> draw;
 
 for(int i = 1; i <= len; i++)
 {
  if(draw == 'v'){
   cout<<symbol<<endl;
  if(draw == 'h')
   cout<<symbol<<endl;
  }
  {
  	for(int j = 0; j <=len; ++j)
  	  	for(int j = 1; j <=len; ++j){
  	  if (draw == 'd')
		cout<<symbol<<symbol;
  	}
  	cout<<endl;
  }
  	cout<<symbol<<endl;
  }
 }

