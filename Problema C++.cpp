#include <iostream> //biblioteca necesara pentru datele de intrare/iesire in C++
#include <ctime>    //biblioteca necesara pentru a utiliza funtia " time "
#include <cstdlib>  //biblioteca necesara pentru a utiliza funtia " rand "
using namespace std;//declaratie pentru folosirea de nume din biblioteca standard

int main(){//declararea functiei principale
//generarea de numere aleatoare de la 0 la 10
    srand (time(NULL));//functiile 'strand', 'time' si 'NULL' folosite pentru generarea de numere aleatoare
    int n= (rand()%10+1), r;//declarare si initializare variabile ( aleatoare pentru n si r pentru numarul de publicatii ce trebuie returnate )
    cout << "Numarul de publicatii imprumutate este: " << n << endl;//afisare pe consola

//conditii necesare pentru rezolvarea problemei
    if ( n % 2 == 0 ) {//implementare conditie daca numarul de publicatii imprumutate este divizibil cu 2
        r = n/2;//functia care stabileste cate publicatii trebuie returnate
        cout << "Utilizatorul este rugat sa restituie " << r << " publicatii.\n";//afisare pe consola

        } else if ( n % 3 == 0 ) {//implementare conditie daca numarul de publicatii imprumutate este divizibil cu 3
            r = n*2/3;//functia care stabileste cate publicatii trebuie returnate
            cout << "Utilizatorul este rugat sa restituie " << r << " publicatii.\n";  //afisare pe consola

            } else if ( n % 3 == 0 && n % 2 == 0 ) {//implementare conditie daca numarul de publicatii imprumutate este divizibil cu 2 si cu 3
                r=n/2+1;//functia care stabileste cate publicatii trebuie returnate
                cout << "Utilizatorul este rugat sa restituie " << r << " publicatii.\n";//afisare pe consola

                } else if ( n % 3 != 0 || n % 2 != 0 ) {//implementare conditie daca numarul de publicatii imprumutate este divizibil cu 2 sau cu 3
                    r=n;//functia care stabileste cate publicatii trebuie returnate
                    cout << "Utilizatorul este rugat sa restituie " << r << " publicatii.\n";//afisare pe consola
                    } else  {//executare conditie pe ramura de fals daca celelalte condtii nu sunt adevarate
                        cout << "La revedere!\n";//afisare pe consola
                        }

    return 0;//incheierea functiei principale
}
