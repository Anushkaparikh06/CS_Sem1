// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x = 0;
	int y = 0;
	char operation;
	
	cout<<"Please enter the first number X: ";
	cin >> x;
	cout<<"Please enter the second number Y: ";
	cin >> y;
	cout<<"Please enter the operation: ";
	cin >>operation;
	
	if (operation == '+'){
	    cout <<"X + Y = "<<(x+y) << endl;
	}
	else if (operation == '-'){
	    cout <<"X - Y = "<<(x-y) << endl;
	}
	else if (operation == '*'){
	    cout <<"X * Y = "<<(x*y) << endl;
	}
	else if (operation == '/'){
	    cout <<"X / Y = "<<(x/y) << endl;
	}
	
}
