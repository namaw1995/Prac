// 
//

#include <iostream>
using namespace std;

int fib(int n);

int main()
{
    int n, output;
    cout << "Please enter a positive integer:";
    cin >> n;
    output = fib(n);
    cout << output << endl;
    return 0;

}

int fib(int n)
{
    int f0, f1, f2;
    f0 = 0;
    f1 = 1;
    if (n == 1)
    {
        f2 = 1;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            f2 = f1 + f0;
            f0 = f1;
            f1 = f2;   
        }
    }
    return f2;
}
