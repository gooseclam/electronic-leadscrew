// Clough42 Electronic Leadscrew
// https://github.com/clough42/electronic-leadscrew
//
// MIT License
//
// Copyright (c) 2019 James Clough
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.


#ifndef __CONFIGURATION_H
#define __CONFIGURATION_H


//
// Stepper cycle servicing time, in microseconds
// Two cycles are required to complete one pulse
//
#define STEPPER_CYCLE_US 25

//
// RPM recalculation rate, in Hz
// This must be slow enough to get enough pulses from the
// encoder for the desired resolution, but fast enough to
// feel responsive to the user.
//
#define RPM_CALC_RATE_HZ 10

//
// Microprocessor system clock
// This is used to set up the eQEP timers for RPM
// calculations.
//
#define CPU_CLOCK_MHZ 100
#define CPU_CLOCK_HZ (CPU_CLOCK_MHZ * 1000000)


#endif // __CONFIGURATION_H
