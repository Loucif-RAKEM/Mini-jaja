# Generate all Node children (.h and .cpp files) from the file "nodeList"

cat nodesList | while read fileName nbChildren;
    do
        cppFile=$fileName"Node.cpp"
        hFile=$fileName"Node.h"
        rm -rf $cppFile $hFile 
        upper=$(echo $fileName | tr '[:lower:]' '[:upper:]')"NODE_H";
        lower=$(echo $fileName | tr '[:upper:]' '[:lower:]');
        endif="#endif";

        # .h FILE
        echo "#ifndef "$upper > $hFile
        echo "#define "$upper >> $hFile
        echo "" >> $hFile
        echo "#include \"Node.h\"" >> $hFile
        echo "class VisitComp;" >> $hFile
        echo "class VisitInterp;" >> $hFile
        echo "class Memory;" >> $hFile
        echo "" >> $hFile
        echo "class "$fileName"Node: public Node{" >> $hFile
        echo "" >> $hFile
        echo "    public:" >> $hFile
        ctor=$fileName"Node("
        if test "$nbChildren" -gt "0"
        then
            for i in $(seq $nbChildren)
            do
                ctor=$ctor"Node* child$i,"
            done
            ctor=${ctor%?}
        else
            ctor=$ctor"const char* label"
        fi
        ctor=$ctor");"
        echo "        "$ctor | sed 's/,/, /g' >> $hFile
        echo "        ~"$fileName"Node();" >> $hFile
        echo "        virtual std::string accept(VisitComp* v, int flag=0);" >> $hFile
        echo "        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);" >> $hFile
        echo "" >> $hFile
        echo "};" >> $hFile
        echo "" >> $hFile
        echo "#endif " >> $hFile


        # .cpp FILE
        echo "#include \""$hFile"\"" > $cppFile
        echo "#include \"VisitComp.h\"" >> $cppFile
        echo "#include \"VisitInterp.h\"" >> $cppFile
        echo "#include \"../LibInterpreter/Stack.h\"" >> $cppFile
        #echo "#include \"../LibInterpreter/Tuple.h\"" >> $cppFile
        
        echo "" >> $cppFile
        ctor=$fileName"Node::"$fileName"Node("
        if test "$nbChildren" -gt "0"
        then
            for i in $(seq $nbChildren)
            do
                ctor=$ctor"Node* child$i,"
            done
            ctor=${ctor%?}
            ctor=$ctor"): Node(\"$lower\", $nbChildren){"
        else ctor=$ctor"const char* label): Node(label, $nbChildren){"
        fi
        echo $ctor | sed 's/,/, /g' >> $cppFile
        for i in $(seq $nbChildren)
        do
            echo "    appendChild(child$i);" >> $cppFile
        done
        echo "}" >> $cppFile
        echo "" >> $cppFile
        echo $fileName"Node::~"$fileName"Node(){}" >> $cppFile
        echo "" >> $cppFile
        echo "string "$fileName"Node::accept(VisitComp* v, int flag){" >> $cppFile
        echo "    return v->visit(this, flag);" >> $cppFile
        echo "}" >> $cppFile
        echo "" >> $cppFile
        echo "string "$fileName"Node::accept(VisitInterp* v, Memory* mem, int flag){" >> $cppFile
        echo "    return v->visit(this, mem, flag);" >> $cppFile
        echo "}" >> $cppFile
        echo "" >> $cppFile

    done;
