Templates
=========


Introduction
------------
In the C programming language, a function interface had to specify the arguments types.
If one wrote e.g. a ``sum()`` function with two ``float`` arguments, that returns the sum as ``float``, this worked as expected for ``float`` datatypes.
But if one provided ``double`` as arguments, the compiler would cast those ``double`` values to ``float`` values and the ``sum()`` function would return a ``float``.
This, of course, would reduce the precision of the calulation.
To get a ``double`` version of the function, one needed to rewrite everything in ``double`` so that there was no need to cast.
This shortcomming is shown via the function ``sum()`` and the first print call in the following code:

.. literalinclude:: ../../../lessons/08_templates/templates.cpp
   :linenos:
   :language: cpp


When calling ``sum()`` with ``double``, the numbers are both rounded to 1 and the sum is 2.
If computing the sum via ``+``, the small difference survives.

Template specialization
-----------------------
A second example of how to use templates to make your code more efficient is the power function ``pow(a, b)`` :math:`= a^b`.
In the standarad library, it takes two ``float`` or ``double`` values.
But if the expoenet :math:`b` is a (positive) integer, multiplying :math:`a` :math:`b` times is more efficient.
Thus we define a general ``power()`` function that uses the ``pow()`` function.
But of ``b`` is an integer, we specilize the function call and use a ``for`` loop instead.
