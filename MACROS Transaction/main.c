 /*
===========================================================================
Name: main.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

//Linking Header File
#include "C4_transaction.h"

int main(void)
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

	return EXIT_SUCCESS;
}
