# CMake generated Testfile for 
# Source directory: /home/taylorjh/Desktop/Belousov-Zhabotinsky/DENSE/test/her_model_2014
# Build directory: /home/taylorjh/Desktop/Belousov-Zhabotinsky/test/her_model_2014
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(her_test "/usr/bin/cmake" "-Dtest_cmd=/home/taylorjh/Desktop/Belousov-Zhabotinsky/test/her_model_2014/her2014_simulation|--param-sets|/home/taylorjh/Desktop/Belousov-Zhabotinsky/DENSE/test/her_model_2014/param_sets.csv|--cell-total|10|--tissue-width|5|--time-total|3000|--anlys-intvl|.01|--step-size|.01|--analysis|/home/taylorjh/Desktop/Belousov-Zhabotinsky/DENSE/test/her_model_2014/analyses.xml" "-Doutput_blessed=/home/taylorjh/Desktop/Belousov-Zhabotinsky/DENSE/test/her_model_2014/anlys_basic_a.csv" "-Doutput_test=/home/taylorjh/Desktop/Belousov-Zhabotinsky/test/her_model_2014/anlys_basic_a.csv" "-P" "/home/taylorjh/Desktop/Belousov-Zhabotinsky/DENSE/test/her_model_2014/run_test.cmake")
subdirs("source")
