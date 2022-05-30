// Accept number from user and return factorial of that number
// input :  5
// output : 120

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;
    
    public:
        void Accept()
        {
            cout << "Enter number : ";
            cin >> this->iNo;
        }
        void Display()
        {
            cout << "Your enter number is : " << this->iNo << endl;
        }
        int Factorial()
        {
            int iCnt = 0, iFact = 1;

            for (iCnt = 1; iCnt <= iNo; iCnt++)
            {
                iFact = iFact * iCnt;
            }
            return iFact;
        }
};

int main()
{
    int iRet = 0;

    Number obj;
    obj.Accept();
    obj.Display();
    iRet = obj.Factorial();

    cout << "Factorial is : " << iRet << endl;

    return 0;
}