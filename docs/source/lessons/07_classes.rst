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


Simple class
------------
As a simple example, let us define a class for particles.
This class will provide a 2-dimensional position of our particle, stored as ``double`` value ``x`` and ``y``, and a ``radius``.
These are ``public`` values.
Additionally, the class allows for a ``name`` of each particle, that is ``protected``.

.. literalinclude:: ../../../lessons/07_classes/classes.cpp
   :linenos:
   :language: cpp
   :emphasize-lines: 5-8,25-26
   :lines: 1-27
