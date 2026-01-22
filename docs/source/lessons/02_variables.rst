Variables and Operations
========================


Introduction
------------

All programming language have variables.
An abstract way to store data.
In C++, one has to clearly define what a variable will contain.
This mean one has to define the kind of data it will hold.

.. code-block:: cpp
   
   datatype variable_name;
   datatype variable_name = some_value;

Integer
-------

A very comon datatype are integers, whole numbers, declared as ``int``.
They can either be defined and initialized directly, or only declared and assigned a value later:

.. literalinclude:: ../../../lessons/02_variables_and_expressions/variables_and_expressions.cpp
   :linenos:
   :emphasize-lines: 2-3
   :lines: 9-15


On can also perform standard mathematical operations on integers or print them, as in the :doc:`Hello World example <01_hello-world>`

The first line of above example contains a comment to the code that starts with ``//``.
Anything after that will be ignored by the compiler.
Comments can also be set between ``/* ... */``, even over multiple lines (see example with floats below) . 

Floating point numbers
----------------------

Floating point numbers are rational numbers.
They can be defined in low 32-bit precision as ``float`` or higher precision 64-bit as ``double``.

.. literalinclude:: ../../../lessons/02_variables_and_expressions/variables_and_expressions.cpp
   :linenos:
   :lines: 19-27


As with integers, common mathematical operations and printing can be performed.
