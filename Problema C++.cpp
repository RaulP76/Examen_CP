#include <iostream> 
#include <ctime>    
#include <cstdlib>  
using namespace std;

int main(){
//generarea de numere aleatoare de la 0 la 10
    srand (time(NULL));//functiile 'strand', 'time' si 'NULL' folosite pentru generarea de numere aleatoare
    int n= (rand()%10+1), r;//declarare si initializare variabile ( aleatoare pentru n si r pentru numarul de publicatii ce trebuie returnate )
    cout << "Numarul de publicatii imprumutate este: " << n << endl;

//conditii necesare pentru rezolvarea problemei
    if ( n % 2 == 0 ) {
        r = n/2;
        cout << "Utilizatorul este rugat sa restituie " << r << " publicatii.\n";

        } else if ( n % 3 == 0 ) {
            r = n*2/3;
            cout << "Utilizatorul este rugat sa restituie " << r << " publicatii.\n"; 

            } else if ( n % 3 == 0 && n % 2 == 0 ) {
                r=n/2+1;
                cout << "Utilizatorul este rugat sa restituie " << r << " publicatii.\n";

                } else if ( n % 3 != 0 || n % 2 != 0 ) {
                    r=n;
                    cout << "Utilizatorul este rugat sa restituie " << r << " publicatii.\n";
                    } else  {
                        cout << "La revedere!\n";
                        }

    return 0;
}
