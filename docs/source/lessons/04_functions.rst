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
   :lines: 7-9
