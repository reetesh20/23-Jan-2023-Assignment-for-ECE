
Q2::
What happens if an exception is not caught in a C++ program?
answer-
If an exception is not caught, your program will terminate immediately
(and the stack may not be unwound, so your program may not even clean up after itself properly).

