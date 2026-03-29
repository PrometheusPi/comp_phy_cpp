Classes
=======


Introduction
------------
Classes are complex data types, that can contain user-defined data/attributes and methods.


Structure of classes
--------------------
A class in C++ is defined by

.. code-block:: cpp

    class NameOfClass{
       ...
    };

Inside the curly brackets all variables/attributes and functions/methods of the class are defined.
Both attributes and methods can be defines as

+--------------+---------------------------------------------------------------------------------------------------------------------------+
| keyword      | description                                                                                                               |
+==============+===========================================================================================================================+
| ``public``   | meaning they can be accessed changed from outside of the class,                                                           |
+--------------+---------------------------------------------------------------------------------------------------------------------------+
| ``private``  | meaning they can be only accessed and changed from within the class                                                       |
+--------------+---------------------------------------------------------------------------------------------------------------------------+
| ``protected``| being similar to ``private`` but classes that inheritat (see later) can also use these attributes and methods.            |
+--------------+---------------------------------------------------------------------------------------------------------------------------+
