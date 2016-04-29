#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand( (unsigned)time(NULL) );

    cout << "bigger than 3 input 1 ,smaller than 3 input 0:" << endl;
    for ( ;true; )
        { int guess;
          cin >> guess;
          if ( guess!=0 && guess!=1 )
             { break;
             }
          int n=rand()%6+1;
          cout << "number=" << n << endl;
          if   ( guess==0 )
               { if   ( n>3 )
                      { cout << "Wrong"<< endl;
                      }
                 else { cout << "Bingo" << endl;
                      }
               }
          if   ( guess==1 )
               { if   ( n>3 )
                      { cout << "Bingo" << endl;
                      }
                 else { cout << "Wrong" << endl;
                      }
               }
        }
    return 0;
}
