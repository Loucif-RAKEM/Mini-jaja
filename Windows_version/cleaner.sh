if test -e Makefile;
then
    make clean
fi
rm -rf moc_* && 
rm -rf */moc_* && 
rm -rf Makefile* && 
rm -rf *.o && 
rm -rf *~ && 
rm -rf */*~ &&
rm -rf */Makefile*
rm -rf */lib* && 
rm -rf */*.o && 
rm -rf GUI/GUI && 
rm -rf UnitTest/tst_comptest
