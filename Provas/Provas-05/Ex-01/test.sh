#!/usr/bin/bash

gcc -o cpbuild  complex.c cpbuild.c -lm
gcc -o cpview complex.c cpview.c -lm
gcc -o cpsum complex.c cpsum.c -lm
gcc -o cpmult complex.c cpmult.c -lm
gcc -o cpsub complex.c cpsub.c -lm
gcc -o cpdiv complex.c cpdiv.c -lm


./cpbuild -a 3+4i cp1
./cpview -v cp1
./cpbuild -v "[3,4]" cp2
./cpview -p cp2
./cpbuild -p "5;53.13" cp3
./cpview -v cp3
./cpsum cp1 cp2 cp_sum_1_2
./cpsub cp1 cp3 cp_sub_1_3
./cpmult cp2 cp3 cp_mult_2_3
./cpdiv cp2 cp3 cp_div_2_3
./cpview -a cp_sum_1_2
./cpview -v cp_sub_1_3
./cpview -p cp_mult_2_3
./cpview -a cp_div_2_3