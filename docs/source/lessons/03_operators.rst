Operators
=========


Introduction
------------
Different data types offer different operations.
These can be simple mathematical operations like addition, subtraction, multiplication or division between two numbers, to e.g. connecting to a server from an instance of a network class.
Here, we will focus first on the simple math operatons that will be needed for computational physics.


Math binary operations on floating point numbers
------------------------------------------------
When combining two (binary) floats an operator like ``+`` (plus), ``-`` (minus), ``*`` (times), or ``/`` (per), the result is a number (of same type) with the expected value we know fram fundamental math.
Exemplary, we use ``double`` numbers ``a``  and ``b`` as the two variables we perform the operation on and ``c`` as the variable for the result.

.. literalinclude:: ../../../lessons/03_operators/operators.cpp
   :linenos:
   :emphasize-lines: 2
   :lines: 5-24


Math binary operations on integer numbers
-----------------------------------------
For integers ``+`` (plus), ``-`` (minus), and ``*`` (times) behave the same.
For division ``/``, the result is an integer smaller or equal to the floating point value.
The remainder of this divison, also called the modulo in math, can be computed with the modulo operator ``%``.

.. literalinclude:: ../../../lessons/03_operators/operators.cpp
   :linenos:
   :emphasize-lines: 2
   :lines: 26-37


Boolean binary operations
-------------------------
There is a datatype in C and C++ that represent ``true`` and ``false``.
It is called ``bool``.
There a binary operations to numbers that will create a bool, like ``12 > 5`` (twelve is greater than five) will be ``true``, while ``10 <= 2`` (ten smaller or equal to two) will be ``false``.
But there are also binary operations on ``bool`` values, like and ``&&`` or or ``||``.
And is only true of both values are true.
Or is true if one or both values are true.

.. literalinclude:: ../../../lessons/03_operators/operators.cpp
   :linenos:
   :emphasize-lines: 3
   :lines: 39-50

The output option ``std::cout << std::boolalpha;`` sets ``true`` and ``false`` in string output not to ``1`` and ``0`` but to readable strings.
