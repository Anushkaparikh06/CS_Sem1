// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int length = 5;
	int x = 10, y = 10;
	char symbol = '@';
	

	cout<<"Please enter line length: ";
	cin>>length;
	cout<<"Please enter a symbol: ";
	cin>>symbol;
	cout<<"Please enter an X coordinate: ";
	cin>>x;
	cout<<"Please enter an Y coordinate: ";
	cin>>y;
	
    for(int x = 1; x < 6; x++){
    gotoxy (x+10,y+6);
        cout << symbol << endl;
    }
}

