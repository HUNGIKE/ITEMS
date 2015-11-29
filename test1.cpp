#include <iostream>
using namespace std;

class test {
        int i;
    public:
        test(int i):i(i){};
        virtual test& printI();
};

test& test::printI(){
    cout<<"i="<<i;
    return (*this);
}

int main(){
     (
           ( *( new test(100) ) = test(200) ).printI() = test(300)
     ).printI();
}
