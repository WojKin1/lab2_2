#include <iostream>
#include "class.h"
#include "vector.h"

using namespace std;

int main()
{
    // test konstruktorow i setterow/getterow
    Zespolone c1;
    c1.setReal(3.0);

    c1.setImag(4.0);
    cout << "czesc 1: " << c1.getReal() << " + " << c1.getImag() << "i\n";

    Zespolone c2(1.0, 2.0);
    cout << "czesc 2: " << c2.getReal() << " + " << c2.getImag() << "i\n";


    // test konwersji z double
    Zespolone c3 = 5.0;
    cout << "cczesc 3: " << c3.getReal() << " + " << c3.getImag() << "i\n";



  double test
    
   
    // test operacji arytmetycznych
    Zespolone c4 = c1 + c2;
    cout << "czesc4: " << c4.getReal() << " + " << c4.getImag() << "i\n";

    Zespolone c5 = c1 - c2;
    cout << "cczesc 5: " << c5.getReal() << " + " << c5.getImag() << "i\n";

    Zespolone c6 = c1 * c2;
    cout << "czesc 6: " << c6.getReal() << " + " << c6.getImag() << "i\n";


    try
    {
        Zespolone c7 = c1 / c2;
        cout << "czesc 7: " << c7.getReal() << " + " << c7.getImag() << "i\n";
    }
    catch (const invalid_argument& e) 
    {
        cerr << e.what() << '\n';
    }

    // test konwersji do vector 
    Vector v = Zespolone::toVector(c1);
    cout << "vctor z 1: ( " << v.getX() << ", " << v.getY() << " )\n";




    return 0;
}
