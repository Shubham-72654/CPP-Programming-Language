// input : iRow = 4 ,  iCol = 4
// output : 
//  1   2   3   4
//  1   @   @   4
//  1   @   @   4
//  1   2   3   4

#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow;
        int iCol;

    public:
        void Accept()
        {
            cout << "Enter number of Rows : ";
            cin >> this->iRow;

            cout << "Enter number of Columns: ";
            cin >> this->iCol;
        }

        void Display()
        {
            cout << "\nYou entered Rows : " << this->iRow << " and Columns : " << this->iCol << endl;
        }

        void DisplayPattern()
        {
            int i = 0, j = 0;

            if(iRow != iCol)
            {
                cout << "Rows and Columns are not same" << endl;
                return;
            }

            for (i = 1; i <= iRow; i++)
            {
                for (j = 1; j <= iCol; j++)
                {
                    if((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
                    {
                        cout << j << "\t";
                    }
                    else
                    {
                        cout << "@\t";
                    }
                }
                cout << endl;
            }
        }
};

int main()
{
    Pattern obj;
    obj.Accept();
    obj.Display();
    obj.DisplayPattern();

    return 0;
}