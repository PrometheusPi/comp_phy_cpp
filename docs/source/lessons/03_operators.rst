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
   :language: cpp
   :emphasize-lines: 2
   :lines: 5-24


Math binary operations on integer numbers
-----------------------------------------
For integers ``+`` (plus), ``-`` (minus), and ``*`` (times) behave the same.
For division ``/``, the result is an integer smaller or equal to the floating point value.
The remainder of this divison, also called the modulo in math, can be computed with the modulo operator ``%``.

.. literalinclude:: ../../../lessons/03_operators/operators.cpp
   :linenos:
   :language: cpp
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
   :language: cpp
   :emphasize-lines: 3
   :lines: 39-50

The output option ``std::cout << std::boolalpha;`` sets ``true`` and ``false`` in string output not to ``1`` and ``0`` but to readable strings.


Number unary operations
-----------------------
There are also operators acting just on a single variable.
These are called unary operators.
They perform operations ìn place.
The most common are the increment ``++`` and decrement ``--`` operators that increase or decrease the variable by one.
If they are in front of the variable, they are executed before the return value, thus the return value is already incremented/decremented.
If they follow after the variable, the return value is the original content of the variable.
Furthermore there are addition ``+=```, subtraction ``-=``, multiplication ``*=`` and division ``/=`` unary operators.
They act like ``a = a + x`` and reprsent a shorthand notation via ``a += x`` (and similar).

.. literalinclude:: ../../../lessons/03_operators/operators.cpp
   :linenos:
   :language: cpp
   :emphasize-lines: 4,8,10,13,16,19,22
   :lines: 52-74


Conditional operators
---------------------
Because ``if`` / ``else`` clauses with only setting a value depending on the boolean outcome of the logic question, there exist a short-hand form in C++: the conditional operator.

.. code-block:: cpp

   int my_variable;
   if (a > 2){
     my_variable = 7;
   }
   else{
     my_variable = 3;
   }


This can be written much short as:

.. code-block:: cpp

   int my_variable = (a > 2) ? 7 : 3;


An example is:

.. literalinclude:: ../../../lessons/03_operators/operators.cpp
   :linenos:
   :language: cpp
   :emphasize-lines: 3
   :lines: 76-82
