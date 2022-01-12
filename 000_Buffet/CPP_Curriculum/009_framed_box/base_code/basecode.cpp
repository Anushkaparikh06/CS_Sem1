// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
{
	int coordinate = 0;
	int width = 0;
	int height = 0;
	char symbol;
	
		cout<<"Please enter box width: ";
	cin>>width;
	cout<<"Please enter box height: ";
	cin>>height;
	cout<<"Please enter box x coordinate: ";
	cin>>  coordinate;
	cout<<"Please enter box y coordinate: ";
	cin>>  coordinate;
	cout<<"Please input a symbol: ";
	cin>>symbol;
	

   		for(int i = 0; i < height; i++){
		for(int y = 0; y < width; y++){
		for(int x = 1; x < 6; x++){
   			 gotoxy (x+12,y+8);
			cout << symbol;
			for(int y = 0; y < width; y++){
			for(int x = 1; x < 5; x++){
   			 gotoxy (x+13,y+9);
   			 cout << "  " << endl;
   			 
			
	}
		}
			}
				}
					} 
						}
							}
					

	
