# Introduction 
A BCD (Binary-Coded Decimal) counter is a digital circuit that counts in base-10 (decimal) using binary representation. It counts from 0 to 9 and then resets to 0, effectively creating a "decade" counter. This contrasts with standard binary counters, which count from 0 to the maximum value determined by the number of bits (e.g., 0-15 for a 4-bit binary counter). 

__Here's a more detailed explanation:__

__Counting in Decimal:__ BCD counters are designed to represent decimal digits (0-9) using binary code. Each decimal digit is represented by a 4-bit binary number. 

__Modulus-10:__ A BCD counter is also known as a decade counter because it cycles through 10 distinct states (0-9) before resetting. 

__Implementation:__ BCD counters are typically implemented using flip-flops (like T-type or JK flip-flops) and logic gates to create the desired counting sequence. 

__Applications:__ BCD counters are useful when you need to display decimal digits directly or when interfacing with devices that use decimal representations. 

__Example:__ A common example is the 74LS90 IC, which can be configured as a BCD counter. 

__State Diagram:__ The state diagram of a BCD counter shows the sequence of states (binary representations of 0-9) and the transitions between them when a clock signal is applied. 

Comparison with Binary Counters:
While both BCD and binary counters are used in digital systems, binary counters are more efficient for general-purpose counting as they can represent a wider range of numbers with the same number of bits. BCD counters are more suited for applications where decimal representation is required

# How to run

``` make
make 
```
and 

```
./counter.x
```