/**
 * @file SieveAlgorithmPrime.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sieve of Eratosthene for prime numbers
 * @version 0.1
 * @date 2022-07-09
 * @since Saturday, 6:40 PM
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>
using namespace std;

void sieveOfEratosthenes(unsigned int n){
    bool primeNumners[n+1];
    memset(primeNumners, true, sizeof(primeNumners));
    for(unsigned int p = 2; p * p <= n; p++){
        if(primeNumners[p] == true){
            for(unsigned int i = p * p; i <= n; i = i + p){
                primeNumners[i] = false;
            }
        }
    }
    unsigned int p = 2;
    while(p<=n){
       if(primeNumners[p]){
        cout<<p<<" ";
       }
       ++p;
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    sieveOfEratosthenes(100);
    return 0;
}
