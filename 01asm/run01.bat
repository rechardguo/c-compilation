@SET PATH=.\MinGW32\bin;%PATH%

make clean & all

.\bochs-2.7\bochsdbg -f bochsrc.bxrc -q
