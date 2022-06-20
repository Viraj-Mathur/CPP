#include <iostream>
using namespace std;
class Test
{
private:   
    static int x;
public:
    static int y;
    void func(int x)
   {
        cout << "Value of static x is " << Test::x;
        cout << "\nValue of local x is " << x;
    }
};
int Test::x = 33;
int Test::y = 44;

int main()
{
    Test obj;
    int x = 9;
    obj.func(x);
    cout << "\nTest::y = " << Test::y;
    return 0;
}