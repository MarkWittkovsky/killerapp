#include <iostream>

using namespace std;

void showIntro(){
    cout << "Hallo das ist der feature branch !!!" <<endl;
    cout << "Im feature branch commit 3" << endl;
}

int main()
{

    showIntro();

    for (int i=0;i<10;++i){
        cout << i*i << endl;
    }
    return 0;
}
