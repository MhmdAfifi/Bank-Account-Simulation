#include <iostream>

using namespace std;



class Account
{
private:
    int accNum;
    string name;
    int balance;


public:
    void setAccNum(int n)
    {

        accNum = n;
    }

    int getAccNum()
    {

        return accNum;
    }

    void setBalance(int b)
    {

        balance = b;
    }

    int getBalance()
    {

        return balance;
    }

    void setName(string n)
    {

        name = n;
    }

    string getName()
    {

        return name;
    }

    //withdraw
    void withdraw(float num)
    {
        balance-=num;
    }

    //deposit
    void deposit(float num)
    {
        balance+=num;
    }


};




int main()
{


    Account user1;
    user1.setName("mhmd khalil");
    user1.setAccNum(1234);
    user1.setBalance(5000);

    Account user2;
    user2.setName("hana");
    user2.setAccNum(4321);
    user2.setBalance(1000);

    char operation;
    int num;

    if(user1.getAccNum()==1234)
    {
cout<<"welcome "<<user1.getName()<<" to our bank \n";

    while(true)
    {
        cout<<"eneter the operation \n";
        cout<<"enter w to withdraw or d to deposit \n";
        cout<<"enter b to check balance \n";
        cin>>operation;

        switch(operation)
        {
        case 'w':
            cout<<"enter the amount to withdraw \n";
            cin>>num;
            if(user1.getBalance()>num)
            {
                user1.withdraw(num);
            }
            break;

        case 'd':
            cout<<"enter the amount to deposit \n";
            cin>>num;

            user1.deposit(num);

            break;

        case 'b':
            cout<<"ur balance is : "<<user1.getBalance()<<" EGP \n";

        default:
            break;
        }

    }

    }
    else
        cout<<"wrong account number \n";

    return 0;
}
