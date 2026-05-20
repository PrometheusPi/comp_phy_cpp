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
   :language: cpp
   :emphasize-lines: 2-3
   :start-after: doc start: integer
   :end-before: doc end: integer


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
   :language: cpp
   :start-after: doc start: double
   :end-before: doc end: double



As with integers, common mathematical operations and printing can be performed.


Lists and array
---------------

It is useful to be able to store more data of the same data type in a single array and have a clear way to access and change this data.
C++ provides various options and data types for this purpose.
One option is a C-type array, which was available in C, the programming language that preceded C++.
Here one defines the length of the array in brackets after the datatype, e.g. ``int[5]``.
Another option is a ``std::array``.
Both require that the data be of the same type and that a fixed length be defined.
If you need a variable length, you can use a ``std::vector``.
The definitions of both ``std::array`` and ``std::vector`` are followed by a template argument list ``< ... >``
that specifies the data type to be stored and, in the case of an array, the number of values that can be stored.
There are also sets, `std::set`, that behave similarly to vectors but only contain unique entries.
Sets are not demonstrated below.

.. literalinclude:: ../../../lessons/02_variables_and_expressions/variables_and_expressions.cpp
   :linenos:
   :language: cpp
   :start-after: doc start: vector
   :end-before: doc end: vector



One can use the bracket operator ``[...]`` to access a value in a vector or array.
Counting starts at 0, so to get the first entry, one needs to use [0], for the second [1], and so on.
In our example, single values can be printed because they are just numbers.
Printing an entire std::array or std::vector will be discussed later when loops are covered.
Simply writing ``std::cout << list1;`` will cause an error.
Printing ``list3`` will not return a stored value, but rather the memory address of the array, also known as a pointer.

Text: characters and strings
----------------------------

In C++, a single letter can be stored as a ``char`` data type.
In C, the predecessor of C++, more characters, e.g., for text, were stored in an array of ``char``.
In C++, the string data type replaces that role and comes with extra features that are not discussed here.

.. literalinclude:: ../../../lessons/02_variables_and_expressions/variables_and_expressions.cpp
   :linenos:
   :language: cpp
   :start-after: doc start: char
   :end-before: doc end: char



Like numbers, characters and strings can be printed.


Truth values (boolen)
---------------------

C++ also supports a datatype that stores a truth value (``true`` or ``false``).
This is called a boolean value and is the return type of logical operations and comparisions
Examples are:

.. literalinclude:: ../../../lessons/02_variables_and_expressions/variables_and_expressions.cpp
   :linenos:
   :language: cpp
   :start-after: doc start: bool
   :end-before: doc end: bool



Commonly ``true`` is represented by ``1``, while ``false`` is represented by ``0``.
Using ``std::boolalpha`` and ``std::noboolalpha`` turns this convetion off or on and prints instead true or false as text.
