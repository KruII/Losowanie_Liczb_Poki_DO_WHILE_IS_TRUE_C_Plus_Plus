#include "icludy.h"

using namespace std;
int x=0,y=1, losowa;
int main(){
    srand(time(NULL));
    losowa=rand();
    do
    {
        losowa=rand();
        y++;
        x+=losowa;
        cout<<"Wylosowana: "<<losowa<<" Suma: "<<x<<endl;
    } while (x<=10000 && y<=100);
    Sleep(3000);
    return 0;
} 
