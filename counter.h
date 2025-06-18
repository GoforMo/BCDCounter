#include "systemc.h"
#define COUNTER

struct counter : sc_module { 				// the counter module
	sc_inout<int> cnt; 						// the input/output port of int type
	sc_in<bool> clk; 						// Boolean input port for clock

	void counter_fn(); 						// counter module function

	SC_CTOR( counter ) { 					// counter constructor
		SC_METHOD( counter_fn ); 			// declare the counter_fn as method
		dont_initialize(); 					// don't run it at first execution
		sensitive << clk.pos(); 			// make it sensitive to +ve clock edge
	}
} ;

void counter :: counter_fn() {				//function is implemented in header file itself therefere no need to include counter.o in makefile
	cnt.write(cnt.read() + 1);
	cout << "cnt = %d\n" << cnt.read() <<endl;
}
