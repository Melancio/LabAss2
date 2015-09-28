#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

//Melance Gaudreault
//Lab assignment 2: A game of Craps



int main() {
    int dice1, dice2, point, total;
    char ans;
    bool done = false;
    srand (time(NULL));
    
    while (! done) {
        	dice1 = rand() % 6+1;
			dice2 = rand() % 6+1;
            total = dice1 + dice2;
            
               if (7 == total || 11 == total){               	
               	cout << "You rolled " << dice1 << " + " << dice2 << endl << "You Win!";                	
               	}
				
				else if (2 == total || 3 == total || 12 == total){		
				cout << "You rolled " << dice1 << " + " << dice2 << endl << "You Lose!"; 			
				}
 				
 				else{ 					
 				cout << "You rolled " << dice1 << " + " << dice2 << endl << "Point is " << total;
                point = total; 	
                cout << endl;
                    do {
                		if ( total == 7 ) break;
                		dice1 = rand() % 6+1;
						dice2 = rand() % 6+1;
            			total = dice1 + dice2;
            			cout << "You rolled " << dice1 << " + " << dice2 << endl << "Point is " << point;
            			cout << endl;
                   		}
						while (total != point);
						
					if (point == total ) cout << "You Win!";
					else cout << "You rolled a 7, you lose!";
				 }

				
            
        cout << endl;
        cout << "Play again (y/n) ? ";
        cin >> ans;
        if ( (ans == 'y') || (ans == 'Y')) done = false;
        else done = true;
        cout << endl;
    	}
    	
	return 0;
}






