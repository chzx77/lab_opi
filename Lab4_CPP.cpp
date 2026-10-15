//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n;
//    cout << "Enter a positive integer: ";
//    cin >> n;
//
//    bool result = (n >= 10 && n <= 99 && n % 2 == 0);
//
//    if (result)
//        cout << "True" << endl;
//    else
//        cout << "False" << endl;
//
//    return 0; 
//}
// без тернарного оператору
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

   if (n >= 10 && n <= 99 && n % 2 == 0)
{
    cout << "True" << endl;
}
else
{
    cout << "False" << endl;
}
    return 0;
}
// з тернарним оператором
