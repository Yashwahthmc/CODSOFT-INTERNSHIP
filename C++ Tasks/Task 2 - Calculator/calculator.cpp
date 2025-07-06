#include <iostream>
using namespace std;
int main(){
    double num1,num2;
    int choice;
    cout<<"🧮 Welcome to Yashwanth's C++ Calculator!"<<endl;
    while(true){
        cout<<"\nChoose an operation:\n";
        cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n";
        cout<<"Enter your choice (1-5): ";
        cin>>choice;
        if(choice==5){
            cout<<"Exiting... Thank you for using the calculator! ✅" <<endl;
            break;
        }
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        switch(choice){
            case 1:
                cout<<"Result: "<<num1+num2<<endl;
                break;
            case 2:
                cout<<"Result: "<<num1-num2<<endl;
                break;
            case 3:
                cout<<"Result: "<<num1*num2<<endl;
                break;
            case 4:
                if(num2==0){
                    cout<<"Error! Division by zero."<<endl;
                }else{
                    cout<<"Result: "<<num1/num2<<endl;
                }
                break;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    }
    return 0;
}
