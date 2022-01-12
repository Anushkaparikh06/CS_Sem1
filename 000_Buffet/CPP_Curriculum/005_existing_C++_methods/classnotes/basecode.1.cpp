// base code file
#include "./hfiles/poole.h"

//////////////////////////////
/////////////////////////////////////////

main(){
    srand(time(NULL));
     gotoxy(17,5);
    cout << 'A';
    cout << 'N';
    cout << 'U';
    cout << 'S';
    cout << 'H';
    cout << 'K';
    cout << 'A';
    
    gotoxy(3,5);
    cout << 'A';
    gotoxy(3,6);
    cout << 'n';
    gotoxy(3,7);
    cout << 'd';
    gotoxy(3,8);
    cout << 'r';
    gotoxy(3,9);
    cout << 'e';
    gotoxy(3,10);
    cout << 'w';
    
    for(int i = 0; i < 5; i++){
        gotoxy (3,5);
        cout << 'N';
    }

}
