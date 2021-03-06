/*
MIT License

Copyright (c) 2020 FOSSA Systems

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "pow_cont.h"

void PowCont_TestRunner_Start()
{

}

/**
*	@brief Reference ID: 		POWCONT1
*			Description: 		Check the battery charging state changes when the temperature is >0 and <0 degrees Celsius.
*			Successful result: 	Simulate the sub-0 scenario by override the temperature sensor,
								does the battery charging react accordingly?
*			Date Log:			05/07/2020 - R.Bamford
*								10/07/2020 - R.Bamford - Cannot test this since we cannot simulate temperatures.
*/
void PowCont_T1()
{
	// See date log.

}

/**
*	@brief Reference ID: 		POWCONT12
*			Description: 		Check the battery charging circuit (MPPT) is switched on and off correctly.
*			Successful result: 	When using the MPPT circuit,
								does it switch on and off without affecting other areas of code? (check call graph)
*			Date Log:			05/07/2020 - R.Bamford
*/
void PowCont_T12()
{
}
