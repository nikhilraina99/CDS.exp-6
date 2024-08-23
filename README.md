## Experiment 6

# Aim
To understand and apply `for` loops and `while` loops in C++.

# Software Used
Visual Studio Code (VS Code)

# Problem Statements
1 Print Numbers Using a for Loop
Write a C++ program to print a sequence of numbers using a for loop.

2 Print Numbers Using a while Loop
Write a C++ program to print a sequence of numbers using a while loop.

3 Triangular Star Pattern
Create a C++ program that generates a triangular star pattern.

4 Square-Shaped Star Pattern
Develop a C++ program to produce a square-shaped star pattern.

5 Pyramid of Stars
Write a C++ program that constructs a pyramid of stars.

6 Sum of Printed Numbers
Implement a C++ program to calculate the sum of the numbers printed in the sequence.

7 Floyd's Triangle
Create a C++ program to generate Floyd's triangle.

8 Floyd's Triangle of Alphabets
Develop a C++ program that generates Floyd's triangle using alphabets.

9 Password Validation Loop
Write a C++ program that repeatedly prompts the user for a password until the correct one is entered.

# Theory
For Loop: A loop structure used to repeat a block of code a specific number of times, controlled by a defined range.

While Loop: A loop that continues to execute a block of code as long as a specified condition remains true, typically used when the number of iterations isn't predetermined.

Floyd's Triangle: A triangular arrangement of natural numbers where numbers are placed in a left-justified pattern, commonly used in educational contexts.

# Program Codes
```javascript
// Nikhil
// 23070123093
// EXP6
// Printing numbers using for loop.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the end value: ";
    cin >> num ;
    for(int i = 1; i<=num; i++)
    {
        cout<< "  " <<i;
    }
    return 0;
}
```

```javascript
// Nikhil
// 23070123093
// EXP6
// Printing numbers using while loop.
#include<iostream>
using namespace std;
int main ()
{ int a,i=1;
    cout << "Enter end value: ";
    cin >> a;
    while( i <= a)
    { 
        cout<< " "<<i;
        i++;
    }
    return 0;

}
```

```javascript
// Nikhil
// 23070123093
// EXP6
// Triangular star pattern
#include<iostream>
using namespace std;
int main ()
{
    int row;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    {
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}
```

```javascript
// Nikhil
// 23070123093
// EXP6
// Square shaped star pattern.
#include<iostream>
using namespace std;
int main ()
{ int r;
    cout<< "Enter number of rows: ";
    cin>> r;
    for(int i = 0; i<=r-1; i++)
    { for (int j =0; j<=r-1; j++)
    {
        cout << "*" ;
    }
 cout << endl;
    }
    return 0;
}
```

```javascript
// Nikhil
// 23070123093
// EXP6
// Pyramid of star
#include<iostream>
using namespace std;
int main ()
{
    int row;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for ( int k = row-1 ; k>i; k--)
    {
        cout << " ";
    }
        for(int j= 0 ; j<2*i+1; j++)
    {
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}
```

```javascript
// Nikhil
// 23070123093
// EXP6
// Sum of the numbers printed
#include<iostream>
using namespace std;
int main()
{
    int sum = 0, num;
    cout << "Enter last number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
        

    }
    cout << "Sum is: "<<sum;
    return 0;

}
```

```javascript
// Nikhil
// 23070123093
// EXP6
// Floyd triangle
#include<iostream>
using namespace std;
int main()
{
    int row, a=1;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    { 
        cout << " "<<a;
        a++;
    }
    
    cout << endl;
    }
    return 0;
}
```

```javascript
// Nikhil
// 23070123093
// EXP6
// Floyd triangle of alphabets
#include<iostream>
using namespace std;
int main()
{
    int row; 
    char a='A';
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    { 
        cout << " "<<a;
        a++;
    }
    
    cout << endl;
    }
    return 0;
}
```

```javascript
// Nikhil
// 23070123093
// EXP6
// Password validation
#include<iostream>
#include<string>
using namespace std;
int main ()
{ string pass;
    do
{
 cout << "Enter a password: ";
 cin >> pass;
 if (pass=="SIT")
 {
    cout << "Success!";
 }
 else
 {
    cout << "Try again"<<endl;
 }
} 
while (pass != "SIT");
return 0;
}
```

# Outputs:

 FloydABCD-
 
 ![Screenshot 2024-08-22 235427](https://github.com/user-attachments/assets/1ee1e280-1a42-4fb0-8ed2-85aecf7c67e9)

 Counting-
 
 ![Screenshot 2024-08-22 235610](https://github.com/user-attachments/assets/f29cb0bb-b5a0-40ae-9cbe-5e3d895b55ff)
 
 Floyd-
 
 ![Screenshot 2024-08-22 235838](https://github.com/user-attachments/assets/0646b117-c1e9-45de-9217-19a325bc5161)
 
 NumberPrint-
 
 ![Screenshot 2024-08-23 000040](https://github.com/user-attachments/assets/78cf7c37-889f-49ed-8613-3d614ec6657c)
 
 Password-
 
 ![Screenshot 2024-08-23 000212](https://github.com/user-attachments/assets/0832967c-d454-4cbe-ae8f-651d119b5967)
 
 Pyramid-
 
 ![Screenshot 2024-08-23 000344](https://github.com/user-attachments/assets/ecf52c98-6eab-4d8c-886f-9ae30aa9631e)
 
 Star_1-
 
 ![Screenshot 2024-08-23 000456](https://github.com/user-attachments/assets/351b6c18-f307-4bcd-9e43-53953bdaa8d4)
 
 Star_2-
 
 ![Screenshot 2024-08-23 000558](https://github.com/user-attachments/assets/4da00bf9-d2b5-4e1c-a4f7-9a9aae3976f6)
 
 While-
 
 ![Screenshot 2024-08-23 000707](https://github.com/user-attachments/assets/8e4473e6-56b1-4d71-896f-93191bcb411f)

# Conclusion

- We learned to use `for` loops, `while` loops, and nested loops in C++.
  











