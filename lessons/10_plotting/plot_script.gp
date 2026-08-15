set terminal pngcairo enhanced font 'arial,10' size 800,600
set output 'data.png'

# set labels
set xlabel 'x'
set ylabel 'y = sin(x)'
set title 'plot data from file'

# plot the data
plot 'data.dat' using 1:2 with linespoints title 'data from file'

# Reset output (optional, but good practice)
set output

