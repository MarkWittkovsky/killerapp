#include <iostream>

using namespace std;

void showIntro(){
    cout << "hallo das ist der feature branch" <<endl;
}

int main()
{

    showIntro();

    for (int i=0;i<10;++i){
        cout << i*i << endl;
    }
    return 0;
}
