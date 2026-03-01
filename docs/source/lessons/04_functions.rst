Functions
=========


Introduction
------------
In programming, one often wants the computer to repeat the same task.
It would be inefficuent to rewrite the same code, thus there exist the concept of functions, code blocks with defined input and output, that allow reusing code.


Define your own function
------------------------
You can write your own function as follows:

.. code-block:: cpp

   return_type function_name(arg_tpye_1 arg_1, arg_type_2 arg_2){
     ... your code
     return ...
   };



Outside the ``main`` function, you can define the function.
It has to have a name and a return type.
If no return is needed, state ``void`` instead of a return type.
You ca define as many arguments and their types for the function as you want.
A function has to be unique with respect to its name and argument types.
In the ``{...};`` you can write the code to be executed.

An example of a self-defined function is:

.. literalinclude:: ../../../lessons/04_functions/functions.cpp
   :linenos:
   :emphasize-lines: 1
   :lines: 7-9,39-41,56-58,98-100


Use existing functions from libraries
-------------------------------------
It is not neccesairy, that you define all functions yourself.
Many functions can be added by including libraries.
E.g. many math functions come by including the standard math library ``cmath``.
These functions are then found in the ``std`` namespace.
To e.g. use the sinus function, you can use ``std::sin``.

.. literalinclude:: ../../../lessons/04_functions/functions.cpp
   :linenos:
   :emphasize-lines: 2,10
   :lines: 1-4,39-46,98-100


Here, the value for pi is used by including the library ``numbers`` and using ``std::numbers::pi``.


Void functions
--------------
A function does not necessarily need to return something in C++.
For example function that just print to screen, do file IO, connect to a sever, etc. do not need to return something.
For that, the return type ``void`` has been added to C++.
An example of a self-written ``void``-function, that prints out a string a specific amount of times is:

.. literalinclude:: ../../../lessons/04_functions/functions.cpp
   :linenos:
   :emphasize-lines: 3-8
   :lines: 1,11-18,40,60-61,98-100


Function overloading
--------------------
In C++, a function is defined by a unique name and its unique input argument types.
Thus two functions can have the same name if they have different number of inputs and/or input types.
As an example, we can define two sum functions ``sum`` with two input values but of different type.

.. literalinclude:: ../../../lessons/04_functions/functions.cpp
   :linenos:
   :emphasize-lines: 1,5
   :lines: 20-26


The first is a correct sum
The second actually computes a difference to demonstrate this function overloading.

When calling ``sum()`` with ``double`` input, we access the first function and get a correct sum.
If we call it with ``float`` input, we get the wrong value.

.. literalinclude:: ../../../lessons/04_functions/functions.cpp
   :linenos:
   :emphasize-lines: 11-12
   :lines: 1,39-40,64-72,98-100


Recursive functions
-------------------
Sometimes it is easier to describe a solution of a problem not by an explicit function but by a function that references itself.
This is called a recursive function.
The most famous example is the Fibonacci sequence.
It states that the function at integer ``n`` is the sum of the function at ``n-1`` and ``n-2`` for any :math:`n>1`.
This is called the recursive case.
However, also a so-called base case is needed that stops the reference to further self-references.
In the case of the Fibonacci sequence this is ``n=0`` is defined as ``0`` and ``n=1`` is defined as 1.

.. literalinclude:: ../../../lessons/04_functions/functions.cpp
   :linenos:
   :emphasize-lines: 3-10
   :lines: 1,28-37,40,75-78,98-100


Lambda functions
----------------
Sometimes, you will need a function in C++ that you do not want to write a full function definition outside your ``main`` function for.
This might be needed e.g. in sorting, where you can define a function that describes how to order elements, like whether small and capital letters are equal or have a preference which should go first.
For such an occasion, where one wants to be lazy, there is the option to define a function in-place.
Such functions are called lambda functions.

.. literalinclude:: ../../../lessons/04_functions/functions.cpp
   :linenos:
   :emphasize-lines: 4,9,15
   :lines: 1,39-40,82-100

The lambda function syntax is as follows:

.. code-block:: cpp

    auto lambda_function_name = [global_variable](int var1, double var2){
        ...
        return some_value
    };

where ``auto`` is a unspecified type of the function, ``lambda_function_name`` is the name of your lambda function, in brackets ``[...]`` are a list of variables you include from ouside the function scope (but can not change) and in parenthesis ``(...)`` is a list of arguments.
In curly brackets ``{...}`` follows the function body as in any function, including a ``return`` statement.
