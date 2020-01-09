#include "C4_transaction.h"

int main()
{
    int transactionCounter=0;
    initializeAccount();
    getBalance();
    //Perform First Transaction
    askCustomer();
    updateAccount(amount);
    getBalance();
    //Perform Second Transaction
    askCustomer();
    updateAccount(amount);
    addGift(25.0);
    getBalance();
    //Perform Third Transaction
    askCustomer();
    updateAccount(amount);
    addGift(50.0);
    getBalance();
    thankYou();

    return 0;
}
