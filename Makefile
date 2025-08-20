start:
  gcc your_file.c linreg.h linreg.c average.h average.c standard_devaition.h standard_devaition.c -lm -o test && ./test
clear:
  rm -rf test 
