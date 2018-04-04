#ifndef C_EXCEPTION_H
#define C_EXCEPTION_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

class CException
{
private:
	unsigned int uiEXCValeur;


public:
	void CException();

	void CException(unsigned int uiVal);

	void ~CException();

	unsigned int getuiEXCValeur();

	void setuiEXCValeur(unsigned int uiVal);

};
#endif
