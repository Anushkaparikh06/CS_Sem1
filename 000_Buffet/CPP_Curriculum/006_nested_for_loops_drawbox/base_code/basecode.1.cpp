// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	
	int height = 0;
	int width = 0;
	char symbol;
	
	cout<<"Please enter box width: ";
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
