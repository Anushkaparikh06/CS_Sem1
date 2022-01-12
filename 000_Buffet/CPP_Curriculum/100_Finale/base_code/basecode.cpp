// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
     gotoxy (12,2);
        cout << "*";
	gotoxy (12,1);
        cout << "-";
    gotoxy (11,3);
        cout << "---";
    gotoxy (10,4);
        cout << "-----";
    gotoxy (9,5);
        cout << "-------";
   gotoxy (11,6);
        cout << "|_|";
        
    
    for(int i = 0; i < 5; i++){
        gotoxy (22,5);
       cout << "MERRY CHRISTMAS!";
    }
    
    gotoxy (45,2);
        cout << "*";
	gotoxy (45,1);
        cout << "-";
    gotoxy (44,3);
        cout << "---";
    gotoxy (43,4);
        cout << "-----";
    gotoxy (42,5);
        cout << "-------";
   gotoxy (44,6);
        cout << "|_|";
for (int y = 1; y < 3; y++){        
for(int x = 1; x < 50; x++){
    gotoxy (x+1,y+6);
        cout << "*";
    }
  }
  
  
	  gotoxy(5,3); 			
    cout << "*";
    cout << endl;
    sleep(1);
    gotoxy(5,3);
    cout << "  ";
    
    gotoxy(5,4);
   cout << "*";
    cout << endl;
    sleep(1);
    gotoxy(5,4);
    cout << "  ";
    
    gotoxy(5,5);
   cout << "*";
    cout << endl;
    sleep(1);
    gotoxy(5,5);
    cout << "  ";
    
    for(int i = 1; i <= 1; i++);
    
    gotoxy(50,3); 			
    cout << "*";
    cout << endl;
    sleep(1);
    gotoxy(50,3);
    cout << "  ";
    
    gotoxy(50,4);
   cout << "*";
    cout << endl;
    sleep(1);
    gotoxy(50,4);
    cout << "  ";
    
    gotoxy(50,5);
   cout << "*";
    cout << endl;
    sleep(1);
    gotoxy(50,5);
    cout << "  ";
    
    for(int i = 1; i <= 1; i++);
    cout<< endl;
    
}


