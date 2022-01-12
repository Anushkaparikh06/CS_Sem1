// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
	
	for(int i = 0; i < 7; i++){
		gotoxy(10-i,2+i);
		cout << "t";
	}
		
	}

