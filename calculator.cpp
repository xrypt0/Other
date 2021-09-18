#include <iostream>


using namespace std;

int main()
{
    float number1,number2;
    char transaction;
    
    
cout << "Hello My Friends ! I'am a Calculator ! My Creator : https://github.com/xrypt0 \n \n \n NOTE : Transactions: \n Addition : + \n Subtraction : - \n Multiplication : * \n Division : / \n \n" << endl;
cout << "Please Enter The First Number : " << endl;
cin >> number1; 
cout << "Please Enter The Desired Transaction : " << endl;
cin >> transaction;
cout << "Please Enter The Second Number : " << endl;
cin >> number2;

if(transaction == '+'){
    
    cout << "Response : " << number1+number2 << endl;
    
}
else if(transaction == '-'){
    
    cout << "Response : " << number1-number2 << endl;
    
}
else if(transaction == '*'){
    
    cout << "Response : " << number1*number2 << endl;
    
}
else if(transaction == '/'){
    
    cout << "Response : " << number1/number2 << endl;
    
}
else{
    
    cout << "Something Went Wrong :( Pleas Try Again " << endl;
    
}
    
	
	return 0;
}
