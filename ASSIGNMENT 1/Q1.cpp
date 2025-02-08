/* WAP to take a positive integer n as input and
 i. check whether n is prime number.
 ii. if it is not prime,find all its factors
 iii. if it is prime, find the next prime number greater than n */

#include <iostream>

using namespace std;

bool prime(int a)
{
    if (a<2)
    {
        return false;
    }
    else 
    {
        for (int i = 2; i*i <=a; i++)
        {
            if (a%i==0)
            {
                return false;
            }
            
        }
        
    }
    return true;
}

void factors(int b)
{
    
    cout << "Factors of " << b << " are: ";
    for (int i = 1; i <= b; i++) 
    {
        if (b%i == 0) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int nextPrime(int c)
{

    int next=c+1;
    while (!prime(next))
    {
        next++;
    }
    return next;

}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (prime(n))
    {
        cout<<n<<" is prime."<<endl;
        cout<<"The next prime number greater than "<<n<<" is "<<nextPrime(n)<<endl;

    }
    else
    {
        cout<<n<<" is not prime."<<endl;
        factors(n);
        cout<<endl;
    }
    
    return 0;
}

