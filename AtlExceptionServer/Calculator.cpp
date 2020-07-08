// Calculator.cpp : Implementation of CCalculator

#include "pch.h"
#include "Calculator.h"


// CCalculator

STDMETHODIMP CCalculator::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ICalculator
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


STDMETHODIMP CCalculator::Add(LONG x, LONG y, LONG* ret)
{
	// TODO: Add your implementation code here
	*ret = x + y;
	return S_OK;
}


STDMETHODIMP CCalculator::Div(LONG x, LONG y, LONG* ret)
{
	// TODO: Add your implementation code here
	if (y == 0)
	{
		//throw COM exception
		Error(L"Divide by Zero!");
		return E_FAIL;
	}
	*ret = x / y;
	return S_OK;
}
