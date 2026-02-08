Operators
=========


Introduction
------------
Different data types offer different operations.
These can be simple mathematical operations like addition, subtraction, multiplication or division between two numbers, to e.g. connecting to a server from an instance of a network class.
Here, we will focus first on the simple math operatons that will be needed for computational physics.


Math binary operations on numbers
---------------------------------
Wen combining two (binary) floats an operator like ``+`` (plus), ``-`` (minus), ``*`` (times), or ``/`` (per), the result is a number (of same type) with the expected value we know fram fundamental math.
Exemplary, we use ``double`` numbers ``a``  and ``b`` as the two variables we perform the operation on and ``c`` as the variable for the result.

.. literalinclude:: ../../../lessons/03_operators/operators.cpp
   :linenos:
   :emphasize-lines: 2
   :lines: 5-24
