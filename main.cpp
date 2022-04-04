#include <iostream>
#include <cstring>
#include <utility>
using namespace std;
class inf{
protected:
    string str;
public:
    void init(string str1){
        str = std::move(str1);
    };
    void print_str(){
        cout << str;
    };
};
int main(){
    cout << 10 + 20 << endl << 10 * 20 << endl;
    return 0;
}

