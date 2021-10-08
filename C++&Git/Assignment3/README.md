# Assignment3

Before doing this assignment, you should already know the following things:

- Define and Call a Function
- Recursion
- Namespace
- Multi-file compilation

## Review Questions

(You should write the answers to the following questions in the same file)

1. Write the following functions

   - Replace one char with another in a string(array of char) and return the number of replacements. Below is the function prototype in header file.
     ```c
     // replace all a in str with b, len is the length of the string 
     #include<iostream>
     #include<cmath>

     int replace(char str[], int len, char a, char b){
        int rep=0;
        for (int i=0;i<len;i++){
           if (arr[i]==a){
              arr[i]=b
              rep++;
           }
        }
        return rep;
     }

     int main(){
        char str[],a,b;
        int len,rep;
        rep=replace(str,len,a,b,);
     }
     ```
   - Convert Cartesian coordinates(x, y) to polar coordinates($\rho, \theta$), use `sqrt(x)` to find square root of x and `atan(y)` to find the inverse trigonometric, which is arctangent of y. Below is the struct and function prototype in header file.
     ```c
#include <iostream>
#include <cmath>

struct Cartesian {
	float x;
	float y;
};
// struct of polar coordinates
struct Polar {
	float x;
	float y;
};

Polar cartesian2polar(Cartesian P) {
	Polar A;
	float r = float(sqrt(pow(P.x, 2) + pow(P.y, 2)));
	float theta = atan(P.y / P.x)*float(180/3.14);
	A.x = r;
	A.y = theta;
	return A;

}

using namespace std;
int main() {

	float x, y;
	struct Cartesian Cart;
	cout << "Enter the value of x" << endl;
	cin >> x;
	cout << "Enter the value of y" << endl;
	cin >> y;
	Cart.x = x;
	Cart.y = y;
	struct Polar Pol;
	Pol = cartesian2polar(Cart);
	cout << "Polar coordinates are " << Pol.x << " " << Pol.y << endl;
	
	
	return 0;
}

2. Briefly describe the benefits of putting the function prototype in the header file.
A.  1.Allows the programmer to know the type of function (void, int, bool, etc).
    2. The general description of what the function will do in the main function.
    3. Notifies which arguments are passed and their purpose in the function. 
    4. Allows easier reading since functions are named using readable titles.
    5. Multiple uses of the same function.

## Programing Exercise

1. Write a function which input a string(char array) and two numbers (let say a and b). The function should reverse all the item between and including the index a and b. And it returns a bool indecates if the input is valid. (You can define helper functions if needed)  
   For example, input is "robomaster2022", a=0 b=5, the returned bool is true and the string will be "amoborster2022". If the input is a=5 b=0 then it is not valid, return false and the string remain the same.
2. Write a program that can output the first n numbers of Fibonacci sequence.
   For example, n=10, the first 5 numbers of Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34

We have provided the skeleton code ([exer3_1.cpp](./exer3_1.cpp) and [exer3_2.cpp](./exer3_2.cpp)), you only need to complete the calculation part.
For compiling and running the code, using the following commend lines:

```bash
# compile
g++ -o exer_run3_1 exer3_1.cpp
g++ -o exer_run3_2 exer3_2.cpp
# run
./exer_run3_1
./exer_run3_2
```

If you want to know more about compiling with g++, click [here](https://courses.cs.washington.edu/courses/cse373/99au/unix/g++.html)

## DO NOT FORGET TO COMMIT AND PUSH YOU CODE :)
