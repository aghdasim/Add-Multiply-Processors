#include <iostream>
#include <sstream>

using namespace std;


int main() {
    int x=0 , y=0 , z=0, a=0 , m=0;


    string operatorString;


    cout << " \n X=AMMA \n Y=MAAA \n Z=AAMM  ";
    cout << " \n          Please enter your operator in this format :  a-(X, Y or Z)-m   :  ";
    cout << " \n ";

    cin >> operatorString;
    stringstream ss(operatorString);

    char processor;
    char dash;
    ss >> a >> dash >> processor >> dash >> m;



    if (a>0 && m<100 && dash =='-' && (processor == 'X'|| processor =='Y'|| processor =='Z'
    || processor == 'x'|| processor =='y'|| processor =='z'
    )){


        if (processor =='X' || processor == 'x') { ///X=AMMA
            x = 0 + a ;
            x *= m;
            x *= m;
            x += a;
            cout << " RESULT =========>  " << x << endl;
        }

        else if (processor =='Y' || processor =='y'){ ///Y=MAAA
            y = 0 * m;
            y += a;
            y += a;
            y += a;
            cout <<  " RESULT =========>  " << y << endl;
        }
        else if (processor =='Z' || processor =='z') { ///Z=AAMM
            z = 0+a;
            z += a;
            z *= m;
            z *= m;
                cout <<  " RESULT =========>  " << z << endl;
        }

    }
    else {
        cout << " ----- wrong format ----- ";
            }



    return 0;
}
