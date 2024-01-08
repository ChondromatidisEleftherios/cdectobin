#include <iostream> 
using namespace std; 
  
// Function to convert binary 
// to decimal 
int binaryToDecimal(int n) 
{ 
    int num = n; 
    int dec_value = 0; 
  
    // Initializing base value to 
    // 1, i.e 2^0 
    int base = 1; 
  
    int temp = num; 
    while (temp!=0) { 
        int last_digit = temp % 10; 
        temp = temp / 10; 
        dec_value += last_digit * base; 
        base = base * 2; 
    } 
  
    return dec_value; 
} 
  
// Driver code 

int main()
{

int num;

printf("Enter the number to check:");

cin >> num;

int count = 0;

int num1=0;

num1=num;

while(num1 != 0){

int val = num1 % 10;

if((val != 1) && (val != 0)){

count++;


}

num1 = num1 / 10;

}

if(count > 0){

cout << "Given number is not a binary\n";
}

else{
cout << binaryToDecimal(num) << endl; 
cout << "Given number is a binary\n";
}
}
