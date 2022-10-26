#include <bits/stdc++.h>
using namespace std;

void callByVal(int num)
{
    num = 30;
}

void callByRef(int &num)
{
    num = 30;
}

void callByValArr(vector<int> v)
{
    v[0] = 8;
}

void callByRefArr(vector<int> &v)
{
    v[0] = 8;
}

int main()
{
    // Call by Value
    int num = 10;
    cout << "Before, Call by Value:  " << num << endl;
    callByVal(num);
    cout << "After, Call by Value:  " << num << endl;

    cout << "\n";

    // Call by Reference
    cout << "Before, Call by Ref:  " << num << endl;
    callByRef(num);
    cout << "After, Call by Ref:  " << num << endl;

    cout << "\n";

    // Call by Value for Array
    vector<int> arr = {1, 2, 3};
    cout << "Before, Call by Value Arr:  " << arr[0] << endl;
    callByValArr(arr);
    cout << "After, Call by Value Arr:  " << arr[0] << endl;

    cout << "\n";

    // Call by Reference for Array
    cout << "Before, Call by Ref Arr:  " << arr[0] << endl;
    callByRefArr(arr);
    cout << "After, Call by Ref Arr:  " << arr[0] << endl;

    return 0;
}

// Notes:

/*
Call by Value
In call by value, the actual value that is passed as argument is not changed after performing
some operation on it. When call by value is used, it creates a copy of that variable into the
stack section in memory. When the value is changed, it changes the value of that copy, the
actual value remains the same
*/

/*
Call by Reference
In call by reference the actual value that is passed as argument is changed after performing
some operation on it. When call by reference is used, it creates a copy of the reference of that variable
into the stack section in memory. Is uses a reference to get the value. So when the value is changed using
the reference it changes the value of the actual variable.

* The call by reference is mainly used when we want to change the value of the passed argument
into the invoker function.
* One function can return only one value. When we need more than one value from a function,
we can pass them as an output argument in this manner.
*/
