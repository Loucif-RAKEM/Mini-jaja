cd GUI && rm -f GUI && qmake && cd .. && 
cd Interpreter && rm -f libInterpreter && qmake && cd .. && 
cd LexerParser && rm -f libLexerParser && qmake && cd .. && 
cd LibNode && rm -f libLibNode && qmake && cd .. &&
cd Compile && rm -f libCompile && qmake && cd .. &&

qmake &&
make && 
clear &&

mkdir -p Log && 
rm -f Log/new_log.log;

echo "##########################################" > Log/new_log.log && 
date >> Log/new_log.log && 
./UnitTest/tst_comptest >> Log/new_log.log
echo "##########################################" >> Log/new_log.log && 
cat Log/new_log.log >> Log/log.log
echo "" >> Log/log.log

echo "" &&
echo "##########################################" && 
echo "EXECUTION DES TESTS :" && 
cat Log/new_log.log &&
echo "" &&

cd GUI && 
./GUI
