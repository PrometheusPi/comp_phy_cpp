Templates
=========


Introduction
------------
In the C programming language, a function interface had to specify the arguments types.
If one wrote e.g. a ``sum()`` function with two ``float`` arguments, that returns the sum as ``float``, this worked as expected for ``float`` datatypes.
But if one provided ``double`` as arguments, the compiler would cast those ``double`` values to ``float`` values and the ``sum()`` function would return a ``float``.
This, of course, would reduce the precision of the calulation.
To get a ``double`` version of the function, one needed to rewrite everything in ``double`` so that there was no need to cast.
