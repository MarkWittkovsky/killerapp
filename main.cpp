#include <iostream>

using namespace std;

void abspann(){
    cout << "Berechnugn vorbei";
}

int sum(int a=0,int b=0, int c=0){
    return a+b+c;
}

int main()
{

    for (int i=0;i<10;++i){
        cout << i <<"*" <<i << " = " << i*i << endl;

    }
    cout << sum() << endl << sum(3,2) << endl << sum(8,3,9);
    abspann();
    return 0;
}
