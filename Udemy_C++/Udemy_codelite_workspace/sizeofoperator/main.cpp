#include <iostream>
using namespace std;
int main()
{
    cout <<"Size information " <<endl;
    cout <<"Char "<<sizeof(char) << " bytes" <<endl;
    cout <<"int "  << sizeof(int) <<" bytes" << endl;
    cout <<"unsigned int " << sizeof(unsigned int) <<" bytes"<<endl;
    cout <<"short "<<sizeof(short) <<" bytes" <<endl;
    cout <<"long " << sizeof(long) << " bytes" << endl;
    cout <<"long long " << sizeof(long long) << " bytes" << endl;
    
    cout << "==================================" << endl;
    cout <<"float " <<sizeof(float) << " bytes"<< endl;
    cout <<"doble " <<sizeof(double) << " bytes" <<endl;
    cout <<"long double "<<sizeof(long double) << " bytes"<<endl;
    cout << "==================================" << endl;
    
    cout << "Minimum vlaues " <<endl;
    cout <<"char " << CHAR_MIN <<endl;
    cout <<"int " << INT_MIN <<endl;
    cout <<"short " << SHRT_MIN << endl;
    cout <<"long " << LONG_MIN <<endl;

    cout << "Maximum vlaues " <<endl;
    cout <<"char " << CHAR_MAX <<endl;
    cout <<"int " << INT_MAX<<endl;
    cout <<"short " << SHRT_MAX << endl;
    cout <<"long " << LONG_MAX <<endl;
    return 0;
}