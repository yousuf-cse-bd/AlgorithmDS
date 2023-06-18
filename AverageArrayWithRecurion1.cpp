/**
 * @file AverageArrayWithRecurion1.cpp
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Using Recursion To Compute The Average Of An Array | C++ Programming Example
 * @version 0.1
 * @date 2023-06-18
 * @since SunDay; 09:58 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#pragma pack(1)
using namespace std;

double sum{0};
size_t count {0};

double average(const double array[], const ssize_t &len){
	
	if(len == 0){ /*Base Case*/
		try{
			if(count == 0){ /*Divisor zero handling*/
				throw false | true;
			}
		}
		catch(bool &exception){
			return sum;
		}
		return (sum/count);
	}
	else{ /*Recursive case*/
		count ++;
		sum += array[len-1];
		return average(array, len - 1);
	}
}

int main(int argc, const char *const argv[]){
    /* code */
    system("cls");

	double array[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	const ssize_t len{sizeof(array)/sizeof(double)};
	
	cout<<"Average: "<<average(array, len)<<endl;
	
	cout<<"Sum: "<<sum<<endl;
	cout<<"Element number: "<<count<<endl;
	
    return 0;
}
