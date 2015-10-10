#include <iostream>

using namespace std;

void abspann(){
    cout << "Berechnugn vorbei";
}

int main()
{

    for (int i=0;i<10;++i){
        cout << i <<"*" <<i << " = " << i*i << endl;

    }
    abspann();
    return 0;
}
