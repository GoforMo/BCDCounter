//HW/SW codesign of a BCD counter
//Does not have simulation


#include <systemc.h>
#include "counter.h"

void check_for_10 (int *counted);

int sc_main(int argc, char *argv[ ]) {
	sc_signal<int> counting; 					// the signal for the counting variable
	sc_clock clock("clock",10,SC_NS,0.5); 		// clock period = 20 duty cycle = 50%

	int counted; 								// internal variable, to store the value in counting signal

	counting.write(0); 							// reset the counting signal to zero at start
	counter COUNT("counter"); 					// call counter module
	COUNT.cnt(counting); 						// map the ports by name
	COUNT.clk(clock); 							// map the ports by name

	for (unsigned char i = 0; i < 21; i++) {
		counted = counting.read(); 				// copy the signal onto the variable
		check_for_10(&counted); 				// call the software block & check for 10
		counting.write(counted); 				// copy the variable onto the signal
		sc_start(50,SC_NS); 					// run the clock for 5 cycles
	} return 0;
}

// software block that check/reset the counter value, part of sc_main
void check_for_10(int *counted) {

	if (*counted == 10) {
		cout << "Max count (10) reached ... Reset count to Zero" <<endl;
		*counted = 0; 
	}
}
