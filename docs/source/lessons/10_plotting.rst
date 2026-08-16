Plotting data
=============


Introduction
------------
In order to display results of our simulations, we will output the results to text and then plot them via a software called ```gnuplot``.
This is not an ideal solution, as we need to also learn some basic ```gnuplot`` commands.
But I believe this is a very simple solution that will work on any system.
For details on ``gnuplot`` see: https://gnuplot.sourceforge.net/

Generating data to plot
-----------------------
As a simple example, we will plot a sinus curve.
This combines knowledge of :doc:`04_functions` and :doc:`05_io` .
The C++ code, that computes :math:`x` and :math:`y=sin(x)` values in a loop and stores them in a ``std::vectot<double>`` and the writes both vectors two a file ``data.dat`` is given below:

.. literalinclude:: ../../../lessons/10_plotting/create_data.cpp
   :linenos:
   :language: cpp
