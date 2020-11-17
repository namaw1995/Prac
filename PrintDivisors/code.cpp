#include<iostream>
#include<vector>
#include <cmath>
using namespace std;

void printDivisors(int num)
{
    int i;
    int a[100005];
    int counter = 0;
    for (i = 1; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            cout << i << " ";
            if (num / i != i) 
            {
                a[counter] = num / i;
                counter++;
            }
        }
    }
    for (i = counter - 1; i >= 0; i--) 
    {
        cout << a[i] << " ";
    }
}
int main()

{

    int num;

    cout << "Enter a positive integer>=2 : ";

    // get user input

    cin >> num;

    printDivisors(num);

    return 0;

}
