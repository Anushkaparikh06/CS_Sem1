// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
//	cout<<"while loops!!"<<endl;
 
int height = 0;
	int width = 0;
	char symbol;
	
	cout<<"Please enter the width: ";
	cin>>width;
	cout<<"Please enter the height: ";
	cin>>height;
	cout<<"Please input a symbol: ";
	cin>>symbol;
	
	for(int i = 0; i < height; i++){
		for(int j = 0; j < width; j++){
			cout<<symbol;
		}
		cout<<endl;
	}

}
  
   
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

